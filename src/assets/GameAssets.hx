package assets;
import openfl.display.BitmapData;
import openfl.utils.Assets;
class GameAssets {
    //-------------------------------------------------------------------
    // Bitmaps
    //-------------------------------------------------------------------

    public static var BTN_START_BITMAP(get, never):BitmapData;
    public static function get_BTN_START_BITMAP():BitmapData return Assets.getBitmapData("resources/btnPlayGame.png");

    public static var BTN_RESTART_BITMAP(get, never):BitmapData;
    public static function get_BTN_RESTART_BITMAP():BitmapData return Assets.getBitmapData("resources/btnNewGame.png");

    public static var BTN_CONTINUE_BITMAP(get, never):BitmapData;
    public static function get_BTN_CONTINUE_BITMAP():BitmapData return Assets.getBitmapData("resources/btnContinueGame.png");

    public static var BTN_MENU_BITMAP(get, never):BitmapData;
    public static function get_BTN_MENU_BITMAP():BitmapData return Assets.getBitmapData("resources/btnMenu.png");

    public static var IMG_TIME_BITMAP(get, never):BitmapData;
    public static function get_IMG_TIME_BITMAP():BitmapData return Assets.getBitmapData("resources/iconTime.png");

    public static var IMG_SCORE_BITMAP(get, never):BitmapData;
    public static function get_IMG_SCORE_BITMAP():BitmapData return Assets.getBitmapData("resources/iconScore.png");

    public static var BACKGROUND_BITMAP(get, never):BitmapData;
    public static function get_BACKGROUND_BITMAP():BitmapData return Assets.getBitmapData("resources/background.png");

    public static var BACKGROUND_MENU_BITMAP(get, never):BitmapData;
    public static function get_BACKGROUND_MENU_BITMAP():BitmapData return Assets.getBitmapData("resources/background-result.png");

    public static var LEADBOARD_BITMAP(get, never):BitmapData;
    public static function get_LEADBOARD_BITMAP():BitmapData return Assets.getBitmapData("resources/leadBoard.png");

    public static var CHIPS_BITMAP(get, never):BitmapData;
    public static function get_CHIPS_BITMAP():BitmapData return Assets.getBitmapData("resources/chips.png");

    public static var GAME_OVER_POPUP(get, never):BitmapData;
    public static function get_GAME_OVER_POPUP():BitmapData return Assets.getBitmapData("resources/popupGameOver.png");
}
