// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
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
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e7f1148457df64b_57_new,"openfl.display.Stage3D","new",0x52647737,"openfl.display.Stage3D.new","openfl/display/Stage3D.hx",57,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_69_requestContext3D,"openfl.display.Stage3D","requestContext3D",0x80c219da,"openfl.display.Stage3D.requestContext3D","openfl/display/Stage3D.hx",69,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_84_requestContext3DMatchingProfiles,"openfl.display.Stage3D","requestContext3DMatchingProfiles",0x5b5ae301,"openfl.display.Stage3D.requestContext3DMatchingProfiles","openfl/display/Stage3D.hx",84,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_89___createContext,"openfl.display.Stage3D","__createContext",0x1987b48a,"openfl.display.Stage3D.__createContext","openfl/display/Stage3D.hx",89,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_157___dispatchError,"openfl.display.Stage3D","__dispatchError",0xdb9710e5,"openfl.display.Stage3D.__dispatchError","openfl/display/Stage3D.hx",157,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_167___dispatchCreate,"openfl.display.Stage3D","__dispatchCreate",0x733e9b3f,"openfl.display.Stage3D.__dispatchCreate","openfl/display/Stage3D.hx",167,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_177___renderCairo,"openfl.display.Stage3D","__renderCairo",0x4faad7c9,"openfl.display.Stage3D.__renderCairo","openfl/display/Stage3D.hx",177,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_191___renderCanvas,"openfl.display.Stage3D","__renderCanvas",0x69230677,"openfl.display.Stage3D.__renderCanvas","openfl/display/Stage3D.hx",191,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_205___renderDOM,"openfl.display.Stage3D","__renderDOM",0x9069cb83,"openfl.display.Stage3D.__renderDOM","openfl/display/Stage3D.hx",205,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_229___renderGL,"openfl.display.Stage3D","__renderGL",0x25621024,"openfl.display.Stage3D.__renderGL","openfl/display/Stage3D.hx",229,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_249___resize,"openfl.display.Stage3D","__resize",0x193af2dd,"openfl.display.Stage3D.__resize","openfl/display/Stage3D.hx",249,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_263___resetContext3DStates,"openfl.display.Stage3D","__resetContext3DStates",0x6c934f5c,"openfl.display.Stage3D.__resetContext3DStates","openfl/display/Stage3D.hx",263,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_273_set_x,"openfl.display.Stage3D","set_x",0xeed8e5f2,"openfl.display.Stage3D.set_x","openfl/display/Stage3D.hx",273,0x37141b9b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e7f1148457df64b_290_set_y,"openfl.display.Stage3D","set_y",0xeed8e5f3,"openfl.display.Stage3D.set_y","openfl/display/Stage3D.hx",290,0x37141b9b)
namespace openfl{
namespace display{

void Stage3D_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_57_new)
HXLINE(  59)		super::__construct(null());
HXLINE(  61)		this->set_x((int)0);
HXLINE(  62)		this->set_y((int)0);
HXLINE(  64)		this->visible = true;
            	}

Dynamic Stage3D_obj::__CreateEmpty() { return new Stage3D_obj; }

void *Stage3D_obj::_hx_vtable = 0;

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stage3D_obj > _hx_result = new Stage3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stage3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
	} else {
		return inClassId==(int)0x6b07d441;
	}
}

void Stage3D_obj::requestContext3D( ::Dynamic __o_context3DRenderMode, ::Dynamic __o_profile){
 ::Dynamic context3DRenderMode = __o_context3DRenderMode.Default(0);
 ::Dynamic profile = __o_profile.Default(0);
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_69_requestContext3D)
HXLINE(  71)		this->_hx___contextRequested = true;
HXLINE(  73)		if (hx::IsNotNull( this->context3D )) {
HXLINE(  75)			::haxe::Timer_obj::delay(this->_hx___dispatchCreate_dyn(),(int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,requestContext3D,(void))

void Stage3D_obj::requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_84_requestContext3DMatchingProfiles)
HXLINE(  84)		this->requestContext3D(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3DMatchingProfiles,(void))

void Stage3D_obj::_hx___createContext( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_89___createContext)
HXLINE(  91)		this->_hx___stage = stage;
HXLINE(  93)		if (hx::IsNotNull( renderSession->gl )) {
HXLINE(  95)			this->context3D =  ::openfl::display3D::Context3D_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),renderSession);
HXLINE(  96)			this->_hx___dispatchCreate();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___createContext,(void))

