// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_161_exit,"lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",161,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_199_getDisplay,"lime.system.System","getDisplay",0x2e892085,"lime.system.System.getDisplay","lime/system/System.hx",199,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_296_getTimer,"lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",296,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_312_load,"lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",312,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_322_openFile,"lime.system.System","openFile",0x26aa6b5f,"lime.system.System.openFile","lime/system/System.hx",322,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_362_openURL,"lime.system.System","openURL",0x0840dfec,"lime.system.System.openURL","lime/system/System.hx",362,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_392___copyMissingFields,"lime.system.System","__copyMissingFields",0x05666311,"lime.system.System.__copyMissingFields","lime/system/System.hx",392,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_413___getDirectory,"lime.system.System","__getDirectory",0xc98892d0,"lime.system.System.__getDirectory","lime/system/System.hx",413,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_492___registerEntryPoint,"lime.system.System","__registerEntryPoint",0x78d55f5a,"lime.system.System.__registerEntryPoint","lime/system/System.hx",492,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_522_get_allowScreenTimeout,"lime.system.System","get_allowScreenTimeout",0x287e314e,"lime.system.System.get_allowScreenTimeout","lime/system/System.hx",522,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_533_set_allowScreenTimeout,"lime.system.System","set_allowScreenTimeout",0x5c29adc2,"lime.system.System.set_allowScreenTimeout","lime/system/System.hx",533,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_543_get_applicationDirectory,"lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",543,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_550_get_applicationStorageDirectory,"lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",550,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_557_get_desktopDirectory,"lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",557,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_564_get_documentsDirectory,"lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",564,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_571_get_fontsDirectory,"lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",571,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_579_get_numDisplays,"lime.system.System","get_numDisplays",0x5056f915,"lime.system.System.get_numDisplays","lime/system/System.hx",579,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_589_get_userDirectory,"lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",589,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_601_get_endianness,"lime.system.System","get_endianness",0x4df50bb4,"lime.system.System.get_endianness","lime/system/System.hx",601,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_47_boot,"lime.system.System","boot",0x171e93ab,"lime.system.System.boot","lime/system/System.hx",47,0x6434b429)
namespace lime{
namespace _hx_system{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

void *System_obj::_hx_vtable = 0;

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool System_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36083f93;
}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

 ::lime::_hx_system::Endian System_obj::endianness;

::String System_obj::fontsDirectory;

int System_obj::numDisplays;

::String System_obj::userDirectory;

 ::haxe::ds::StringMap System_obj::_hx___applicationConfig;

 ::haxe::ds::StringMap System_obj::_hx___applicationEntryPoint;

 ::haxe::ds::IntMap System_obj::_hx___directories;

void System_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_161_exit)
HXLINE( 178)		if (hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE( 182)			::lime::app::Application_obj::current->onExit->dispatch(code);
HXLINE( 184)			if (::lime::app::Application_obj::current->onExit->canceled) {
HXLINE( 186)				return;
            			}
            		}
HXLINE( 192)		::Sys_obj::exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

 ::lime::_hx_system::Display System_obj::getDisplay(int id){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_199_getDisplay)
HXLINE( 202)		 ::Dynamic displayInfo = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_display(id)) );
HXLINE( 204)		if (hx::IsNotNull( displayInfo )) {
HXLINE( 206)			 ::lime::_hx_system::Display display =  ::lime::_hx_system::Display_obj::__alloc( HX_CTX );
HXLINE( 207)			display->id = id;
HXLINE( 208)			display->name = ( (::String)(displayInfo->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE( 209)			display->bounds =  ::lime::math::Rectangle_obj::__alloc( HX_CTX , ::Dynamic( ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)), ::Dynamic( ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)), ::Dynamic( ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic( ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)));
HXLINE( 223)			display->dpi = ( (Float)(displayInfo->__Field(HX_("dpi",5d,43,4c,00),hx::paccDynamic)) );
HXLINE( 226)			display->supportedModes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 228)			 ::lime::_hx_system::DisplayMode displayMode;
HXLINE( 230)			{
HXLINE( 230)				int _g = (int)0;
HXDLIN( 230)				::cpp::VirtualArray _g1 = hx::TCast< ::cpp::VirtualArray >::cast( ::Dynamic(displayInfo->__Field(HX_("supportedModes",a2,a6,b8,b7),hx::paccDynamic)));
HXDLIN( 230)				while((_g < _g1->get_length())){
HXLINE( 230)					 ::Dynamic mode = _g1->__get(_g);
HXDLIN( 230)					_g = (_g + (int)1);
HXLINE( 232)					displayMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX , ::Dynamic(mode->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic(mode->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)), ::Dynamic(mode->__Field(HX_("refreshRate",5b,e2,3f,40),hx::paccDynamic)), ::Dynamic(mode->__Field(HX_("pixelFormat",5d,72,1b,6f),hx::paccDynamic)));
HXLINE( 233)					display->supportedModes->push(displayMode);
            				}
            			}
