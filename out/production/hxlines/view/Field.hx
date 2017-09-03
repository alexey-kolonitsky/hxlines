package view;
import openfl.filters.DropShadowFilter;
import flash.display.Sprite;
import openfl.display.Bitmap;

class Field extends Sprite {

    //-----------------------------
    // select
    //-----------------------------

    private var _select:Bool = false;
    public var select(get,set):Bool;

    public function get_select() {
        return _select;
    }

    public function set_select(value:Bool) {
        if (_select != value) {
            _select = value;
            if (_select) {
                bitmap.y = -10;
                bitmap.filters = [DROP_SHADOW_FILTER];
            } else {
                bitmap.y = 0;
                bitmap.filters = [];
            }
        }
        return _select;
    }

    //-----------------------------
    // state
    //-----------------------------

    private var _state:Int = 0;
    public var state(get,set):Int;

    public function get_state() {
        return _state;
    }

    public function set_state(value:Int) {
        if (_state != value) {
            _state = value;
            updateBitmap();
        }
        return _state;
    }

    //-----------------------------
    // background
    //-----------------------------

    private var _background:Int = 0;
    public var background(get,set):Int;

    public function get_background() {
        return _background;
    }

    public function set_background(value:Int) {
        if (_background != value) {
            _background = value;
            updateBg();
        }
        return _background;
    }


    //-----------------------------
    // Constructor
    //-----------------------------

    public function new () {
        super();
        _fieldFactory = new FieldBitmapFactory();
        addChild(bg = new Bitmap());
        addChild(bitmap = new Bitmap());
        updateBg();
        updateBitmap();
        mouseChildren = false;
        mouseEnabled = false;
    }


    //-------------------------------------------------------------------
    //  Private
    //-------------------------------------------------------------------

    private var _fieldFactory:FieldBitmapFactory;

    private static var DROP_SHADOW_FILTER:DropShadowFilter = new DropShadowFilter(4, 90, 0x333333, 1, 6, 6);

    private var bitmap:Bitmap = null;
    private var bg:Bitmap = null;

    private function updateBg() {
        bg.bitmapData = _fieldFactory.getFieldByCode(background);
    }

    private function updateBitmap() {
        bitmap.bitmapData = _fieldFactory.getChipByCode(state);
    }
}
