package api;
import model.UserData;

interface IHighScoreApi {
	function getHightScores(count:Int):Array<UserData>;
	function submitHighScore(userData:UserData):Void;
}