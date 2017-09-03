// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_assets_GameAssets
#include <assets/GameAssets.h>
#endif
#ifndef INCLUDED_config_StaticConfig
#include <config/StaticConfig.h>
#endif
#ifndef INCLUDED_events_GameEvent
#include <events/GameEvent.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_model_GameData
#include <model/GameData.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_view_Field
#include <view/Field.h>
#endif
#ifndef INCLUDED_view_GameScreen
#include <view/GameScreen.h>
#endif
#ifndef INCLUDED_view_controls_SimpleButton
#include <view/controls/SimpleButton.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_18_new,"view.GameScreen","new",0xcaddacf9,"view.GameScreen.new","view/GameScreen.hx",18,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_63_render,"view.GameScreen","render",0x8652b45d,"view.GameScreen.render","view/GameScreen.hx",63,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_112_createTextField,"view.GameScreen","createTextField",0x4a64bc4a,"view.GameScreen.createTextField","view/GameScreen.hx",112,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_124_coorToIndex,"view.GameScreen","coorToIndex",0x01687a21,"view.GameScreen.coorToIndex","view/GameScreen.hx",124,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_139_stage_mouseDownHandler,"view.GameScreen","stage_mouseDownHandler",0x16153e4b,"view.GameScreen.stage_mouseDownHandler","view/GameScreen.hx",139,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_148_stage_mouseMoveHandler,"view.GameScreen","stage_mouseMoveHandler",0xc82f977c,"view.GameScreen.stage_mouseMoveHandler","view/GameScreen.hx",148,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_160_stage_mouseUpHandler,"view.GameScreen","stage_mouseUpHandler",0x8e3f2ab2,"view.GameScreen.stage_mouseUpHandler","view/GameScreen.hx",160,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_168_btnBack_clickHandler,"view.GameScreen","btnBack_clickHandler",0x60081e05,"view.GameScreen.btnBack_clickHandler","view/GameScreen.hx",168,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_171_addedToStageHandler,"view.GameScreen","addedToStageHandler",0x35d67640,"view.GameScreen.addedToStageHandler","view/GameScreen.hx",171,0x9c8e27f6)
HX_LOCAL_STACK_FRAME(_hx_pos_31c0a7b0bf3b35b0_192_removeFromStageHandler,"view.GameScreen","removeFromStageHandler",0x308f10a1,"view.GameScreen.removeFromStageHandler","view/GameScreen.hx",192,0x9c8e27f6)
namespace view{

void GameScreen_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_18_new)
HXLINE( 103)		this->pathToIndex = (int)-1;
HXLINE(  98)		this->selectIndex = (int)-1;
HXLINE(  93)		this->_fields = null();
HXLINE(  88)		this->chipSelected = false;
HXLINE(  21)		super::__construct();
HXLINE(  22)		this->background =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::assets::GameAssets_obj::get_BACKGROUND_BITMAP(),null(),null());
HXLINE(  23)		this->addChild(this->background);
HXLINE(  25)		this->tfDuration = this->createTextField();
HXLINE(  26)		this->addChild(this->tfDuration);
HXLINE(  28)		this->tfScore = this->createTextField();
HXLINE(  29)		this->addChild(this->tfScore);
HXLINE(  31)		this->imgDuration =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::assets::GameAssets_obj::get_IMG_TIME_BITMAP(),null(),null());
HXLINE(  32)		this->addChild(this->imgDuration);
HXLINE(  34)		this->imgScore =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::assets::GameAssets_obj::get_IMG_SCORE_BITMAP(),null(),null());
HXLINE(  35)		this->addChild(this->imgScore);
HXLINE(  37)		this->btnBack =  ::view::controls::SimpleButton_obj::__alloc( HX_CTX , ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::assets::GameAssets_obj::get_BTN_MENU_BITMAP(),null(),null()),null(),null(),null(),null());
HXLINE(  38)		this->btnBack->addEventListener(HX_("click",48,7c,5e,48),this->btnBack_clickHandler_dyn(),null(),null(),null());
HXLINE(  39)		this->addChild(this->btnBack);
HXLINE(  41)		this->_fields = ::Array_obj< ::Dynamic>::__new();
HXLINE(  42)		{
HXLINE(  42)			int _g1 = (int)0;
HXDLIN(  42)			int _g = ::config::StaticConfig_obj::BOARD_CELLS;
HXDLIN(  42)			while((_g1 < _g)){
HXLINE(  42)				_g1 = (_g1 + (int)1);
HXDLIN(  42)				int i = (_g1 - (int)1);
HXLINE(  44)				int colIndex = hx::Mod(i,::config::StaticConfig_obj::BOARD_WIDTH);
HXLINE(  45)				int rowIndex = ::Math_obj::floor(((Float)(i - colIndex) / (Float)::config::StaticConfig_obj::BOARD_WIDTH));
HXLINE(  46)				 ::view::Field field =  ::view::Field_obj::__alloc( HX_CTX );
HXLINE(  47)				field->set_x((::config::StaticConfig_obj::BOARD_LEFT + (colIndex * ::config::StaticConfig_obj::TILE_WIDTH)));
HXLINE(  48)				field->set_y((::config::StaticConfig_obj::BOARD_TOP + (rowIndex * ::config::StaticConfig_obj::TILE_HEIGHT)));
HXLINE(  49)				this->_fields->push(field);
HXLINE(  50)				this->addChild(field);
            			}
            		}
