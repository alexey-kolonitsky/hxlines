package model;
class UserData {
    /**
     * Usrs's position in lead board.
     */
    public var index:Int = -1;

    /**
     * User's name displayed in application
     */
    public var displayName:String = "";

    /**
     * Duration of game
     */
    public var time:Float = 0;

    /**
     * Game score point
     */
    public var score:Float = 0;

    /**
     *
     */
    public var sessionId:String = "";


    public function new() {
    }

    public function clone():UserData {
        var result = new UserData();
        result.index = index;
        result.displayName = displayName;
        result.time = time;
        result.score = score;
        result.sessionId = sessionId;
        return result;
    }

    public function toString():String {
        var result:String = 'UserData ${sessionId} ${displayName} ${score} ${time}';
        return result;
    }
}
