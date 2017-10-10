package events;
import openfl.events.Event;

class GameOverEvent extends Event {
	
	public static var GAME_OVER(default,never):String = "GameOverEvent.gameOver";

	public var userName:String;
	public var submitHighscore:Bool = false;
	
	public function new(userName:String = null, submitHighscore:Bool = false) {
		super(GAME_OVER);
		this.userName = userName;
		this.submitHighscore = submitHighscore;
	}
	
	override public function clone():Event {
		return new GameOverEvent(userName, submitHighscore);
	}
}