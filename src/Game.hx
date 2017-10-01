package ;

import view.GameView;
import controller.GameController;
import controller.AppController;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.Assets;
import openfl.Lib;

class Game extends Sprite {

    private var _inited:Bool = false;
    private var _controller:AppController;
    private var _model:GameController;
    private var _view:GameView;

    public function new() {
        super();
        initilize();
    }

    public function initilize() {
        if (_inited)
            return;
        _view = new GameView();
        addChild(_view);

        _controller = new AppController(_view);
        _controller.newGameMenu();
    }
}