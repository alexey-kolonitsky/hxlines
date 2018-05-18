package view;
import GameAssets;
import StaticConfig;
import events.GameOverEvent;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.FocusEvent;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import view.SimpleButton;

class GameOverScreen extends Sprite {
	
	private static inline var spacing:Int = 10;
	private static inline var defaultText:String = "Your name";
	
	private var background:Bitmap;
	private var submitButton:SimpleButton;
	private var backButton:SimpleButton;
	private var highScoreText:TextField;
	private var input:TextField;
	
	public function new() {
		super();
		background = new Bitmap(GameAssets.GAME_OVER_POPUP);
		addChild(background);
		addEventListener(Event.ADDED_TO_STAGE, added);
	}
	
	public function setScore(score:Int, time:Float):Void {
		var formatedTime = TimeFormatter.format(time);
		highScoreText.text = 'You scored $score in $formatedTime, submit highscore:';
	}
	
	private function added(event:Event):Void {
		removeEventListener(Event.ADDED_TO_STAGE, added);
		highScoreText = new TextField();
		highScoreText.defaultTextFormat = new TextFormat(null, 20, null, null, null, null, null, null, TextFormatAlign.CENTER);
		highScoreText.autoSize = TextFieldAutoSize.CENTER;
		addChild(highScoreText);
		highScoreText.text = 'You scored 1000 in 00:00:00';
		setupButtons();
		setupUserNameTextField();
		positionComponents();
		
		input.addEventListener(FocusEvent.FOCUS_IN, textFocused);
	}
	
	private function textFocused(e:FocusEvent):Void {
		input.removeEventListener(FocusEvent.FOCUS_IN, textFocused);
		input.textColor = 0;
		input.text = "";
	}
	
	private function setupButtons():Void {
		submitButton = new SimpleButton(null, "Submit");
		submitButton.graphics.beginFill(0x33CC33);
		submitButton.graphics.drawRect(0, 0, 100, 22);
		submitButton.addEventListener(MouseEvent.CLICK, submitHighscore);
		
		backButton = new SimpleButton(null, "Back");
		backButton.graphics.beginFill(0xCC3333);
		backButton.graphics.drawRect(0, 0, 100, 22);
		backButton.addEventListener(MouseEvent.CLICK, closePopup);

		addChild(submitButton);
		addChild(backButton);
	}
	
	private function setupUserNameTextField():Void {
		input = new TextField();
		input.border = true;
		input.type = TextFieldType.INPUT;
		input.defaultTextFormat = new TextFormat(null, 20, 0xBBBBBB, null, null, null, null, null, TextFormatAlign.CENTER);
		input.borderColor = 0xBBBBBB;
		input.width = 300;
		input.height = 25;
		input.text = defaultText;
		addChild(input);
	}
	
	private function positionComponents():Void {
		
		submitButton.y = stage.stageHeight - submitButton.height - spacing - 100;
		backButton.y = stage.stageHeight - backButton.height - spacing- 100;
		var buttonStartPosition = stage.stageWidth / 2 - (submitButton.width + spacing + backButton.width) / 2;
		submitButton.x = buttonStartPosition;
		backButton.x = buttonStartPosition + submitButton.width + spacing;
		
		input.x = stage.stageWidth / 2 - input.width / 2;
		input.y = backButton.y - input.height - spacing - 100;
		highScoreText.x = stage.stageWidth / 2 - highScoreText.width / 2;
		highScoreText.y = input.y - 30;
	}
	
	private function submitHighscore(e:Event = null):Void {
		submitButton.removeEventListener(MouseEvent.CLICK, submitHighscore);
		backButton.removeEventListener(MouseEvent.CLICK, closePopup);
		
		var gameOverEvent:GameOverEvent;
		if (input.text != defaultText && input.text != "") {
			gameOverEvent = new GameOverEvent(input.text, true);
		} else {
			gameOverEvent = new GameOverEvent();
		}
		
		dispatchEvent(gameOverEvent);
	}
	
	private function closePopup(e:Event = null):Void {
		submitButton.removeEventListener(MouseEvent.CLICK, submitHighscore);
		backButton.removeEventListener(MouseEvent.CLICK, closePopup);
		
		dispatchEvent(new GameOverEvent());
	}
}