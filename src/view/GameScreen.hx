package view;
import model.GameState;
import model.GameData;
import view.controls.SimpleButton;
import openfl.text.TextFormat;
import openfl.text.AntiAliasType;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import events.GameEvent;
import assets.GameAssets;
import openfl.events.Event;
import config.StaticConfig;
import flash.events.MouseEvent;
import openfl.utils.Assets;
import openfl.text.TextField;
import openfl.display.Bitmap;
import openfl.display.Sprite;

class GameScreen extends Sprite {

    public function new() {
        super();
        background = new Bitmap(GameAssets.BACKGROUND_BITMAP);
        addChild(background);

        tfDuration = createTextField();
        addChild(tfDuration);

        tfScore = createTextField();
        addChild(tfScore);

        imgDuration = new Bitmap(GameAssets.IMG_TIME_BITMAP);
        addChild(imgDuration);

        imgScore = new Bitmap(GameAssets.IMG_SCORE_BITMAP);
        addChild(imgScore);

        btnBack = new SimpleButton(new Bitmap(GameAssets.BTN_MENU_BITMAP));
        btnBack.addEventListener(MouseEvent.CLICK, btnBack_clickHandler);
        addChild(btnBack);

        _fields = new Array<Field>();
        for (i in 0...StaticConfig.BOARD_CELLS) {
            var colIndex:Int = i % StaticConfig.BOARD_WIDTH;
            var rowIndex:Int = Math.floor((i - colIndex) / StaticConfig.BOARD_WIDTH);
            var field:Field = new Field();
            field.x = StaticConfig.BOARD_LEFT + colIndex * StaticConfig.TILE_WIDTH;
            field.y = StaticConfig.BOARD_TOP + rowIndex * StaticConfig.TILE_HEIGHT;
            _fields.push(field);
            addChild(field);
        }

        gameOverPopup = new Bitmap(GameAssets.GAME_OVER_POPUP);
        gameOverPopupVisible = false;
        addChild(gameOverPopup);

        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        addEventListener(Event.REMOVED_FROM_STAGE, removeFromStageHandler);
    }


    /**
     * Update game visualization according new game value object.
     * @param game
     */
    public function render(game:GameData) {
        if (game.state == GameState.PLAY) {
            gameFieldEnabled = true;
            gameOverPopupVisible = false;
            var fieldValue:Int = game.startIndex != -1 ? game.fields[game.startIndex]: 0;
            var showPath:Bool = game.startIndex != -1 && game.path != null && game.path.length > 1;
            //display colorized chips and fields for pass indexes.
            for (i in 0 ... StaticConfig.BOARD_CELLS) {
                _fields[i].select = i == game.startIndex;
                _fields[i].state = game.fields[i];
                _fields[i].background = showPath && game.path.indexOf(i) >= 0 ? fieldValue : 0;
            }
            //Update duration field
            tfDuration.text = TimeFormatter.format(game.duration);
            tfScore.text = Std.string(game.score);
            isFieldSelected = game.startIndex != -1;
        } else if (game.state == GameState.GAME_OVER) {
            gameFieldEnabled = false;
            gameOverPopupVisible = true;
        }
    }

    //-------------------------------------------------------------------
    //  Private
    //-------------------------------------------------------------------

    /**
     * This flag indicate that chip is selected and user choosing the
     * distenation for this chip.
     */
    private var isFieldSelected:Bool = false;

    /**
     * Vector with all visual fields on the board.
     */
    private var _fields:Array<Field> = null;

    /**
     * Index of selected chip
     */
    private var selectIndex:Int = -1;

    /**
     * Index of propable distanation cell
     */
    private var endIndex:Int = -1;

    private var background:Bitmap;
    private var tfDuration:TextField;
    private var tfScore:TextField;
    private var imgDuration:Bitmap;
    private var imgScore:Bitmap;
    private var gameOverPopup:Bitmap;
    private var btnBack:Sprite;

    //---------------------------------
    // gameFieldEnabled
    //---------------------------------

    private var _gameFieldEnabled:Bool = false;
    private var _gameFieldEnabledChanged:Bool = true;
    public var gameFieldEnabled(get,set):Bool;
    public function get_gameFieldEnabled() {
        return _gameFieldEnabled;
    }

    public function set_gameFieldEnabled(value:Bool) {
        if (_gameFieldEnabled != value) {
            _gameFieldEnabled = value;
            _gameFieldEnabledChanged = true;
            updateGameFieldEnabled();
        }
        return _gameFieldEnabled;
    }


