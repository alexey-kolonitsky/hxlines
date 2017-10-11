package view.controls;
import flash.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import openfl.events.MouseEvent;
import openfl.filters.DropShadowFilter;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.display.Bitmap;

class SimpleButton extends Sprite {

    private var _width:Float;
    private var _height:Float;
    private var _bitmap:Bitmap;

    //-----------------------------
    // label
    //-----------------------------

    private var _label:TextField = new TextField();
    public var label(get,set):String;

    public function set_label(value:String) {
        return _label.text = value;
    }

    public function get_label():String {
        return _label.text;
    }

    /** Constructor
     * @param caption text on buttonMode
     * @param autoSize ability change widht and heithgt parameter of buttonMode
     * @param w width
     * @param h height
     */
    public function new(bitmap:Bitmap = null, caption:String = "", fitText:Bool=true, width:Float=100, height:Float=22)
    {
        super();
        _width = width;
        _height = height;
        createCaptionTextField(caption, fitText);

        if (bitmap != null) {
            this._bitmap = bitmap;
            addChild(bitmap);
        }

        this.addEventListener(MouseEvent.MOUSE_DOWN, mouseDownHandler);
        this.addEventListener(MouseEvent.MOUSE_UP, mouseUpHandler);
        this.addEventListener(MouseEvent.MOUSE_OVER, mouseOverHandler);
        this.addEventListener(MouseEvent.MOUSE_OUT, mouseOutHandler);

        this.buttonMode = true;
        this.useHandCursor = true;
        this.visible = true;
        this.mouseEnabled = true;
        this.mouseChildren = false;
    }

    private function createCaptionTextField(text:String, fitText:Bool) {
        if (text != null && text != "") {
            _label = new TextField();
            _label.selectable = false;
            _label.type = TextFieldType.DYNAMIC;
            _label.autoSize = TextFieldAutoSize.LEFT;
            _label.multiline = false;
            _label.defaultTextFormat = new TextFormat("_sans", 12, 0xFFFFFF, true);
            _label.text = text;
            _label.mouseEnabled = false;
            _label.x = 10;
            addChild(_label);
            if (fitText) {
                _width = _label.width + 20;
                _height = _label.height;
            } else {
                _label.width = _width;
                _label.height = _width;
            }
        }
    }

    private function mouseDownHandler(event:MouseEvent) {
        if (_bitmap != null) {
            _bitmap.alpha = 1.0;
        }
        filters = [new DropShadowFilter(2, 90, 0x000000, 0.7, 4, 4)];
    }

    private function mouseUpHandler(event:MouseEvent) {
        if (_bitmap != null) {
            _bitmap.alpha = 1.0;
        }
        filters = [new DropShadowFilter(2, 90, 0x000000, 0.7, 4, 4)];
    }

    private function mouseOverHandler(event:MouseEvent) {
        _label.textColor = 0xFFFFFF;
        filters = [new DropShadowFilter(2, 90, 0x000000, 0.7, 4, 4)];
    }

    private function mouseOutHandler(event:MouseEvent) {
        _label.textColor = 0xFFFFFF;
        filters = [];
    }
}
