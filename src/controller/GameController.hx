package controller;

import view.TimeFormatter;
import config.StaticConfig;
import core.GameField;
import core.IGameLoopHandler;
import events.GameEvent;
import model.GameData;
import model.GameState;
import view.GameScreen;

class GameController implements IGameLoopHandler {

    //-----------------------------
    // state property proxy
    //-----------------------------

    public var state(get,set):GameState;
    public function get_state():GameState {
        if (_game != null)
            return _game.state;
        return GameState.NONE;
    }

    public function set_state(value:GameState) {
        if (_game != null) {
            return _game.state = value;
        } else {
            throw "Game object is not defined. Failure access to Access to state field is failure.";
        }
        return GameState.NONE;
    }



    //-----------------------------
    // game duration
    //-----------------------------

    public var duration(get,never):Float;
    public function get_duration():Float {
        if (_game != null)
            return _game.duration;
        return 0;
    }
	
    public var score(get, never):Int;
    private function get_score():Int {
        if (_game != null) {
            return _game.score;
        }
        return 0;
	}


    //-------------------------------------------------------------------
    // Methods
    //-------------------------------------------------------------------

    //-----------------------------
    // Constructor
    //-----------------------------

    public function new(gameData:GameData, gameRenderer:GameScreen) {
        _game = gameData;
        _view = gameRenderer;
        _view.addEventListener(GameEvent.MOVE, view_moveHandler);
        _view.addEventListener(GameEvent.PATH, view_pathHandler);

        _gameField = new GameField(gameData.fields);
        _gameField.fieldValues = [ for(i in 0...StaticConfig.START_COLOR_COUNT) (i + 1) ];
        if (_gameField.isEmpty()) {
            _gameField.addRandomValues();
        }
    }

    public function dispose() {
        _game = null;
        _gameField = null;
        _view.removeEventListener(GameEvent.MOVE, view_moveHandler);
        _view.removeEventListener(GameEvent.PATH, view_pathHandler);
        _view = null;
    }

    private function view_moveHandler(event:GameEvent):Void {
        var isMoved:Bool = false;
        if (_game.startIndex == event.index) { // second selection of the same field (clear selectin)
            _gameField.clearStartIndex();
        } else {
            isMoved = _gameField.move(event.index);
        }
        _game.startIndex = _gameField.startIndex;
        _game.endIndex = _gameField.endIndex;
        _game.path = _gameField.path;
        if (isMoved) {
            var lines:Array<Line> = _gameField.findCompleteLines(event.index);
            removeLines(lines);
            if (_gameField.isFull()) {
                state = GameState.GAME_OVER;
            } else {
                var positions:Array<Int> = _gameField.addRandomValues();
                for (position in positions) {
                    var lines:Array<Line> = _gameField.findCompleteLines(position);
                    removeLines(lines);
                }
            }
        }
    }

    private function removeLines(lines:Array<Line>) {
        for (line in lines) {
            removeLine(line);
        }
    }

    private function removeLine(line:Line) {
        _gameField.removeLine(line);
        _game.score += line.length * _game.level;
        updateLevel();
    }

    private function view_pathHandler(event:GameEvent):Void {
        _game.endIndex = _gameField.endIndex = event.index;
        _game.path = _gameField.path;
    }


    //-------------------------------------------------------------------
    //  Implement
    //-------------------------------------------------------------------


    public function update(time:Float, deltaTime:Float) {
        if (_game == null)
            return;

        if (state == GameState.PLAY) {
            trace("update. deltaTime=" + TimeFormatter.format(deltaTime));
            _game.duration += deltaTime;
            if (_gameField.isFull()) {
                state = GameState.GAME_OVER;
            }
        }
        _view.render(_game);
    }


    //-------------------------------------------------------------------
    //  Private
    //-------------------------------------------------------------------

    private var _game:GameData;
    private var _view:GameScreen;
    private var _gameField:GameField;

    private function updateLevel() {
        var level:Int;
        if (_game.score <= StaticConfig.LEVEL1_SCORE) {
            level = 1;
        } else if (_game.score <= StaticConfig.LEVEL2_SCORE) {
            level = 2;
        } else if (_game.score <= StaticConfig.LEVEL3_SCORE) {
            level = 3;
        } else if (_game.score <= StaticConfig.LEVEL4_SCORE) {
            level = 4;
        } else {
            level = 5;
        }
        if (level != _game.level) {
            _game.level = level;
            _gameField.fieldValues = [ for(i in 0...StaticConfig.START_COLOR_COUNT + level) (i + 1) ];
        }

    }

    private function isGameEmpty():Bool {
        return _game.duration > 0;
    }

}
