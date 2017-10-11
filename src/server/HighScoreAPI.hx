package server;
import api.IHighScoreApi;
import model.UserData;
import sys.db.Connection;
import sys.db.Mysql;

class HighScoreAPI implements IHighScoreApi {

	private var dbConnection:Connection;
	
	public function new(dbConnection:Connection) {
		this.dbConnection = dbConnection;
	}
	
	public function getHightScores(count:Int):Array<UserData> {
		var result:List<{name:String, score:Int, time:Float}> = cast dbConnection.request("SELECT * FROM scores ORDER BY score DESC Limit " + count).results();
		var scores:Array<UserData> = new Array<UserData>();
		for (userScore in result) {
			var userData:UserData = new UserData();
			userData.score = userScore.score;
			userData.displayName = userScore.name;
			userData.time = userScore.time;
			scores.push(userData);
		}
		return scores;
	}
	
	public function submitHighScore(userData:UserData):Void {
		dbConnection.request("INSERT INTO scores (name, score, time) VALUES ('" 
							+ dbConnection.escape(userData.displayName) + "', '" 
							+ userData.score + "', '"
							+ userData.time
							+ "')");
	}
}