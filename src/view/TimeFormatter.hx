package view;
class TimeFormatter {
    public static var MILISECONDS_PER_MIN:Float = 60000;
    public static var MILISECONDS_PER_HOUR:Float = MILISECONDS_PER_MIN * 60;
    public static var MILISECONDS_PER_DAY:Float = MILISECONDS_PER_HOUR * 24;
    public static var MILISECONDS_PER_WEEK:Float = MILISECONDS_PER_DAY * 7;
    public static var MILISECONDS_PER_MONTH:Float = MILISECONDS_PER_DAY * 30;
    public static var MILISECONDS_PER_SEASON:Float = MILISECONDS_PER_MONTH * 3;
    public static var MILISECONDS_PER_YEAR:Float = MILISECONDS_PER_MONTH * 12;

    public static function format(time:Float):String {
        var hour:Float = 0;
        var min:Float = 0;
        var sec:Float = 0;
        if (time > MILISECONDS_PER_HOUR) {
            hour = Math.floor(time / MILISECONDS_PER_HOUR);
            time = time % MILISECONDS_PER_HOUR;
        }
        if (time > MILISECONDS_PER_MIN) {
            min = Math.floor(time / MILISECONDS_PER_MIN);
            time = time % MILISECONDS_PER_MIN;
        }
        if (time > 1000) {
            sec = Math.floor(time / 1000);
            time = time % 1000;
        }
        var result:String = hour > 0 ? Std.string(hour) + ":" : "";
        result += min > 0 ? Std.string(min < 10 ? "0" + min : min) : "00";
        result += ":";
        result += sec > 0 ? Std.string(sec < 10 ? "0" + sec : sec) : "00";
        return result;
    }
}