HXLINE( 237)			 ::Dynamic mode1 = displayInfo->__Field(HX_("currentMode",3c,ac,f2,80),hx::paccDynamic);
HXLINE( 238)			 ::lime::_hx_system::DisplayMode currentMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX , ::Dynamic(mode1->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic(mode1->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)), ::Dynamic(mode1->__Field(HX_("refreshRate",5b,e2,3f,40),hx::paccDynamic)), ::Dynamic(mode1->__Field(HX_("pixelFormat",5d,72,1b,6f),hx::paccDynamic)));
HXLINE( 240)			{
HXLINE( 240)				int _g2 = (int)0;
HXDLIN( 240)				::Array< ::Dynamic> _g11 = display->supportedModes;
HXDLIN( 240)				while((_g2 < _g11->length)){
HXLINE( 240)					 ::lime::_hx_system::DisplayMode mode2 = _g11->__get(_g2).StaticCast<  ::lime::_hx_system::DisplayMode >();
HXDLIN( 240)					_g2 = (_g2 + (int)1);
HXLINE( 242)					bool _hx_tmp;
HXDLIN( 242)					bool _hx_tmp1;
HXDLIN( 242)					bool _hx_tmp2;
HXDLIN( 242)					if ((currentMode->pixelFormat == mode2->pixelFormat)) {
HXLINE( 242)						_hx_tmp2 = (currentMode->width == mode2->width);
            					}
            					else {
HXLINE( 242)						_hx_tmp2 = false;
            					}
HXDLIN( 242)					if (_hx_tmp2) {
HXLINE( 242)						_hx_tmp1 = (currentMode->height == mode2->height);
            					}
            					else {
HXLINE( 242)						_hx_tmp1 = false;
            					}
HXDLIN( 242)					if (_hx_tmp1) {
HXLINE( 242)						_hx_tmp = (currentMode->refreshRate == mode2->refreshRate);
            					}
            					else {
HXLINE( 242)						_hx_tmp = false;
            					}
HXDLIN( 242)					if (_hx_tmp) {
HXLINE( 244)						currentMode = mode2;
HXLINE( 245)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
HXLINE( 251)			display->currentMode = currentMode;
HXLINE( 253)			return display;
            		}
HXLINE( 284)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getDisplay,return )

int System_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_296_getTimer)
HXLINE( 296)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_timer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

 ::Dynamic System_obj::load(::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_312_load)
HXLINE( 312)		return ::lime::_hx_system::CFFI_obj::load(library,method,args,lazy);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

void System_obj::openFile(::String path){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_322_openFile)
HXLINE( 322)		if (hx::IsNotNull( path )) {
HXLINE( 326)			::Sys_obj::command(HX_("start",62,74,0b,84),::Array_obj< ::String >::__new(1)->init(0,path));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,openFile,(void))

