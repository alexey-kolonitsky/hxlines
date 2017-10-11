package view;
import haxe.remoting.AsyncProxy;
import haxe.remoting.HttpAsyncConnection;
import model.UserData;
import openfl.events.MouseEvent;
import events.GameEvent;
import config.StaticConfig;
import flash.text.TextFieldType;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormat;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.display.Bitmap;
import assets.GameAssets;

class ResultBoard extends Sprite {
	
    public function new() {
        super();
        imgBackground = new Bitmap(GameAssets.LEADBOARD_BITMAP);
        addChild(imgBackground);

        // Create rows for top users
        usernameTextFields = [ for(i in 0...StaticConfig.LEAD_BOARD_LINES) null ];
        scoreTextFields = [ for(i in 0...StaticConfig.LEAD_BOARD_LINES) null ];
        timeTextFields = [ for(i in 0...StaticConfig.LEAD_BOARD_LINES) null ];

        var color:Int = 0, yPos:Float = 0;
        for (i in 0...StaticConfig.LEAD_BOARD_LINES) {
            var isOddRow = (i % 2 == 1);
            color = isOddRow ? StaticConfig.LEAD_BOARD_EVEN_COLOR : StaticConfig.LEAD_BOARD_ODD_COLOR;
            yPos = 73 + i * StaticConfig.LEAD_BOARD_LINE_HEIGHT;
            usernameTextFields[i] = createTextField(color);
            usernameTextFields[i].y = yPos;
            usernameTextFields[i].x = StaticConfig.LEAD_BOARD_COL1;
            addChild(usernameTextFields[i]);

            scoreTextFields[i] = createTextField(color);
            scoreTextFields[i].y = yPos;
            scoreTextFields[i].x = StaticConfig.LEAD_BOARD_COL2;
            addChild(scoreTextFields[i]);

            timeTextFields[i] = createTextField(color);
            timeTextFields[i].y = yPos;
            timeTextFields[i].x = StaticConfig.LEAD_BOARD_COL3;
            addChild(timeTextFields[i]);
        }

        // Create row for current user
        color = StaticConfig.LEAD_BOARD_EVEN_COLOR;
        yPos = 73 + StaticConfig.LEAD_BOARD_LINES * StaticConfig.LEAD_BOARD_LINE_HEIGHT;
        usernameTextField = createTextInput(color);
        usernameTextField.maxChars = StaticConfig.LEAD_BOARD_USERNAME_MAX_LENGTH;
        usernameTextField.y = yPos;
        usernameTextField.x = StaticConfig.LEAD_BOARD_COL1;
        addChild(usernameTextField);

        scoreTextField = createTextField(color);
        scoreTextField.y = yPos;
        scoreTextField.x = StaticConfig.LEAD_BOARD_COL2;
        addChild(scoreTextField);

        timeTextField = createTextField(color);
        timeTextField.y = yPos;
        timeTextField.x = StaticConfig.LEAD_BOARD_COL3;
        addChild(timeTextField);

        imgBackground.addEventListener(MouseEvent.CLICK, background_mouseClickHandler);
    }

    //-----------------------------
    // users
    //-----------------------------

    private var _users:Array<UserData> = null;
    public var users(get,set):Array<UserData>;

    public function get_users():Array<UserData> {
        return _users;
    }

    public function set_users(value:Array<UserData>) {
        _users = value;
        if (_users != null) {
            for (i in 0..._users.length) {
                updateRow(i, _users[i]);
            }
        }
        return _users;
    }


    //-----------------------------
    // current user
    //-----------------------------

    private var _currentUser:UserData = null;
    public var currentUser(get,set):UserData;

    public function get_currentUser():UserData {
        if (_currentUser != null) {
            _currentUser.displayName = usernameTextField.text;
        }
        return _currentUser;
    }

    public function set_currentUser(value:UserData) {
        if (value == null) {
            return _currentUser = null;
        }
        _currentUser = value.clone();
        updateUserRow();
        return _currentUser;
    }


    //-------------------------------------------------------------------
    //
    //  Private
    //
    //-------------------------------------------------------------------

    private var imgBackground:Bitmap;
    private var scoreTextFields:Array<TextField> = null;
    private var timeTextFields:Array<TextField> = null;
    private var usernameTextFields:Array<TextField> = null;

    private var usernameTextField:TextField = null;
    private var scoreTextField:TextField = null;
    private var timeTextField:TextField = null;

    private function createTextField(textColor:UInt):TextField
    {
        var result:TextField = new TextField();
        result.selectable = true;
        result.type = TextFieldType.DYNAMIC;
        result.autoSize = TextFieldAutoSize.LEFT;
//        result.antiAliasType = AntiAliasType.ADVANCED;
        result.multiline = false;
        result.defaultTextFormat = new TextFormat("_sans", 16, textColor);
        result.mouseEnabled = true;
        return result;
    }

    private function createTextInput(textColor:UInt):TextField
    {
        var result:TextField = new TextField();
        result.type = TextFieldType.INPUT;
        result.autoSize = TextFieldAutoSize.LEFT;
//        result.antiAliasType = AntiAliasType.ADVANCED;
        result.multiline = false;
        result.defaultTextFormat = new TextFormat("_sans", 16, textColor);
        return result;
    }

    private function updateUserRow() {
        // User name updated only it not defined yet. In other case different
        // value in ValueObject and text field is signal for update
        // value object.
        if (usernameTextField.text == "" || usernameTextField.text == StaticConfig.LEAD_BOARD_DEFAULT_USERNAME) {
            usernameTextField.text = _currentUser.displayName;
            usernameTextField.setSelection(0, _currentUser.displayName.length - 1);
        }
        else if (usernameTextField.text != _currentUser.displayName) {
            //TODO: Save result
        }
        scoreTextField.text = Std.string(_currentUser.score);
        timeTextField.text = TimeFormatter.format(_currentUser.time);
    }

    public function updateRow(index:Int, user:UserData) {
        usernameTextFields[index].text = user.displayName;
        scoreTextFields[index].text = Std.string(user.score);
        timeTextFields[index].text = Std.string(TimeFormatter.format(user.time));
        trace("updateRow " + index + ": " + user, this);
    }

    private function background_mouseClickHandler(event:MouseEvent) {
        trace("background_mouseClickHandler");
    }
}
