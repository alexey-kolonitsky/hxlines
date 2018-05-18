package view;

import model.UserData;
import view.SimpleButton;
import events.GameEvent;
import StaticConfig;
import openfl.events.Event;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.display.Bitmap;
import GameAssets;

class MenuScreen extends Sprite {

    //-----------------------------
    // gameRunning
    //-----------------------------

    private var _gameRunning:Bool = false;
    private var _gameRunningChanged:Bool = true;
    public var gameRunning(get,set):Bool;

    /**
     * This flag used for display continue button. If gameRunning is TRUE,
     * user can continue it, otherwise continue button hide and user can
     * only start new game.
     */
    public function get_gameRunning():Bool {
        return _gameRunning;
    }

    public function set_gameRunning(value:Bool) {
        if (_gameRunning != value) {
            _gameRunning = value;
            _gameRunningChanged = true;
            updateGameRunning();
        }
        return _gameRunning;
    }


    //-----------------------------
    // users
    //-----------------------------

    private var _users:Array<UserData>;
    public var users(get,set):Array<UserData>;

    /**
     *  Full list of players in top list.
     */
    public function get_users():Array<UserData> {
        return _users;
    }

    public function set_users(value:Array<UserData>) {
        _users = value;
        if (resultBoard != null)
            resultBoard.users = _users;
        return _users;
    }


    //-----------------------------
    // currentUser
    //-----------------------------

    private var _currentUser:UserData;
    public var currentUser(get,set):UserData;

    /**
     *  Current user result.
     */
    public function get_currentUser():UserData {
        if (resultBoard != null)
            return resultBoard.currentUser;
        return null;
    }

    public function set_currentUser(value:UserData) {
        _currentUser = value;
        if (resultBoard != null)
            resultBoard.currentUser = _currentUser;
        return _currentUser;
    }


    //-----------------------------
    // Constructor
    //-----------------------------

    public function new() {
        super();
        _currentUser = new UserData();

        imgBackground = new Bitmap(GameAssets.BACKGROUND_MENU_BITMAP);
        addChild(imgBackground);

        btnPlayGame = new SimpleButton(new Bitmap(GameAssets.BTN_START_BITMAP));
        btnPlayGame.addEventListener(MouseEvent.CLICK, btnPlayGame_clickHandler);
        addChild(btnPlayGame);

        btnNewGame = new SimpleButton(new Bitmap(GameAssets.BTN_RESTART_BITMAP));
        btnNewGame.addEventListener(MouseEvent.CLICK, btnNewGame_clickHandler);
        addChild(btnNewGame);

        btnContinueGame = new SimpleButton(new Bitmap(GameAssets.BTN_CONTINUE_BITMAP));
        btnContinueGame.addEventListener(MouseEvent.CLICK, btnContinueGame_clickHandler);
        addChild(btnContinueGame);

        resultBoard = new ResultBoard();
        resultBoard.users = _users;
        resultBoard.currentUser = _currentUser;
        addChild(resultBoard);

        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }


    //-------------------------------------------------------------------
    //  Private
    //-------------------------------------------------------------------

    private var imgBackground:Bitmap;
    private var btnNewGame:SimpleButton;
    private var btnPlayGame:SimpleButton;
    private var btnContinueGame:SimpleButton;
    private var resultBoard:ResultBoard;

    private function updateGameRunning() {
        if (_gameRunningChanged) {
            if (_gameRunning) {
                btnNewGame.visible = true;
                btnContinueGame.visible = true;
                btnPlayGame.visible = false;
            } else {
                btnNewGame.visible = false;
                btnContinueGame.visible = false;
                btnPlayGame.visible = true;
            }
            _gameRunningChanged = false;
        }
    }

    private function addedToStageHandler(event:Event) {
        btnNewGame.x = StaticConfig.BOARD_LEFT + 10;
        btnNewGame.y = 80;
        btnPlayGame.x = StaticConfig.BOARD_LEFT + 10;
        btnPlayGame.y = 80;
        btnContinueGame.x = StaticConfig.BOARD_RIGHT - 10 - btnContinueGame.width;
        btnContinueGame.y = 80;
        resultBoard.x = StaticConfig.BOARD_LEFT + 7;
        resultBoard.y = 180;
        updateGameRunning();
    }

    private function btnNewGame_clickHandler(event:MouseEvent) {
        dispatchEvent(new GameEvent(GameEvent.CREATE));
    }

    private function btnPlayGame_clickHandler(event:MouseEvent) {
        dispatchEvent(new GameEvent(GameEvent.CREATE));
    }

    private function btnContinueGame_clickHandler(event:MouseEvent) {
        dispatchEvent(new GameEvent(GameEvent.START));
    }
}