void Stage3D_obj::_hx___dispatchError(){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_157___dispatchError)
HXLINE( 159)		this->_hx___contextRequested = false;
HXLINE( 160)		this->dispatchEvent( ::openfl::events::ErrorEvent_obj::__alloc( HX_CTX ,HX_("error",c8,cb,29,73),false,false,HX_("Context3D not available",9c,fc,63,d3),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___dispatchError,(void))

void Stage3D_obj::_hx___dispatchCreate(){
            	HX_GC_STACKFRAME(&_hx_pos_3e7f1148457df64b_167___dispatchCreate)
HXLINE( 167)		if (this->_hx___contextRequested) {
HXLINE( 169)			this->_hx___contextRequested = false;
HXLINE( 170)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("context3DCreate",7c,bf,59,7b),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___dispatchCreate,(void))

void Stage3D_obj::_hx___renderCairo( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_177___renderCairo)
HXLINE( 179)		if (!(this->visible)) {
HXLINE( 179)			return;
            		}
HXLINE( 181)		if (this->_hx___contextRequested) {
HXLINE( 183)			this->_hx___dispatchError();
HXLINE( 184)			this->_hx___contextRequested = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___renderCairo,(void))

void Stage3D_obj::_hx___renderCanvas( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_191___renderCanvas)
HXLINE( 193)		if (!(this->visible)) {
HXLINE( 193)			return;
            		}
HXLINE( 195)		if (this->_hx___contextRequested) {
HXLINE( 197)			this->_hx___dispatchError();
HXLINE( 198)			this->_hx___contextRequested = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___renderCanvas,(void))

void Stage3D_obj::_hx___renderDOM( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_205___renderDOM)
HXLINE( 207)		if (!(this->visible)) {
HXLINE( 207)			return;
            		}
HXLINE( 209)		bool _hx_tmp;
HXDLIN( 209)		if (this->_hx___contextRequested) {
HXLINE( 209)			_hx_tmp = hx::IsNull( this->context3D );
            		}
            		else {
HXLINE( 209)			_hx_tmp = false;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 211)			this->_hx___createContext(stage,renderSession);
            		}
HXLINE( 215)		if (hx::IsNotNull( this->context3D )) {
HXLINE( 221)			this->_hx___resetContext3DStates();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___renderDOM,(void))

void Stage3D_obj::_hx___renderGL( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_229___renderGL)
HXLINE( 231)		if (!(this->visible)) {
HXLINE( 231)			return;
            		}
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		if (this->_hx___contextRequested) {
HXLINE( 233)			_hx_tmp = hx::IsNull( this->context3D );
            		}
            		else {
HXLINE( 233)			_hx_tmp = false;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 235)			this->_hx___createContext(stage,renderSession);
            		}
HXLINE( 239)		if (hx::IsNotNull( this->context3D )) {
HXLINE( 241)			this->_hx___resetContext3DStates();
HXLINE( 242)			{
HXLINE( 242)				if (hx::IsNotNull( this->context3D )) {
HXLINE( 242)					renderSession->blendModeManager->setBlendMode(null());
HXDLIN( 242)					if (hx::IsNotNull( renderSession->shaderManager->currentShader )) {
HXLINE( 242)						renderSession->shaderManager->setShader(null());
HXDLIN( 242)						if (hx::IsNotNull( this->context3D->_hx___program )) {
HXLINE( 242)							this->context3D->_hx___program->_hx___use();
            						}
            					}
            				}
HXDLIN( 242)				if (::openfl::_internal::stage3D::GLUtils_obj::debug) {
HXLINE( 242)					renderSession->gl->getError();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___renderGL,(void))

void Stage3D_obj::_hx___resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_249___resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___resize,(void))

void Stage3D_obj::_hx___resetContext3DStates(){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_263___resetContext3DStates)
HXLINE( 266)		this->context3D->_hx___updateBlendFactors();
HXLINE( 268)		this->context3D->_hx___updateBackbufferViewport();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___resetContext3DStates,(void))

