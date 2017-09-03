package core;
import haxe.Timer;

class GameLoop {

    private var _handlers:Array<IGameLoopHandler>;
    private var _timer:Timer;
    private var _lastUpdateTime:Float = -1;

    public function new() {
        _handlers = [];
        _timer = new Timer(250);
    }

    public function start() {
        _lastUpdateTime = -1;
        _timer.run = timerHandler;
    }

    public function stop() {
        _timer.stop();
    }

    public function add(handler:IGameLoopHandler) {
        _handlers.push(handler);
    }

    public function remove(handler:IGameLoopHandler) {
        _handlers.remove(handler);
    }

    private function timerHandler():Void {
        var time:Float = Date.now().getTime();
        var diff:Float = _lastUpdateTime != -1 ? time - _lastUpdateTime : 0;
        for (handler in _handlers) {
            handler.update(time, diff);
        }
        _lastUpdateTime = time;
    }
}