HXLINE(  53)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->addedToStageHandler_dyn(),null(),null(),null());
HXLINE(  54)		this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->removeFromStageHandler_dyn(),null(),null(),null());
            	}

Dynamic GameScreen_obj::__CreateEmpty() { return new GameScreen_obj; }

void *GameScreen_obj::_hx_vtable = 0;

Dynamic GameScreen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameScreen_obj > _hx_result = new GameScreen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x0d07128b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0d07128b;
			} else {
				return inClassId==(int)0x0ddfced7;
			}
		} else {
			return inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

void GameScreen_obj::render( ::model::GameData game){
            	HX_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_63_render)
HXLINE(  64)		int chipCode;
HXDLIN(  64)		if ((game->startIndex != (int)-1)) {
HXLINE(  64)			chipCode = game->fields->__get(game->startIndex);
            		}
            		else {
HXLINE(  64)			chipCode = (int)0;
            		}
HXLINE(  65)		bool showPath;
HXDLIN(  65)		bool showPath1;
HXDLIN(  65)		if ((game->startIndex != (int)-1)) {
HXLINE(  65)			showPath1 = hx::IsNotNull( game->path );
            		}
            		else {
HXLINE(  65)			showPath1 = false;
            		}
HXDLIN(  65)		if (showPath1) {
HXLINE(  65)			showPath = (game->path->length > (int)1);
            		}
            		else {
HXLINE(  65)			showPath = false;
            		}
HXLINE(  68)		{
HXLINE(  68)			int _g1 = (int)0;
HXDLIN(  68)			int _g = ::config::StaticConfig_obj::BOARD_CELLS;
HXDLIN(  68)			while((_g1 < _g)){
HXLINE(  68)				_g1 = (_g1 + (int)1);
HXDLIN(  68)				int i = (_g1 - (int)1);
HXLINE(  69)				 ::view::Field _hx_tmp = this->_fields->__get(i).StaticCast<  ::view::Field >();
HXDLIN(  69)				_hx_tmp->set_select((i == game->startIndex));
HXLINE(  70)				 ::view::Field _hx_tmp1 = this->_fields->__get(i).StaticCast<  ::view::Field >();
HXDLIN(  70)				_hx_tmp1->set_state(game->fields->__get(i));
HXLINE(  71)				 ::view::Field _hx_tmp2 = this->_fields->__get(i).StaticCast<  ::view::Field >();
HXDLIN(  71)				int _hx_tmp3;
HXDLIN(  71)				bool _hx_tmp4;
HXDLIN(  71)				if (showPath) {
HXLINE(  71)					_hx_tmp4 = (game->path->indexOf(i,null()) >= (int)0);
            				}
            				else {
HXLINE(  71)					_hx_tmp4 = false;
            				}
HXDLIN(  71)				if (_hx_tmp4) {
HXLINE(  71)					_hx_tmp3 = chipCode;
            				}
            				else {
HXLINE(  71)					_hx_tmp3 = (int)0;
            				}
HXDLIN(  71)				_hx_tmp2->set_background(_hx_tmp3);
            			}
            		}
HXLINE(  75)		 ::openfl::text::TextField _hx_tmp5 = this->tfDuration;
HXDLIN(  75)		_hx_tmp5->set_text(::Std_obj::string(game->duration));
HXLINE(  76)		 ::openfl::text::TextField _hx_tmp6 = this->tfScore;
HXDLIN(  76)		_hx_tmp6->set_text(::Std_obj::string(game->score));
HXLINE(  77)		this->chipSelected = (game->startIndex != (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,render,(void))

 ::openfl::text::TextField GameScreen_obj::createTextField(){
            	HX_GC_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_112_createTextField)
HXLINE( 113)		 ::openfl::text::TextField result =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 114)		result->set_selectable(false);
HXLINE( 115)		result->set_type((int)0);
HXLINE( 116)		result->set_autoSize((int)1);
HXLINE( 118)		result->set_multiline(false);
HXLINE( 119)		result->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("_sans",32,a0,5e,ff),(int)16,(int)14601607,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE( 120)		result->mouseEnabled = false;
HXLINE( 121)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameScreen_obj,createTextField,return )