Float Stage3D_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_273_set_x)
HXLINE( 275)		if ((this->x == value)) {
HXLINE( 275)			return value;
            		}
HXLINE( 277)		this->x = value;
HXLINE( 279)		if (hx::IsNotNull( this->context3D )) {
HXLINE( 281)			this->context3D->_hx___updateBackbufferViewport();
            		}
HXLINE( 285)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_x,return )

Float Stage3D_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_3e7f1148457df64b_290_set_y)
HXLINE( 292)		if ((this->y == value)) {
HXLINE( 292)			return value;
            		}
HXLINE( 294)		this->y = value;
HXLINE( 296)		if (hx::IsNotNull( this->context3D )) {
HXLINE( 298)			this->context3D->_hx___updateBackbufferViewport();
            		}
HXLINE( 302)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_y,return )

bool Stage3D_obj::_hx___active;


hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new() {
	hx::ObjectPtr< Stage3D_obj > __this = new Stage3D_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__alloc(hx::Ctx *_hx_ctx) {
	Stage3D_obj *__this = (Stage3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stage3D_obj), true, "openfl.display.Stage3D"));
	*(void **)__this = Stage3D_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_hx___contextRequested,"__contextRequested");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_hx___contextRequested,"__contextRequested");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Stage3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn()); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible); }
		if (HX_FIELD_EQ(inName,"__stage") ) { return hx::Val( _hx___stage); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__resize") ) { return hx::Val( _hx___resize_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return hx::Val( context3D); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return hx::Val( _hx___renderCairo_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return hx::Val( _hx___renderCanvas_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createContext") ) { return hx::Val( _hx___createContext_dyn()); }
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return hx::Val( _hx___dispatchError_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return hx::Val( requestContext3D_dyn()); }
		if (HX_FIELD_EQ(inName,"__dispatchCreate") ) { return hx::Val( _hx___dispatchCreate_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { return hx::Val( _hx___contextRequested); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__resetContext3DStates") ) { return hx::Val( _hx___resetContext3DStates_dyn()); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"requestContext3DMatchingProfiles") ) { return hx::Val( requestContext3DMatchingProfiles_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { outValue = _hx___active; return true; }
	}
	return false;
}

hx::Val Stage3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_x(inValue) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_y(inValue) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { _hx___contextRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { _hx___active=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"));
	outFields->push(HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stage3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Stage3D_obj,context3D),HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,_hx___contextRequested),HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(Stage3D_obj,_hx___stage),HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Stage3D_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Stage3D_obj::_hx___active,HX_HCSTRING("__active","\xe6","\xac","\x75","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Stage3D_obj_sMemberFields[] = {
	HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"),
	HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"),
	HX_HCSTRING("requestContext3D","\x11","\x7b","\x31","\xf9"),
	HX_HCSTRING("requestContext3DMatchingProfiles","\x38","\x62","\xbe","\x66"),
	HX_HCSTRING("__createContext","\x33","\xa7","\x6c","\x89"),
	HX_HCSTRING("__dispatchError","\x8e","\x03","\x7c","\x4b"),
	HX_HCSTRING("__dispatchCreate","\x76","\xfc","\xad","\xeb"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__resetContext3DStates","\xd3","\xf3","\x5d","\xf3"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void Stage3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage3D_obj::_hx___active,"__active");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stage3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage3D_obj::_hx___active,"__active");
};

#endif

hx::Class Stage3D_obj::__mClass;

static ::String Stage3D_obj_sStaticFields[] = {
	HX_HCSTRING("__active","\xe6","\xac","\x75","\xbe"),
	::String(null())
};

void Stage3D_obj::__register()
{
	hx::Object *dummy = new Stage3D_obj;
	Stage3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage3D","\xc5","\x0f","\x85","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage3D_obj::__SetStatic;
	__mClass->mMarkFunc = Stage3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Stage3D_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stage3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stage3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
