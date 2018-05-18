package ;
class StaticConfig {

    public static var APPLICATION_NAME(default,never):String = "Lines"; /* id */
    public static var VERSION(default,never):String = "0.0.1";

    public static var DEBUG(default,never):Bool = true;

    public static var UPDATE_DELAY(default,never):Float = 60; /* milliseconds */
    public static var MOVE_DELAY(default,never):Float = 200; /* milliseconds */

    public static var TURN_CHIP_NUMBER(default,never):Int = 3; /* count */
    public static var LINE_LENGTH(default,never):Int = 5; /* count */

    public static var EMPTY_CELL_CODE(default,never):Int = 0; /* id */

    public static var LEVEL1_SCORE(default,never):Int = 60;
    public static var LEVEL2_SCORE(default,never):Int = 120;
    public static var LEVEL3_SCORE(default,never):Int = 180;
    public static var LEVEL4_SCORE(default,never):Int = 300;

    public static var COLOR_COUNT(default,never):Int = 9; /* count */
    public static var START_COLOR_COUNT(default,never):Int = 3; /* count */

    //-------------------------------------------------------------------
    // Lead board settings
    //-------------------------------------------------------------------

    public static var LEAD_BOARD_DEFAULT_USERNAME(default,never):String = "ananimouse";
    public static var LEAD_BOARD_USERNAME_MAX_LENGTH(default,never):Int = 19;
    public static var LEAD_BOARD_LINES(default,never):Int = 9; /* count */
    public static var LEAD_BOARD_EVEN_COLOR(default,never):Int = 0x000000; /* color */
    public static var LEAD_BOARD_ODD_COLOR(default,never):Int = 0xFFFFFF; /* color */
    public static var LEAD_BOARD_LINE_HEIGHT(default,never):Int = 23; /* pxels */
    public static var LEAD_BOARD_COL1(default,never):Float = 10; /* pixels */
    public static var LEAD_BOARD_COL2(default,never):Float = 240; /* pixels */
    public static var LEAD_BOARD_COL3(default,never):Float = 350; /* pixels */


    //-------------------------------------------------------------------
    // Game board coordinate
    //-------------------------------------------------------------------

    public static var TILE_WIDTH(default,never):Int = 50; /* pixels */
    public static var TILE_HEIGHT(default,never):Int = 50; /* pixels */

    public static var BOARD_WIDTH(default,never):Int = 9; /* count */
    public static var BOARD_HEIGHT(default,never):Int = 9; /* count */
    public static var BOARD_CELLS(default,never):Int = BOARD_WIDTH * BOARD_HEIGHT; /* count */

    public static var BOARD_LEFT(default,never):Float = 26; /* pixels */
    public static var BOARD_TOP(default,never):Float = 70; /* pizels */
    public static var BOARD_RIGHT(default,never):Float = BOARD_LEFT + TILE_WIDTH * BOARD_WIDTH; /* pixels */
    public static var BOARD_BOTTOM(default,never):Float = BOARD_TOP + TILE_HEIGHT * BOARD_HEIGHT; /* pixels */

    //-------------------------------------------------------------------
    // Dynamic properties
    //-------------------------------------------------------------------

    private static var _sourceCodeURL:String = "";
    public static var sourceCodeURL(get,null):String;

    public static function get_sourceCodeURL():String {
        return _sourceCodeURL;
    }

    private static var _leadBoardURL:String = "http://localhost/lines/index.php";
    public static var leadBoardURL(get,null):String;

    public static function get_leadBoardURL():String {
        return _leadBoardURL;
    }
}