int GameScreen_obj::coorToIndex(Float stageX,Float stageY){
            	HX_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_124_coorToIndex)
HXLINE( 125)		if ((stageX < ::config::StaticConfig_obj::BOARD_LEFT)) {
HXLINE( 125)			stageX = (::config::StaticConfig_obj::BOARD_LEFT + (int)10);
            		}
            		else {
HXLINE( 125)			stageX = stageX;
            		}
HXLINE( 126)		if ((stageX > ::config::StaticConfig_obj::BOARD_RIGHT)) {
HXLINE( 126)			stageX = (::config::StaticConfig_obj::BOARD_RIGHT - (int)10);
            		}
            		else {
HXLINE( 126)			stageX = stageX;
            		}
HXLINE( 127)		if ((stageY < ::config::StaticConfig_obj::BOARD_TOP)) {
HXLINE( 127)			stageY = (::config::StaticConfig_obj::BOARD_TOP + (int)10);
            		}
            		else {
HXLINE( 127)			stageY = stageY;
            		}
HXLINE( 128)		if ((stageY > ::config::StaticConfig_obj::BOARD_BOTTOM)) {
HXLINE( 128)			stageY = (::config::StaticConfig_obj::BOARD_BOTTOM - (int)10);
            		}
            		else {
HXLINE( 128)			stageY = stageY;
            		}
HXLINE( 129)		int colIndex = ::Math_obj::floor(((Float)(stageX - ::config::StaticConfig_obj::BOARD_LEFT) / (Float)::config::StaticConfig_obj::TILE_WIDTH));
HXLINE( 130)		int rowIndex = ::Math_obj::floor(((Float)(stageY - ::config::StaticConfig_obj::BOARD_TOP) / (Float)::config::StaticConfig_obj::TILE_HEIGHT));
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		bool _hx_tmp1;
HXDLIN( 131)		bool _hx_tmp2;
HXDLIN( 131)		if ((colIndex >= (int)0)) {
HXLINE( 131)			_hx_tmp2 = (colIndex > ::config::StaticConfig_obj::BOARD_WIDTH);
            		}
            		else {
HXLINE( 131)			_hx_tmp2 = true;
            		}
HXDLIN( 131)		if (!(_hx_tmp2)) {
HXLINE( 131)			_hx_tmp1 = (rowIndex < (int)0);
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = true;
            		}
HXDLIN( 131)		if (!(_hx_tmp1)) {
HXLINE( 131)			_hx_tmp = (rowIndex > ::config::StaticConfig_obj::BOARD_HEIGHT);
            		}
            		else {
HXLINE( 131)			_hx_tmp = true;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 135)			return (int)-1;
            		}
HXLINE( 136)		return ((rowIndex * ::config::StaticConfig_obj::BOARD_WIDTH) + colIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameScreen_obj,coorToIndex,return )

void GameScreen_obj::stage_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_139_stage_mouseDownHandler)
HXLINE( 140)		this->selectIndex = this->coorToIndex(event->stageX,event->stageY);
HXLINE( 141)		if ((this->selectIndex == (int)-1)) {
HXLINE( 142)			return;
            		}
HXLINE( 144)		::String type;
HXDLIN( 144)		if (this->chipSelected) {
HXLINE( 144)			type = ::events::GameEvent_obj::MOVE;
            		}
            		else {
HXLINE( 144)			type = ::events::GameEvent_obj::SELECT;
            		}