void System_obj::openURL(::String url,::String __o_target){
::String target = __o_target.Default(HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_362_openURL)
HXLINE( 362)		if (hx::IsNotNull( url )) {
HXLINE( 366)			::lime::_hx_system::System_obj::openFile(url);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,openURL,(void))

void System_obj::_hx___copyMissingFields( ::Dynamic target, ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_392___copyMissingFields)
HXLINE( 394)		bool _hx_tmp;
HXDLIN( 394)		if (hx::IsNotNull( source )) {
HXLINE( 394)			_hx_tmp = hx::IsNull( target );
            		}
            		else {
HXLINE( 394)			_hx_tmp = true;
            		}
HXDLIN( 394)		if (_hx_tmp) {
HXLINE( 394)			return;
            		}
HXLINE( 396)		{
HXLINE( 396)			int _g = (int)0;
HXDLIN( 396)			::Array< ::String > _g1 = ::Reflect_obj::fields(source);
HXDLIN( 396)			while((_g < _g1->length)){
HXLINE( 396)				::String field = _g1->__get(_g);
HXDLIN( 396)				_g = (_g + (int)1);
HXLINE( 398)				if (!(::Reflect_obj::hasField(target,field))) {
HXLINE( 400)					::Reflect_obj::setField(target,field,::Reflect_obj::field(source,field));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___copyMissingFields,(void))

::String System_obj::_hx___getDirectory(int type){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_413___getDirectory)
HXLINE( 413)		if (::lime::_hx_system::System_obj::_hx___directories->exists(type)) {
HXLINE( 415)			return ::lime::_hx_system::System_obj::_hx___directories->get(type);
            		}
            		else {
HXLINE( 419)			::String path;
HXLINE( 421)			if ((type == (int)1)) {
HXLINE( 423)				::String company = HX_("MyCompany",11,c3,2e,cc);
HXLINE( 424)				::String file = HX_("MyApplication",24,d3,d1,1c);
HXLINE( 426)				bool _hx_tmp;
HXDLIN( 426)				if (hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE( 426)					_hx_tmp = hx::IsNotNull( ::lime::app::Application_obj::current->config );
            				}
            				else {
HXLINE( 426)					_hx_tmp = false;
            				}
HXDLIN( 426)				if (_hx_tmp) {
HXLINE( 428)					if (hx::IsNotNull( ( (::String)(::lime::app::Application_obj::current->config->__Field(HX_("company",3d,15,69,83),hx::paccDynamic)) ) )) {
HXLINE( 430)						company = ( (::String)(::lime::app::Application_obj::current->config->__Field(HX_("company",3d,15,69,83),hx::paccDynamic)) );
            					}
HXLINE( 434)					if (hx::IsNotNull( ( (::String)(::lime::app::Application_obj::current->config->__Field(HX_("file",7c,ce,bb,43),hx::paccDynamic)) ) )) {
HXLINE( 436)						file = ( (::String)(::lime::app::Application_obj::current->config->__Field(HX_("file",7c,ce,bb,43),hx::paccDynamic)) );
            					}
            				}
HXLINE( 442)				path = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_directory(type,company,file)) );
            			}
            			else {
HXLINE( 446)				path = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_directory(type,null(),null())) );
            			}
HXLINE( 451)			::String seperator = HX_("\\",5c,00,00,00);
HXLINE( 456)			bool _hx_tmp1;
HXDLIN( 456)			bool _hx_tmp2;
HXDLIN( 456)			if (hx::IsNotNull( path )) {
HXLINE( 456)				_hx_tmp2 = (path.length > (int)0);
            			}
            			else {
HXLINE( 456)				_hx_tmp2 = false;
            			}
HXDLIN( 456)			if (_hx_tmp2) {
HXLINE( 456)				_hx_tmp1 = !(::StringTools_obj::endsWith(path,seperator));
            			}
            			else {
HXLINE( 456)				_hx_tmp1 = false;
            			}
HXDLIN( 456)			if (_hx_tmp1) {
HXLINE( 458)				path = (path + seperator);
            			}
HXLINE( 462)			::lime::_hx_system::System_obj::_hx___directories->set(type,path);
HXLINE( 463)			return path;
            		}
HXLINE( 413)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___getDirectory,return )

void System_obj::_hx___registerEntryPoint(::String projectName, ::Dynamic entryPoint, ::Dynamic config){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_492___registerEntryPoint)
HXLINE( 494)		if (hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationConfig )) {
HXLINE( 496)			::lime::_hx_system::System_obj::_hx___applicationConfig =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 500)		if (hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationEntryPoint )) {
HXLINE( 502)			::lime::_hx_system::System_obj::_hx___applicationEntryPoint =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 506)		::lime::_hx_system::System_obj::_hx___applicationEntryPoint->set(projectName,entryPoint);
HXLINE( 507)		::lime::_hx_system::System_obj::_hx___applicationConfig->set(projectName,config);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(System_obj,_hx___registerEntryPoint,(void))

bool System_obj::get_allowScreenTimeout(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_522_get_allowScreenTimeout)
HXLINE( 522)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_allowScreenTimeout,return )

bool System_obj::set_allowScreenTimeout(bool value){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_533_set_allowScreenTimeout)
HXLINE( 533)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,set_allowScreenTimeout,return )

::String System_obj::get_applicationDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_543_get_applicationDirectory)
HXLINE( 543)		return ::lime::_hx_system::System_obj::_hx___getDirectory((int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_550_get_applicationStorageDirectory)
HXLINE( 550)		return ::lime::_hx_system::System_obj::_hx___getDirectory((int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_557_get_desktopDirectory)
HXLINE( 557)		return ::lime::_hx_system::System_obj::_hx___getDirectory((int)2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_564_get_documentsDirectory)
HXLINE( 564)		return ::lime::_hx_system::System_obj::_hx___getDirectory((int)3);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_571_get_fontsDirectory)
HXLINE( 571)		return ::lime::_hx_system::System_obj::_hx___getDirectory((int)4);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

int System_obj::get_numDisplays(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_579_get_numDisplays)
HXLINE( 579)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_num_displays();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_numDisplays,return )

