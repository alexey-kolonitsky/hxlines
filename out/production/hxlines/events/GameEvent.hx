package events;
import openfl.events.Event;

class GameEvent extends Event {

    public static var CREATE(default,never):String = "createGame";
    public static var START(default,never):String = "startGame";
    public static var SELECT(default,never):String = "selectField";
    public static var MOVE(default,never):String = "moveField";
    public static var MENU(default,never):String = "gotoMenu";
    public static var PATH(default,never):String = "pathToField";
    public static var GAME_OVER(default,never):String = "gameOver";

    public var index:Int = -1;

    public function new(type:String, bubbles:Bool = false, cancelable:Bool = false, index:Int = -1) {
        super(type, bubbles, cancelable);
        this.index = index;
    }

    //--------------------------------------------------------------------
    //  Override Event methods
    //--------------------------------------------------------------------

    override public function clone():Event {
        var gameEvent = new GameEvent(type, bubbles, cancelable, index);
        return cast(gameEvent, Event);
    }
}
