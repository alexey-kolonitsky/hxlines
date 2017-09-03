package view;
import flash.geom.Matrix;
import flash.display.Bitmap;
import assets.GameAssets;
import config.StaticConfig;
import openfl.display.BitmapData;

class FieldBitmapFactory {

    //-------------------------------------------------------------------
    //  Public
    //-------------------------------------------------------------------

    //-----------------------------
    // constructor
    //-----------------------------

    public function new() {
        init();
    }

    /**
     * Init factory. Slice sprite with images and create cache of all
     * available chips and fileds.
     *
     * Init method must be invoked before use <code>getChipByCode</code> or
     * <code>getFieldByCode</code> methods.
     */
    public function init() {
        emptyCellBitmap = new BitmapData(StaticConfig.TILE_WIDTH, StaticConfig.TILE_HEIGHT, !StaticConfig.DEBUG, 0xFF0000);

        chipsBitmap = new Bitmap(GameAssets.CHIPS_BITMAP);

        chips = new Array<BitmapData>();
        fields = new Array<BitmapData>();

        for (i in 0...StaticConfig.COLOR_COUNT) {
            chips[i] = sliceImage(0, i);
            fields[i] = sliceImage(1, i);
        }
    }

    /**
     * Factory method for create color full chips by id.
     *
     * @param code
     * @return
     */
    public function getChipByCode(code:Int):BitmapData {
        if (code > 0 && code < StaticConfig.COLOR_COUNT) {// color chip
            return chips[code - 1];
        }
        else if (code == StaticConfig.COLOR_COUNT) {
            return chips[code - 1];
        }

        return null;
    }

    /**
     *
     * @param code
     * @return
     */
    public function getFieldByCode(code:Int):BitmapData {
        if (code > 0 && code < StaticConfig.COLOR_COUNT) {// color chip
            return fields[code - 1];
        }
        else if (code == StaticConfig.COLOR_COUNT) {
            return fields[code - 1];
        }
        return null;
    }




    //-------------------------------------------------------------------
    //
    //  Private
    //
    //-------------------------------------------------------------------

    /**
     * Sprite with all images.
     */
    private var chipsBitmap:Bitmap = null;

    /**
     * Vector with different BitmapData objects for each chip color.
     */
    private var chips:Array<BitmapData> = null;
    private var fields:Array<BitmapData> = null;

    private var emptyCellBitmap:BitmapData = null;


    private function sliceImage(xIndex:Int, yIndex:Int):BitmapData {
        var tileX:Float = xIndex * StaticConfig.TILE_WIDTH;
        var tileY:Float  = yIndex * StaticConfig.TILE_HEIGHT;
        var translateMatrix:Matrix = new Matrix(1, 0, 0, 1, -tileX, -tileY);
        var tileBitmapData:BitmapData = new BitmapData(StaticConfig.TILE_WIDTH, StaticConfig.TILE_HEIGHT, true, 0xFF0000);
        tileBitmapData.draw(chipsBitmap, translateMatrix);
        return tileBitmapData;
    }
}
