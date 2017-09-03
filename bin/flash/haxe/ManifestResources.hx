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
		
		data = '{"name":null,"assets":"aoy4:sizei79495y4:typey5:IMAGEy9:classNamey40:__ASSET__resources_background_result_pngy2:idy33:resources%2Fbackground-result.pnggoR0i28286R1R2R3y33:__ASSET__resources_background_pngR5y26:resources%2Fbackground.pnggoR0i4271R1R2R3y34:__ASSET__resources_btncontinue_pngR5y27:resources%2FbtnContinue.pnggoR0i7409R1R2R3y38:__ASSET__resources_btncontinuegame_pngR5y31:resources%2FbtnContinueGame.pnggoR0i3872R1R2R3y35:__ASSET__resources_btnhighscore_pngR5y28:resources%2FbtnHighscore.pnggoR0i1710R1R2R3y30:__ASSET__resources_btnmenu_pngR5y23:resources%2FbtnMenu.pnggoR0i6557R1R2R3y33:__ASSET__resources_btnnewgame_pngR5y26:resources%2FbtnNewGame.pnggoR0i7027R1R2R3y34:__ASSET__resources_btnplaygame_pngR5y27:resources%2FbtnPlayGame.pnggoR0i4134R1R2R3y33:__ASSET__resources_btnrestart_pngR5y26:resources%2FbtnRestart.pnggoR0i10694R1R2R3y28:__ASSET__resources_chips_pngR5y21:resources%2Fchips.pnggoR0i664R1R2R3y32:__ASSET__resources_iconscore_pngR5y25:resources%2FiconScore.pnggoR0i906R1R2R3y31:__ASSET__resources_icontime_pngR5y24:resources%2FiconTime.pnggoR0i18864R1R2R3y32:__ASSET__resources_leadboard_pngR5y25:resources%2FleadBoard.pnggoR0i14256R1R2R3y36:__ASSET__resources_popupgameover_pngR5y29:resources%2FpopupGameOver.pnggh","version":2,"libraryArgs":[],"libraryType":null}';
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
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


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