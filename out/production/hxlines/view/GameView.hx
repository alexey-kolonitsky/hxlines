package view;
import model.UserData;
import model.GameData;
import view.MenuScreen;
import view.GameScreen;
import openfl.display.Sprite;

class GameView extends Sprite {

    public var gameScreen(default,never) = new GameScreen();
    public var menuScreen(default,never) = new MenuScreen();

    public function showMenu(gameRunning:Bool) {
        menuScreen.gameRunning = gameRunning;
        menuScreen.visible = true;
        gameScreen.visible = false;
    }

    public function hideMenu() {
        menuScreen.visible = false;
        gameScreen.visible = true;
    }

    public function new() {
        super();
        addChild(gameScreen);
        addChild(menuScreen);
    }
}
