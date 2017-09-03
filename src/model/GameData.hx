package model;

import view.TimeFormatter;
class GameData {
    /**
     * Game state.
     */
    public var state:GameState = GameState.NONE;

    /**
     * User click counter
     */
    public var stepCount:Int = 0;

    /**
     * Level. Level in lines game change count of color in game and
     * give scores for each line.
     */
    public var level:Int = 1;

    /**
     * Game duration
     */
    public var duration:Float = 0.0;

    /**
     *
     */
    public var score:Int = 0;

    /**
     * Tag fields position
     */
    public var fields:Array<Int>;

    /**
     * Selected filed
     */
    public var startIndex:Int = -1;

    /**
     * Distenation field
     */
    public var endIndex:Int = -1;

    public var path:Array<Int> = null;

    public var sessionId:String = "";

    /**
     * Constructor create puzzle object and initiolize it by properties
     * in init object.
     *
     * @param init
     */
    public function new() {
    }

    /**
         * This method used for serialize vo as plain object.
         *
         * @return plain object with serializable fields
         */
    public function toObject():Dynamic {
        var result:Dynamic = {
            fields: fields,
            score: score,
            duration: duration,
            level: level,
            sessionId: sessionId
        };
        return result;
    }

    public function toString():String {
        var fieldsString:String = fields != null ? "[" + fields.join(" ") + "]" : "is empty";
        var result:String = 'GameData score: ${score}, duration: ${TimeFormatter.format(duration)}, ${fieldsString}';
        return result;
    }
}