HXLINE( 145)		this->dispatchEvent( ::events::GameEvent_obj::__alloc( HX_CTX ,type,true,false,this->selectIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,stage_mouseDownHandler,(void))

void GameScreen_obj::stage_mouseMoveHandler( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_148_stage_mouseMoveHandler)
HXLINE( 149)		if (!(this->chipSelected)) {
HXLINE( 150)			return;
            		}
HXLINE( 152)		int index = this->coorToIndex(event->stageX,event->stageY);
HXLINE( 153)		bool _hx_tmp;
HXDLIN( 153)		if ((index != (int)-1)) {
HXLINE( 153)			_hx_tmp = (index != this->pathToIndex);
            		}
            		else {
HXLINE( 153)			_hx_tmp = false;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXLINE( 155)			this->pathToIndex = index;
HXLINE( 156)			this->dispatchEvent( ::events::GameEvent_obj::__alloc( HX_CTX ,::events::GameEvent_obj::PATH,true,false,this->pathToIndex));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,stage_mouseMoveHandler,(void))

void GameScreen_obj::stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_160_stage_mouseUpHandler)
HXLINE( 161)		int index = this->coorToIndex(event->stageX,event->stageY);
HXLINE( 162)		bool _hx_tmp;
HXDLIN( 162)		bool _hx_tmp1;
HXDLIN( 162)		if ((index != (int)-1)) {
HXLINE( 162)			_hx_tmp1 = (this->selectIndex != index);
            		}
            		else {
HXLINE( 162)			_hx_tmp1 = false;
            		}
HXDLIN( 162)		if (_hx_tmp1) {
HXLINE( 162)			_hx_tmp = this->chipSelected;
            		}
            		else {
HXLINE( 162)			_hx_tmp = false;
            		}
HXDLIN( 162)		if (_hx_tmp) {
HXLINE( 163)			this->dispatchEvent( ::events::GameEvent_obj::__alloc( HX_CTX ,::events::GameEvent_obj::MOVE,true,false,index));
            		}
HXLINE( 164)		this->selectIndex = (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,stage_mouseUpHandler,(void))

void GameScreen_obj::btnBack_clickHandler( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_168_btnBack_clickHandler)
HXLINE( 168)		this->dispatchEvent( ::events::GameEvent_obj::__alloc( HX_CTX ,::events::GameEvent_obj::MENU,true,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,btnBack_clickHandler,(void))

void GameScreen_obj::addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_171_addedToStageHandler)
HXLINE( 172)		this->stage->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->stage_mouseDownHandler_dyn(),null(),null(),null());
HXLINE( 173)		this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->stage_mouseUpHandler_dyn(),null(),null(),null());
HXLINE( 174)		this->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->stage_mouseMoveHandler_dyn(),null(),null(),null());
HXLINE( 176)		 ::openfl::text::TextField _hx_tmp = this->tfDuration;
HXDLIN( 176)		_hx_tmp->set_x((::config::StaticConfig_obj::BOARD_RIGHT - (int)75));
HXLINE( 177)		 ::openfl::text::TextField _hx_tmp1 = this->tfDuration;
HXDLIN( 177)		_hx_tmp1->set_y((::config::StaticConfig_obj::BOARD_BOTTOM + (int)7));
HXLINE( 179)		 ::openfl::display::Bitmap _hx_tmp2 = this->imgDuration;
HXDLIN( 179)		_hx_tmp2->set_x((::config::StaticConfig_obj::BOARD_RIGHT - (int)100));
HXLINE( 180)		 ::openfl::display::Bitmap _hx_tmp3 = this->imgDuration;
HXDLIN( 180)		_hx_tmp3->set_y((::config::StaticConfig_obj::BOARD_BOTTOM + (int)7));
HXLINE( 182)		 ::openfl::text::TextField _hx_tmp4 = this->tfScore;
HXDLIN( 182)		_hx_tmp4->set_x((::config::StaticConfig_obj::BOARD_LEFT + (int)28));
HXLINE( 183)		 ::openfl::text::TextField _hx_tmp5 = this->tfScore;
HXDLIN( 183)		_hx_tmp5->set_y((::config::StaticConfig_obj::BOARD_BOTTOM + (int)7));
HXLINE( 185)		 ::openfl::display::Bitmap _hx_tmp6 = this->imgScore;
HXDLIN( 185)		_hx_tmp6->set_x((::config::StaticConfig_obj::BOARD_LEFT + (int)5));
HXLINE( 186)		 ::openfl::display::Bitmap _hx_tmp7 = this->imgScore;
HXDLIN( 186)		_hx_tmp7->set_y((::config::StaticConfig_obj::BOARD_BOTTOM + (int)7));
HXLINE( 188)		this->btnBack->set_x((int)20);
HXLINE( 189)		this->btnBack->set_y((int)20);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,addedToStageHandler,(void))

