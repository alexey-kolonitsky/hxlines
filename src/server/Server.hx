package server;
import api.IHighScoreApi;
import haxe.remoting.Context;
import haxe.remoting.HttpConnection;
import sys.db.Connection;
import sys.db.Mysql;

class Server {

	public function new() {
		
	}
	
	public static function main():Void {
		
		var dbConnection:Connection = Mysql.connect({
			host:"127.0.0.1", 
			port: 3306,
			user: "root",
			pass: "",
			socket: null,
			database: "lines_high_scores"
		});
		var ctx = new Context();
        ctx.addObject("api", new HighScoreAPI(dbConnection));
		
        HttpConnection.handleRequest(ctx);
	}
}