    private var _gameOverPopupVisible:Bool = false;
    private var _gameOverPopupVisibleChanged:Bool = true;
    public var gameOverPopupVisible(get,set):Bool;
    public function get_gameOverPopupVisible() {
        return _gameOverPopupVisible;
    }
    public function set_gameOverPopupVisible(value:Bool) {
        if (_gameOverPopupVisible != value) {
            _gameOverPopupVisible = value;
            _gameOverPopupVisibleChanged = true;
            updateGameOverPopupVisible();
        }
        return _gameOverPopupVisible;
    }

    private function createTextField():TextField {
        var result:TextField = new TextField();
        result.selectable = false;
        result.type = TextFieldType.DYNAMIC;
        result.autoSize = TextFieldAutoSize.LEFT;
//        result.antiAliasType = AntiAliasType.ADVANCED;
        result.multiline = false;
        result.defaultTextFormat = new TextFormat("_sans", 16, 0xDECD87);
        result.mouseEnabled = false;
        return result;
    }

    private function coorToIndex(stageX:Float, stageY:Float):Int {
        var colIndex:Int = Math.floor((stageX - StaticConfig.BOARD_LEFT) / StaticConfig.TILE_WIDTH);
        var rowIndex:Int = Math.floor((stageY - StaticConfig.BOARD_TOP) / StaticConfig.TILE_HEIGHT);
        if (colIndex < 0
            || colIndex > StaticConfig.BOARD_WIDTH
            || rowIndex < 0
            || rowIndex > StaticConfig.BOARD_HEIGHT)
            return -1;
        return rowIndex * StaticConfig.BOARD_WIDTH + colIndex;
    }

    private function updateGameFieldEnabled() {
        if (stage != null && _gameFieldEnabledChanged) {

            if (_gameFieldEnabled){
                addEventListener(MouseEvent.MOUSE_DOWN, stage_mouseDownHandler);
                stage.addEventListener(MouseEvent.MOUSE_MOVE, stage_mouseMoveHandler);
            } else {
                removeEventListener(MouseEvent.MOUSE_DOWN, stage_mouseDownHandler);
                stage.removeEventListener(MouseEvent.MOUSE_MOVE, stage_mouseMoveHandler);
            }
            _gameFieldEnabledChanged = false;
        }
    }

    private function updateGameOverPopupVisible() {
        if (stage != null && gameOverPopup != null && _gameOverPopupVisibleChanged) {
            gameOverPopup.visible = _gameOverPopupVisible;
            if (_gameOverPopupVisible)
                addEventListener(MouseEvent.CLICK, gameOverPopup_clickHandler);
            else
                removeEventListener(MouseEvent.CLICK, gameOverPopup_clickHandler);
            _gameOverPopupVisibleChanged = false;
        }
    }

    private function stage_mouseDownHandler(event:MouseEvent) {
        selectIndex = coorToIndex(event.stageX,  event.stageY);
        if (selectIndex != -1) {
            dispatchEvent(new GameEvent(GameEvent.MOVE, true, false, selectIndex));
        }
    }

    private function stage_mouseMoveHandler(event:MouseEvent) {
        if (!isFieldSelected)
            return;

        var index:Int = coorToIndex(event.stageX, event.stageY);
        if (index != -1 && index != endIndex)
        {
            endIndex = index;
            dispatchEvent(new GameEvent(GameEvent.PATH, true, false, endIndex));
        }
    }

    private function btnBack_clickHandler(event:MouseEvent) {
        dispatchEvent(new GameEvent(GameEvent.MENU, true));
    }

    private function gameOverPopup_clickHandler(event:MouseEvent) {
        dispatchEvent(new GameEvent(GameEvent.GAME_OVER, true));
    }

    private function addedToStageHandler(event:Event) {
        tfDuration.x = StaticConfig.BOARD_RIGHT - 75;
        tfDuration.y = StaticConfig.BOARD_BOTTOM + 7;
        imgDuration.x = StaticConfig.BOARD_RIGHT - 100;
        imgDuration.y = StaticConfig.BOARD_BOTTOM + 7;
        tfScore.x = StaticConfig.BOARD_LEFT + 28;
        tfScore.y = StaticConfig.BOARD_BOTTOM + 7;
        imgScore.x = StaticConfig.BOARD_LEFT + 5;
        imgScore.y = StaticConfig.BOARD_BOTTOM + 7;
        btnBack.x = 20;
        btnBack.y = 20;
        gameOverPopup.x = StaticConfig.BOARD_LEFT;
        gameOverPopup.y = StaticConfig.BOARD_TOP;
        updateGameFieldEnabled();
        updateGameOverPopupVisible();
    }

    private function removeFromStageHandler(event:Event) {
        gameFieldEnabled = false;
        _gameOverPopupVisible = false;
    }
}
