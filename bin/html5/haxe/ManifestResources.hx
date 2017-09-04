package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		
		#end
		
		var data, manifest, library;
		
		data = '{"name":null,"assets":"aoy4:pathy33:resources%2Fbackground-result.pngy4:sizei79495y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y26:resources%2Fbackground.pngR2i28286R3R4R5R7R6tgoR0y27:resources%2FbtnContinue.pngR2i4271R3R4R5R8R6tgoR0y31:resources%2FbtnContinueGame.pngR2i7409R3R4R5R9R6tgoR0y28:resources%2FbtnHighscore.pngR2i3872R3R4R5R10R6tgoR0y23:resources%2FbtnMenu.pngR2i1710R3R4R5R11R6tgoR0y26:resources%2FbtnNewGame.pngR2i6557R3R4R5R12R6tgoR0y27:resources%2FbtnPlayGame.pngR2i7027R3R4R5R13R6tgoR0y26:resources%2FbtnRestart.pngR2i4134R3R4R5R14R6tgoR0y21:resources%2Fchips.pngR2i10694R3R4R5R15R6tgoR0y25:resources%2FiconScore.pngR2i664R3R4R5R16R6tgoR0y24:resources%2FiconTime.pngR2i906R3R4R5R17R6tgoR0y25:resources%2FleadBoard.pngR2i18864R3R4R5R18R6tgoR0y29:resources%2FpopupGameOver.pngR2i14256R3R4R5R19R6tgh","version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__resources_background_result_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btncontinue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btncontinuegame_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btnhighscore_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btnmenu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btnnewgame_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btnplaygame_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_btnrestart_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_chips_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_iconscore_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_icontime_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_leadboard_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__resources_popupgameover_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:image("resources/background-result.png") #if display private #end class __ASSET__resources_background_result_png extends lime.graphics.Image {}
@:image("resources/background.png") #if display private #end class __ASSET__resources_background_png extends lime.graphics.Image {}
@:image("resources/btnContinue.png") #if display private #end class __ASSET__resources_btncontinue_png extends lime.graphics.Image {}
@:image("resources/btnContinueGame.png") #if display private #end class __ASSET__resources_btncontinuegame_png extends lime.graphics.Image {}
@:image("resources/btnHighscore.png") #if display private #end class __ASSET__resources_btnhighscore_png extends lime.graphics.Image {}
@:image("resources/btnMenu.png") #if display private #end class __ASSET__resources_btnmenu_png extends lime.graphics.Image {}
@:image("resources/btnNewGame.png") #if display private #end class __ASSET__resources_btnnewgame_png extends lime.graphics.Image {}
@:image("resources/btnPlayGame.png") #if display private #end class __ASSET__resources_btnplaygame_png extends lime.graphics.Image {}
@:image("resources/btnRestart.png") #if display private #end class __ASSET__resources_btnrestart_png extends lime.graphics.Image {}
@:image("resources/chips.png") #if display private #end class __ASSET__resources_chips_png extends lime.graphics.Image {}
@:image("resources/iconScore.png") #if display private #end class __ASSET__resources_iconscore_png extends lime.graphics.Image {}
@:image("resources/iconTime.png") #if display private #end class __ASSET__resources_icontime_png extends lime.graphics.Image {}
@:image("resources/leadBoard.png") #if display private #end class __ASSET__resources_leadboard_png extends lime.graphics.Image {}
@:image("resources/popupGameOver.png") #if display private #end class __ASSET__resources_popupgameover_png extends lime.graphics.Image {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)



#end
#end