void GameScreen_obj::removeFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_31c0a7b0bf3b35b0_192_removeFromStageHandler)
HXLINE( 193)		this->stage->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->stage_mouseDownHandler_dyn(),null());
HXLINE( 194)		this->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->stage_mouseUpHandler_dyn(),null());
HXLINE( 195)		this->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->stage_mouseMoveHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameScreen_obj,removeFromStageHandler,(void))


hx::ObjectPtr< GameScreen_obj > GameScreen_obj::__new() {
	hx::ObjectPtr< GameScreen_obj > __this = new GameScreen_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GameScreen_obj > GameScreen_obj::__alloc(hx::Ctx *_hx_ctx) {
	GameScreen_obj *__this = (GameScreen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GameScreen_obj), true, "view.GameScreen"));
	*(void **)__this = GameScreen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameScreen_obj::GameScreen_obj()
{
}

void GameScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScreen);
	HX_MARK_MEMBER_NAME(chipSelected,"chipSelected");
	HX_MARK_MEMBER_NAME(_fields,"_fields");
	HX_MARK_MEMBER_NAME(selectIndex,"selectIndex");
	HX_MARK_MEMBER_NAME(pathToIndex,"pathToIndex");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(tfDuration,"tfDuration");
	HX_MARK_MEMBER_NAME(tfScore,"tfScore");
	HX_MARK_MEMBER_NAME(imgDuration,"imgDuration");
	HX_MARK_MEMBER_NAME(imgScore,"imgScore");
	HX_MARK_MEMBER_NAME(btnBack,"btnBack");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chipSelected,"chipSelected");
	HX_VISIT_MEMBER_NAME(_fields,"_fields");
	HX_VISIT_MEMBER_NAME(selectIndex,"selectIndex");
	HX_VISIT_MEMBER_NAME(pathToIndex,"pathToIndex");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(tfDuration,"tfDuration");
	HX_VISIT_MEMBER_NAME(tfScore,"tfScore");
	HX_VISIT_MEMBER_NAME(imgDuration,"imgDuration");
	HX_VISIT_MEMBER_NAME(imgScore,"imgScore");
	HX_VISIT_MEMBER_NAME(btnBack,"btnBack");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GameScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_fields") ) { return hx::Val( _fields); }
		if (HX_FIELD_EQ(inName,"tfScore") ) { return hx::Val( tfScore); }
		if (HX_FIELD_EQ(inName,"btnBack") ) { return hx::Val( btnBack); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imgScore") ) { return hx::Val( imgScore); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return hx::Val( background); }
		if (HX_FIELD_EQ(inName,"tfDuration") ) { return hx::Val( tfDuration); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectIndex") ) { return hx::Val( selectIndex); }
		if (HX_FIELD_EQ(inName,"pathToIndex") ) { return hx::Val( pathToIndex); }
		if (HX_FIELD_EQ(inName,"imgDuration") ) { return hx::Val( imgDuration); }
		if (HX_FIELD_EQ(inName,"coorToIndex") ) { return hx::Val( coorToIndex_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chipSelected") ) { return hx::Val( chipSelected); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { return hx::Val( createTextField_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return hx::Val( addedToStageHandler_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stage_mouseUpHandler") ) { return hx::Val( stage_mouseUpHandler_dyn()); }
		if (HX_FIELD_EQ(inName,"btnBack_clickHandler") ) { return hx::Val( btnBack_clickHandler_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"stage_mouseDownHandler") ) { return hx::Val( stage_mouseDownHandler_dyn()); }
		if (HX_FIELD_EQ(inName,"stage_mouseMoveHandler") ) { return hx::Val( stage_mouseMoveHandler_dyn()); }
		if (HX_FIELD_EQ(inName,"removeFromStageHandler") ) { return hx::Val( removeFromStageHandler_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GameScreen_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_fields") ) { _fields=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfScore") ) { tfScore=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"btnBack") ) { btnBack=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imgScore") ) { imgScore=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfDuration") ) { tfDuration=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectIndex") ) { selectIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathToIndex") ) { pathToIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgDuration") ) { imgDuration=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chipSelected") ) { chipSelected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("chipSelected","\x47","\xf8","\xaa","\x7a"));
	outFields->push(HX_HCSTRING("_fields","\x18","\xa0","\x05","\xef"));
	outFields->push(HX_HCSTRING("selectIndex","\x76","\x9e","\x7f","\x17"));
	outFields->push(HX_HCSTRING("pathToIndex","\x72","\x58","\x52","\x67"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("tfDuration","\xe6","\xf2","\x2d","\x1c"));
	outFields->push(HX_HCSTRING("tfScore","\x80","\x80","\x27","\xac"));
	outFields->push(HX_HCSTRING("imgDuration","\x77","\x12","\x50","\x88"));
	outFields->push(HX_HCSTRING("imgScore","\x4f","\x6c","\x1d","\x65"));
	outFields->push(HX_HCSTRING("btnBack","\xa3","\x26","\x9b","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GameScreen_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GameScreen_obj,chipSelected),HX_HCSTRING("chipSelected","\x47","\xf8","\xaa","\x7a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameScreen_obj,_fields),HX_HCSTRING("_fields","\x18","\xa0","\x05","\xef")},
	{hx::fsInt,(int)offsetof(GameScreen_obj,selectIndex),HX_HCSTRING("selectIndex","\x76","\x9e","\x7f","\x17")},
	{hx::fsInt,(int)offsetof(GameScreen_obj,pathToIndex),HX_HCSTRING("pathToIndex","\x72","\x58","\x52","\x67")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(GameScreen_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(GameScreen_obj,tfDuration),HX_HCSTRING("tfDuration","\xe6","\xf2","\x2d","\x1c")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(GameScreen_obj,tfScore),HX_HCSTRING("tfScore","\x80","\x80","\x27","\xac")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(GameScreen_obj,imgDuration),HX_HCSTRING("imgDuration","\x77","\x12","\x50","\x88")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(GameScreen_obj,imgScore),HX_HCSTRING("imgScore","\x4f","\x6c","\x1d","\x65")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(GameScreen_obj,btnBack),HX_HCSTRING("btnBack","\xa3","\x26","\x9b","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GameScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String GameScreen_obj_sMemberFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("chipSelected","\x47","\xf8","\xaa","\x7a"),
	HX_HCSTRING("_fields","\x18","\xa0","\x05","\xef"),
	HX_HCSTRING("selectIndex","\x76","\x9e","\x7f","\x17"),
	HX_HCSTRING("pathToIndex","\x72","\x58","\x52","\x67"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("tfDuration","\xe6","\xf2","\x2d","\x1c"),
	HX_HCSTRING("tfScore","\x80","\x80","\x27","\xac"),
	HX_HCSTRING("imgDuration","\x77","\x12","\x50","\x88"),
	HX_HCSTRING("imgScore","\x4f","\x6c","\x1d","\x65"),
	HX_HCSTRING("btnBack","\xa3","\x26","\x9b","\xce"),
	HX_HCSTRING("createTextField","\x31","\xde","\x75","\x3a"),
	HX_HCSTRING("coorToIndex","\x88","\xdc","\x5a","\x7d"),
	HX_HCSTRING("stage_mouseDownHandler","\x44","\x37","\x5f","\xd7"),
	HX_HCSTRING("stage_mouseMoveHandler","\x75","\x90","\x79","\x89"),
	HX_HCSTRING("stage_mouseUpHandler","\x6b","\xc3","\xe6","\xe3"),
	HX_HCSTRING("btnBack_clickHandler","\xbe","\xb6","\xaf","\xb5"),
	HX_HCSTRING("addedToStageHandler","\xa7","\x17","\x1c","\x3d"),
	HX_HCSTRING("removeFromStageHandler","\x9a","\x09","\xd9","\xf1"),
	::String(null()) };

static void GameScreen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameScreen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class GameScreen_obj::__mClass;

void GameScreen_obj::__register()
{
	hx::Object *dummy = new GameScreen_obj;
	GameScreen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("view.GameScreen","\x87","\xbc","\x7b","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GameScreen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameScreen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameScreen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameScreen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameScreen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace view