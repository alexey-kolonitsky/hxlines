package controller;

import core.IGameLoopHandler;
import model.GameState;
import view.GameView;
import core.GameLoop;
import events.GameEvent;
import config.StaticConfig;
import model.GameData;

class AppController {

    private var _gameLoop:GameLoop;
    private var _game:GameController;
    private var _gameView:GameView;

    public function new(view:GameView) {
        _gameView = view;
        _gameView.gameScreen.addEventListener(GameEvent.MENU, eventHandler);
        _gameView.gameScreen.addEventListener(GameEvent.GAME_OVER, eventHandler);
        _gameView.menuScreen.addEventListener(GameEvent.CREATE, eventHandler);
        _gameView.menuScreen.addEventListener(GameEvent.START, eventHandler);
        _gameLoop = new GameLoop();
        _gameLoop.start();
    }

    public function newGame() {
        if (_game == null) {
            _game = new GameController(createGameSession(), _gameView.gameScreen);
        }
    }

    public function playGame() {
        if (_game != null) {
            _game.state = GameState.PLAY;
            _gameLoop.add(_game);
        }
    }

    public function pauseGame() {
        if (_game != null) {
            _game.state = GameState.PAUSE;
            _gameLoop.remove(_game);
        }
    }

    public function stopGame() {
        if (_game != null) {
            _gameLoop.remove(_game);
            _game.dispose();
            _game = null;
        }
    }

    public function newGameMenu() {
        _gameView.showMenu(false);
    }

    public function showMenu() {
        _gameView.showMenu(true);
    }

    public function hideMenu() {
        _gameView.hideMenu();
    }


    private function createGameSession():GameData {
        //TODO: Resotre data from local storage
        var gameData = new GameData();
        gameData.sessionId = Std.string(Math.random() * 1000);
        gameData.fields = [ for (i in 0...StaticConfig.BOARD_CELLS) StaticConfig.EMPTY_CELL_CODE];
        return gameData;
    }

    private function eventHandler(event:GameEvent):Void {
        switch (event.type) {
            case GameEvent.MENU:
                pauseGame();
                showMenu();
            case GameEvent.CREATE:
                stopGame();
                newGame();
                hideMenu();
                playGame();
            case GameEvent.START:
                hideMenu();
                playGame();
            case GameEvent.GAME_OVER:
                stopGame();
                newGameMenu();
        }
    }
}