::String System_obj::get_userDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_589_get_userDirectory)
HXLINE( 589)		return ::lime::_hx_system::System_obj::_hx___getDirectory((int)5);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

 ::lime::_hx_system::Endian System_obj::get_endianness(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_601_get_endianness)
HXLINE( 601)		return ::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_endianness,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"openFile") ) { outValue = openFile_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { outValue = inCallProp == hx::paccAlways ? get_endianness() : endianness; return true; }
		if (HX_FIELD_EQ(inName,"getDisplay") ) { outValue = getDisplay_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = disableCFFI; return true; }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { outValue = inCallProp == hx::paccAlways ? get_numDisplays() : numDisplays; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { outValue = _hx___directories; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_fontsDirectory() : fontsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__getDirectory") ) { outValue = _hx___getDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_endianness") ) { outValue = get_endianness_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numDisplays") ) { outValue = get_numDisplays_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == hx::paccAlways) { outValue = get_allowScreenTimeout(); return true; } }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__applicationConfig") ) { outValue = _hx___applicationConfig; return true; }
		if (HX_FIELD_EQ(inName,"__copyMissingFields") ) { outValue = _hx___copyMissingFields_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__registerEntryPoint") ) { outValue = _hx___registerEntryPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_allowScreenTimeout") ) { outValue = get_allowScreenTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_allowScreenTimeout") ) { outValue = set_allowScreenTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { outValue = _hx___applicationEntryPoint; return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true; }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { endianness=ioValue.Cast<  ::lime::_hx_system::Endian >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { numDisplays=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { _hx___directories=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { fontsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == hx::paccAlways)  ioValue = set_allowScreenTimeout(ioValue); }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__applicationConfig") ) { _hx___applicationConfig=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { _hx___applicationEntryPoint=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static hx::StaticInfo System_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &System_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsString,(void *) &System_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsString,(void *) &System_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsBool,(void *) &System_obj::disableCFFI,HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11")},
	{hx::fsString,(void *) &System_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsObject /*::lime::_hx_system::Endian*/ ,(void *) &System_obj::endianness,HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e")},
	{hx::fsString,(void *) &System_obj::fontsDirectory,HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88")},
	{hx::fsInt,(void *) &System_obj::numDisplays,HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11")},
	{hx::fsString,(void *) &System_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &System_obj::_hx___applicationConfig,HX_HCSTRING("__applicationConfig","\x12","\xfb","\x1c","\xf1")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &System_obj::_hx___applicationEntryPoint,HX_HCSTRING("__applicationEntryPoint","\xce","\xda","\xed","\x08")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &System_obj::_hx___directories,HX_HCSTRING("__directories","\xeb","\x9c","\xa4","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void System_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationConfig,"__applicationConfig");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationEntryPoint,"__applicationEntryPoint");
	HX_MARK_MEMBER_NAME(System_obj::_hx___directories,"__directories");
};

#ifdef HXCPP_VISIT_ALLOCS
static void System_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationConfig,"__applicationConfig");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationEntryPoint,"__applicationEntryPoint");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___directories,"__directories");
};

#endif

hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e"),
	HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88"),
	HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("__applicationConfig","\x12","\xfb","\x1c","\xf1"),
	HX_HCSTRING("__applicationEntryPoint","\xce","\xda","\xed","\x08"),
	HX_HCSTRING("__directories","\xeb","\x9c","\xa4","\xa9"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("openFile","\x66","\xab","\xf7","\xe4"),
	HX_HCSTRING("openURL","\xc5","\xbd","\x35","\x40"),
	HX_HCSTRING("__copyMissingFields","\x6a","\x22","\xdd","\xa7"),
	HX_HCSTRING("__getDirectory","\x17","\x12","\x5c","\x40"),
	HX_HCSTRING("__registerEntryPoint","\xe1","\x0d","\x46","\xfe"),
	HX_HCSTRING("get_allowScreenTimeout","\x95","\xcf","\x5c","\x6e"),
	HX_HCSTRING("set_allowScreenTimeout","\x09","\x4c","\x08","\xa2"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_fontsDirectory","\xd2","\xe2","\xb4","\x23"),
	HX_HCSTRING("get_numDisplays","\xee","\xd7","\x92","\xd2"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("get_endianness","\xfb","\x8a","\xc8","\xc4"),
	::String(null())
};

void System_obj::__register()
{
	hx::Object *dummy = new System_obj;
	System_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.System","\x95","\x83","\xbd","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = System_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = System_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void System_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_47_boot)
HXLINE(  47)		_hx___directories =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace system
