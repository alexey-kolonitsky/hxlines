package controller;

import core.IGameLoopHandler;
import events.GameOverEvent;
import haxe.remoting.AsyncProxy;
import haxe.remoting.HttpAsyncConnection;
import model.GameState;
import model.UserData;
import openfl.events.Event;
import view.GameView;
import core.GameLoop;
import events.GameEvent;
import config.StaticConfig;
import model.GameData;

class ScoresApi extends AsyncProxy<api.IHighScoreApi> {}

class AppController {

    private var _gameLoop:GameLoop;
    private var _game:GameController;
    private var _gameView:GameView;
    private var scoresApi:ScoresApi;
    private var connection:HttpAsyncConnection;

    public function new(view:GameView) {
        _gameView = view;
        _gameView.gameScreen.addEventListener(GameEvent.MENU, eventHandler);
        _gameView.gameScreen.addEventListener(GameEvent.GAME_OVER, eventHandler);
        _gameView.menuScreen.addEventListener(GameEvent.CREATE, eventHandler);
        _gameView.menuScreen.addEventListener(GameEvent.START, eventHandler);
        _gameView.gameScreen.addEventListener(GameOverEvent.GAME_OVER, handleGameOver);
        _gameLoop = new GameLoop();
        _gameLoop.start();
		
        connection = HttpAsyncConnection.urlConnect(StaticConfig.leadBoardURL);
        connection.setErrorHandler(function (error) { trace (error); });
        scoresApi = new ScoresApi(connection.api);
        requestScoreboard();
    }
	
	private function requestScoreboard():Void {
        scoresApi.getHightScores(StaticConfig.LEAD_BOARD_LINES, updateHighScores);
	}

	private function updateHighScores(scores:Array<UserData>):Void {
        _gameView.menuScreen.users = scores;
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
	
	private function handleGameOver(event:GameOverEvent):Void {
        if (event.submitHighscore) {
            var currentUser:UserData = _gameView.menuScreen.currentUser;
            currentUser.displayName = event.userName;
            currentUser.score = _game.score;
            currentUser.time = _game.duration;
            _gameView.menuScreen.currentUser = currentUser;
			
            //scoresApi.submitHighScore(currentUser); //no complete callback
            connection.api.submitHighScore.call([currentUser], function (data) { requestScoreboard(); });
        }
		
        stopGame();
        newGameMenu();
	}
}
