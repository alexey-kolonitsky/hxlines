// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeHTTPRequest
#include <lime/_backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_String
#include <lime/app/Promise_String.h>
#endif
#ifndef INCLUDED_lime_app_Promise_haxe_io_Bytes
#include <lime/app/Promise_haxe_io_Bytes.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#include <lime/net/curl/_CURL/CURL_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_39_new,"lime._backend.native.NativeHTTPRequest","new",0xaa6a078b,"lime._backend.native.NativeHTTPRequest.new","lime/_backend/native/NativeHTTPRequest.hx",39,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_49_cancel,"lime._backend.native.NativeHTTPRequest","cancel",0x7706432f,"lime._backend.native.NativeHTTPRequest.cancel","lime/_backend/native/NativeHTTPRequest.hx",49,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_61_init,"lime._backend.native.NativeHTTPRequest","init",0x6f154985,"lime._backend.native.NativeHTTPRequest.init","lime/_backend/native/NativeHTTPRequest.hx",61,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_66_loadData,"lime._backend.native.NativeHTTPRequest","loadData",0x8b5e1465,"lime._backend.native.NativeHTTPRequest.loadData","lime/_backend/native/NativeHTTPRequest.hx",66,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_83_loadData,"lime._backend.native.NativeHTTPRequest","loadData",0x8b5e1465,"lime._backend.native.NativeHTTPRequest.loadData","lime/_backend/native/NativeHTTPRequest.hx",83,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_102_loadFile,"lime._backend.native.NativeHTTPRequest","loadFile",0x8cb68cb7,"lime._backend.native.NativeHTTPRequest.loadFile","lime/_backend/native/NativeHTTPRequest.hx",102,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_153_loadText,"lime._backend.native.NativeHTTPRequest","loadText",0x95f48ae8,"lime._backend.native.NativeHTTPRequest.loadText","lime/_backend/native/NativeHTTPRequest.hx",153,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_143_loadText,"lime._backend.native.NativeHTTPRequest","loadText",0x95f48ae8,"lime._backend.native.NativeHTTPRequest.loadText","lime/_backend/native/NativeHTTPRequest.hx",143,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_170_loadURL,"lime._backend.native.NativeHTTPRequest","loadURL",0x421c3194,"lime._backend.native.NativeHTTPRequest.loadURL","lime/_backend/native/NativeHTTPRequest.hx",170,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_240_loadURL,"lime._backend.native.NativeHTTPRequest","loadURL",0x421c3194,"lime._backend.native.NativeHTTPRequest.loadURL","lime/_backend/native/NativeHTTPRequest.hx",240,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_247_loadURL,"lime._backend.native.NativeHTTPRequest","loadURL",0x421c3194,"lime._backend.native.NativeHTTPRequest.loadURL","lime/_backend/native/NativeHTTPRequest.hx",247,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_253_loadURL,"lime._backend.native.NativeHTTPRequest","loadURL",0x421c3194,"lime._backend.native.NativeHTTPRequest.loadURL","lime/_backend/native/NativeHTTPRequest.hx",253,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_349_curl_onHeader,"lime._backend.native.NativeHTTPRequest","curl_onHeader",0x7ca3e9ea,"lime._backend.native.NativeHTTPRequest.curl_onHeader","lime/_backend/native/NativeHTTPRequest.hx",349,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_360_curl_onProgress,"lime._backend.native.NativeHTTPRequest","curl_onProgress",0x1ecd694a,"lime._backend.native.NativeHTTPRequest.curl_onProgress","lime/_backend/native/NativeHTTPRequest.hx",360,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_380_curl_onRead,"lime._backend.native.NativeHTTPRequest","curl_onRead",0x21af6a73,"lime._backend.native.NativeHTTPRequest.curl_onRead","lime/_backend/native/NativeHTTPRequest.hx",380,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_407_curl_onWrite,"lime._backend.native.NativeHTTPRequest","curl_onWrite",0x416c8722,"lime._backend.native.NativeHTTPRequest.curl_onWrite","lime/_backend/native/NativeHTTPRequest.hx",407,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_419_threadPool_doWork,"lime._backend.native.NativeHTTPRequest","threadPool_doWork",0x4a957500,"lime._backend.native.NativeHTTPRequest.threadPool_doWork","lime/_backend/native/NativeHTTPRequest.hx",419,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_438_threadPool_onComplete,"lime._backend.native.NativeHTTPRequest","threadPool_onComplete",0xbc2cf4fc,"lime._backend.native.NativeHTTPRequest.threadPool_onComplete","lime/_backend/native/NativeHTTPRequest.hx",438,0xedb6ece6)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebc94bde832cf0c_446_threadPool_onError,"lime._backend.native.NativeHTTPRequest","threadPool_onError",0x0006dfa5,"lime._backend.native.NativeHTTPRequest.threadPool_onError","lime/_backend/native/NativeHTTPRequest.hx",446,0xedb6ece6)
namespace lime{
namespace _backend{
namespace native{

void NativeHTTPRequest_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_39_new)
HXLINE(  41)		this->curl = (int)0;
HXLINE(  42)		this->promise =  ::lime::app::Promise_haxe_io_Bytes_obj::__alloc( HX_CTX );
            	}

Dynamic NativeHTTPRequest_obj::__CreateEmpty() { return new NativeHTTPRequest_obj; }

void *NativeHTTPRequest_obj::_hx_vtable = 0;

Dynamic NativeHTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NativeHTTPRequest_obj > _hx_result = new NativeHTTPRequest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeHTTPRequest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16ba4f4b;
}

void NativeHTTPRequest_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_49_cancel)
HXLINE(  49)		if ((this->curl != (int)0)) {
HXLINE(  51)			::lime::net::curl::CURLEasy_obj::reset(this->curl);
HXLINE(  52)			::lime::net::curl::CURLEasy_obj::perform(this->curl);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,cancel,(void))

void NativeHTTPRequest_obj::init(::Dynamic parent){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_61_init)
HXLINE(  61)		this->parent = parent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,init,(void))

 ::lime::app::Future NativeHTTPRequest_obj::loadData(::String uri,hx::Null< bool >  __o_binary){
bool binary = __o_binary.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_66_loadData)
HXLINE(  66)		 ::lime::_backend::native::NativeHTTPRequest _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  68)		if (hx::IsNull( ::lime::_backend::native::NativeHTTPRequest_obj::threadPool )) {
HXLINE(  70)			::lime::net::curl::_CURL::CURL_Impl__obj::globalInit((int)3);
HXLINE(  72)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,(int)1,(int)5);
HXLINE(  73)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool->doWork->add(::lime::_backend::native::NativeHTTPRequest_obj::threadPool_doWork_dyn(),null(),null());
HXLINE(  74)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool->onComplete->add(::lime::_backend::native::NativeHTTPRequest_obj::threadPool_onComplete_dyn(),null(),null());
HXLINE(  75)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool->onError->add(::lime::_backend::native::NativeHTTPRequest_obj::threadPool_onError_dyn(),null(),null());
            		}
HXLINE(  79)		if ((( (int)(this->parent->__Field(HX_("timeout",a1,1a,f7,d8),hx::paccDynamic)) ) > (int)0)) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::lime::_backend::native::NativeHTTPRequest,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_83_loadData)
HXLINE(  83)				bool _hx_tmp;
HXDLIN(  83)				bool _hx_tmp1;
HXDLIN(  83)				bool _hx_tmp2;
HXDLIN(  83)				if ((_gthis->bytesLoaded == (int)0)) {
HXLINE(  83)					_hx_tmp2 = (_gthis->bytesTotal == (int)0);
            				}
            				else {
HXLINE(  83)					_hx_tmp2 = false;
            				}
HXDLIN(  83)				if (_hx_tmp2) {
HXLINE(  83)					_hx_tmp1 = !(_gthis->promise->get_isComplete());
            				}
            				else {
HXLINE(  83)					_hx_tmp1 = false;
            				}
HXDLIN(  83)				if (_hx_tmp1) {
HXLINE(  83)					_hx_tmp = !(_gthis->promise->get_isError());
            				}
            				else {
HXLINE(  83)					_hx_tmp = false;
            				}
HXDLIN(  83)				if (_hx_tmp) {
HXLINE(  87)					_gthis->promise->error((int)28);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  81)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),( (int)(this->parent->__Field(HX_("timeout",a1,1a,f7,d8),hx::paccDynamic)) ));
            		}
HXLINE(  95)		::lime::_backend::native::NativeHTTPRequest_obj::threadPool->queue( ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("binary",01,bc,0b,ed),binary)
            			->setFixed(1,HX_("uri",6c,2b,59,00),uri)
            			->setFixed(2,HX_("instance",95,1f,e1,59),hx::ObjectPtr<OBJ_>(this))));
HXLINE(  97)		return this->promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,loadData,return )

void NativeHTTPRequest_obj::loadFile(::String path){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_102_loadFile)
HXLINE( 104)		int index = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 106)		if ((index > (int)-1)) {
HXLINE( 108)			path = path.substring((int)0,index);
            		}
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (hx::IsNotNull( path )) {
HXLINE( 120)			_hx_tmp = !(::sys::FileSystem_obj::exists(path));
            		}
            		else {
HXLINE( 120)			_hx_tmp = true;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 122)			 ::lime::app::Promise_haxe_io_Bytes _hx_tmp1 = this->promise;
HXDLIN( 122)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool->sendError( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7),_hx_tmp1)
            				->setFixed(1,HX_("error",c8,cb,29,73),(HX_("Cannot load file: ",5f,26,cd,00) + path))));
            		}
            		else {
HXLINE( 126)			this->bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path);
HXLINE( 128)			if (hx::IsNotNull( this->bytes )) {
HXLINE( 130)				::lime::_backend::native::NativeHTTPRequest_obj::threadPool->sendComplete( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),this->promise)
            					->setFixed(1,HX_("result",dd,68,84,08),this->bytes)));
            			}
            			else {
HXLINE( 134)				 ::lime::app::Promise_haxe_io_Bytes _hx_tmp2 = this->promise;
HXDLIN( 134)				::lime::_backend::native::NativeHTTPRequest_obj::threadPool->sendError( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),_hx_tmp2)
            					->setFixed(1,HX_("error",c8,cb,29,73),(HX_("Cannot load file: ",5f,26,cd,00) + path))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,loadFile,(void))

 ::lime::app::Future NativeHTTPRequest_obj::loadText(::String uri){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise_String,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_153_loadText)
HXLINE( 153)			if (hx::IsNull( bytes )) {
HXLINE( 155)				promise->complete(null());
            			}
            			else {
HXLINE( 159)				::String _hx_tmp = bytes->getString((int)0,bytes->length);
HXDLIN( 159)				promise->complete(_hx_tmp);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_143_loadText)
HXLINE( 145)		 ::lime::app::Promise_String promise =  ::lime::app::Promise_String_obj::__alloc( HX_CTX );
HXLINE( 146)		 ::lime::app::Future future = this->loadData(uri,false);
HXLINE( 148)		future->onProgress(promise->progress_dyn());
HXLINE( 149)		future->onError(promise->error_dyn());
HXLINE( 151)		future->onComplete( ::Dynamic(new _hx_Closure_0(promise)));
HXLINE( 165)		return promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,loadText,return )

void NativeHTTPRequest_obj::loadURL(::String uri,bool binary){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_170_loadURL)
HXLINE( 172)		this->bytes = ::haxe::io::Bytes_obj::alloc((int)0);
HXLINE( 174)		this->bytesLoaded = (int)0;
HXLINE( 175)		this->bytesTotal = (int)0;
HXLINE( 176)		this->readPosition = (int)0;
HXLINE( 178)		if ((this->curl == (int)0)) {
HXLINE( 180)			this->curl = ::lime::net::curl::CURLEasy_obj::init();
            		}
            		else {
HXLINE( 184)			::lime::net::curl::CURLEasy_obj::reset(this->curl);
            		}
HXLINE( 188)		 ::haxe::io::Bytes data = ( ( ::haxe::io::Bytes)(this->parent->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) );
HXLINE( 189)		::String query = HX_("",00,00,00,00);
HXLINE( 191)		if (hx::IsNull( data )) {
HXLINE( 193)			{
HXLINE( 193)				 ::Dynamic key = ( ( ::haxe::ds::StringMap)( ::Dynamic(this->parent->__Field(HX_("formData",8e,d5,80,56),hx::paccDynamic))) )->keys();
HXDLIN( 193)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 193)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 195)					if ((query.length > (int)0)) {
HXLINE( 195)						query = (query + HX_("&",26,00,00,00));
            					}
HXLINE( 196)					::String query1 = (::StringTools_obj::urlEncode(key1) + HX_("=",3d,00,00,00));
HXDLIN( 196)					query = (query + (query1 + ::StringTools_obj::urlEncode(::Std_obj::string(( ( ::haxe::ds::StringMap)( ::Dynamic(this->parent->__Field(HX_("formData",8e,d5,80,56),hx::paccDynamic))) )->get(key1)))));
            				}
            			}
HXLINE( 200)			if ((query != HX_("",00,00,00,00))) {
HXLINE( 202)				if ((( (::String)(this->parent->__Field(HX_("method",e1,f6,5a,09),hx::paccDynamic)) ) == HX_("GET",76,1c,36,00))) {
HXLINE( 204)					if ((uri.indexOf(HX_("?",3f,00,00,00),null()) > (int)-1)) {
HXLINE( 206)						uri = (uri + (HX_("&",26,00,00,00) + query));
            					}
            					else {
HXLINE( 210)						uri = (uri + (HX_("?",3f,00,00,00) + query));
            					}
HXLINE( 214)					query = HX_("",00,00,00,00);
            				}
            				else {
HXLINE( 218)					data = ::haxe::io::Bytes_obj::ofString(query);
            				}
            			}
            		}
HXLINE( 225)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)10002,uri);
HXLINE( 227)		{
HXLINE( 227)			::String _g = ( (::String)(this->parent->__Field(HX_("method",e1,f6,5a,09),hx::paccDynamic)) );
HXDLIN( 227)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("GET",76,1c,36,00)) ){
HXLINE( 235)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)80,true);
HXDLIN( 235)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("HEAD",20,f1,cb,2f)) ){
HXLINE( 231)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)44,true);
HXDLIN( 231)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("POST",60,4c,1d,35)) ){
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::haxe::io::Bytes,a2, ::Dynamic,f) HXARGC(1)
            				 ::haxe::io::Bytes _hx_run(int a1){
            					HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_240_loadURL)
HXLINE( 240)					return f(a1,a2);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 239)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)47,true);
HXLINE( 240)				 ::Dynamic f = this->curl_onRead_dyn();
HXDLIN( 240)				 ::haxe::io::Bytes a2 = data;
HXDLIN( 240)				 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_1(a2,f));
HXDLIN( 240)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)20012,_hx_tmp);
HXLINE( 241)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)60,data->length);
HXLINE( 242)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)14,data->length);
HXLINE( 237)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("PUT",af,fe,3c,00)) ){
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_2, ::haxe::io::Bytes,a21, ::Dynamic,f1) HXARGC(1)
            				 ::haxe::io::Bytes _hx_run(int a11){
            					HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_247_loadURL)
HXLINE( 247)					return f1(a11,a21);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 246)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)46,true);
HXLINE( 247)				 ::Dynamic f1 = this->curl_onRead_dyn();
HXDLIN( 247)				 ::haxe::io::Bytes a21 = data;
HXDLIN( 247)				 ::Dynamic _hx_tmp1 =  ::Dynamic(new _hx_Closure_2(a21,f1));
HXDLIN( 247)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)20012,_hx_tmp1);
HXLINE( 248)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)14,data->length);
HXLINE( 244)				goto _hx_goto_9;
            			}
            			/* default */{
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f2, ::haxe::io::Bytes,a22) HXARGC(1)
            				 ::haxe::io::Bytes _hx_run(int a12){
            					HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_253_loadURL)
HXLINE( 253)					return f2(a12,a22);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 252)				Float _hx_tmp2 = this->curl;
HXDLIN( 252)				::lime::net::curl::CURLEasy_obj::setopt(_hx_tmp2,(int)10036,::Std_obj::string( ::Dynamic(this->parent->__Field(HX_("method",e1,f6,5a,09),hx::paccDynamic))));
HXLINE( 253)				 ::Dynamic f2 = this->curl_onRead_dyn();
HXDLIN( 253)				 ::haxe::io::Bytes a22 = data;
HXDLIN( 253)				 ::Dynamic _hx_tmp3 =  ::Dynamic(new _hx_Closure_0(f2,a22));
HXDLIN( 253)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)20012,_hx_tmp3);
HXLINE( 254)				::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)14,data->length);
            			}
            			_hx_goto_9:;
            		}
HXLINE( 258)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)52, ::Dynamic(this->parent->__Field(HX_("followRedirects",26,5a,40,75),hx::paccDynamic)));
HXLINE( 259)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)58,true);
HXLINE( 261)		::Array< ::String > headers = ::Array_obj< ::String >::__new(0);
HXLINE( 262)		headers->push(HX_("Expect: ",df,c4,e1,19));
HXLINE( 264)		::String contentType = null();
HXLINE( 266)		{
HXLINE( 266)			int _g1 = (int)0;
HXDLIN( 266)			::cpp::VirtualArray _g2 = hx::TCast< ::cpp::VirtualArray >::cast(( (::Array< ::Dynamic>)(this->parent->__Field(HX_("headers",46,52,08,63),hx::paccDynamic)) ));
HXDLIN( 266)			while((_g1 < _g2->get_length())){
HXLINE( 266)				 ::Dynamic header = _g2->__get(_g1);
HXDLIN( 266)				_g1 = (_g1 + (int)1);
HXLINE( 268)				if (hx::IsEq(  ::Dynamic(header->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)),HX_("Content-Type",ce,69,5d,3c) )) {
HXLINE( 270)					contentType = ( (::String)(header->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) );
            				}
            				else {
HXLINE( 274)					::String _hx_tmp4 = ((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(header->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)))) + HX_(": ",a6,32,00,00));
HXDLIN( 274)					headers->push((_hx_tmp4 + ::Std_obj::string( ::Dynamic(header->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)))));
            				}
            			}
            		}
HXLINE( 280)		if (hx::IsNotNull( ( (::String)(this->parent->__Field(HX_("contentType",93,3c,7b,2a),hx::paccDynamic)) ) )) {
HXLINE( 282)			contentType = ( (::String)(this->parent->__Field(HX_("contentType",93,3c,7b,2a),hx::paccDynamic)) );
            		}
HXLINE( 286)		if (hx::IsNull( contentType )) {
HXLINE( 288)			if (hx::IsNotNull( ( ( ::haxe::io::Bytes)(this->parent->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) ) )) {
HXLINE( 290)				contentType = HX_("application/octet-stream",5d,f8,82,30);
            			}
            			else {
HXLINE( 292)				if ((query != HX_("",00,00,00,00))) {
HXLINE( 294)					contentType = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            				}
            			}
            		}
HXLINE( 300)		if (hx::IsNotNull( contentType )) {
HXLINE( 302)			headers->push((HX_("Content-Type: ",f4,2b,e6,1d) + contentType));
            		}
HXLINE( 306)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)10023,headers);
HXLINE( 308)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)20056,this->curl_onProgress_dyn());
HXLINE( 309)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)20011,this->curl_onWrite_dyn());
HXLINE( 311)		if (( (bool)(this->parent->__Field(HX_("enableResponseHeaders",82,32,47,05),hx::paccDynamic)) )) {
HXLINE( 313)			::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)20079,this->curl_onHeader_dyn());
            		}
HXLINE( 317)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)64,false);
HXLINE( 318)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)81,(int)0);
HXLINE( 319)		 ::Dynamic _hx_tmp5;
HXDLIN( 319)		if (hx::IsNull( ( (::String)(this->parent->__Field(HX_("userAgent",7a,f0,12,c8),hx::paccDynamic)) ) )) {
HXLINE( 319)			_hx_tmp5 = HX_("libcurl-agent/1.0",4d,41,cc,d3);
            		}
            		else {
HXLINE( 319)			_hx_tmp5 =  ::Dynamic(this->parent->__Field(HX_("userAgent",7a,f0,12,c8),hx::paccDynamic));
            		}
HXDLIN( 319)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)10018,_hx_tmp5);
HXLINE( 322)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)99,true);
HXLINE( 324)		::lime::net::curl::CURLEasy_obj::setopt(this->curl,(int)53,!(binary));
HXLINE( 326)		int result = ::lime::net::curl::CURLEasy_obj::perform(this->curl);
HXLINE( 327)		this->parent->__SetField(HX_("responseStatus",93,60,a4,78),( (int)(::lime::net::curl::CURLEasy_obj::getinfo(this->curl,(int)2097154)) ),hx::paccDynamic);
HXLINE( 329)		if ((result == (int)0)) {
HXLINE( 331)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool->sendComplete( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7),this->promise)
            				->setFixed(1,HX_("result",dd,68,84,08),this->bytes)));
            		}
            		else {
HXLINE( 335)			::lime::_backend::native::NativeHTTPRequest_obj::threadPool->sendError( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7),this->promise)
            				->setFixed(1,HX_("error",c8,cb,29,73),result)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,loadURL,(void))

int NativeHTTPRequest_obj::curl_onHeader( ::haxe::io::Bytes output,int size,int nmemb){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_349_curl_onHeader)
HXLINE( 351)		this->parent->__SetField(HX_("responseHeaders",c5,0d,ca,43),::Array_obj< ::Dynamic>::__new(0),hx::paccDynamic);
HXLINE( 355)		return (size * nmemb);
            	}


HX_DEFINE_DYNAMIC_FUNC3(NativeHTTPRequest_obj,curl_onHeader,return )

int NativeHTTPRequest_obj::curl_onProgress(Float dltotal,Float dlnow,Float uptotal,Float upnow){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_360_curl_onProgress)
HXLINE( 362)		bool _hx_tmp;
HXDLIN( 362)		bool _hx_tmp1;
HXDLIN( 362)		bool _hx_tmp2;
HXDLIN( 362)		if (!((upnow > this->bytesLoaded))) {
HXLINE( 362)			_hx_tmp2 = (dlnow > this->bytesLoaded);
            		}
            		else {
HXLINE( 362)			_hx_tmp2 = true;
            		}
HXDLIN( 362)		if (!(_hx_tmp2)) {
HXLINE( 362)			_hx_tmp1 = (uptotal > this->bytesTotal);
            		}
            		else {
HXLINE( 362)			_hx_tmp1 = true;
            		}
HXDLIN( 362)		if (!(_hx_tmp1)) {
HXLINE( 362)			_hx_tmp = (dltotal > this->bytesTotal);
            		}
            		else {
HXLINE( 362)			_hx_tmp = true;
            		}
HXDLIN( 362)		if (_hx_tmp) {
HXLINE( 364)			if ((upnow > this->bytesLoaded)) {
HXLINE( 364)				this->bytesLoaded = ::Std_obj::_hx_int(upnow);
            			}
HXLINE( 365)			if ((dlnow > this->bytesLoaded)) {
HXLINE( 365)				this->bytesLoaded = ::Std_obj::_hx_int(dlnow);
            			}
HXLINE( 366)			if ((uptotal > this->bytesTotal)) {
HXLINE( 366)				this->bytesTotal = ::Std_obj::_hx_int(uptotal);
            			}
HXLINE( 367)			if ((dltotal > this->bytesTotal)) {
HXLINE( 367)				this->bytesTotal = ::Std_obj::_hx_int(dltotal);
            			}
HXLINE( 369)			this->promise->progress(this->bytesLoaded,this->bytesTotal);
            		}
HXLINE( 373)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(NativeHTTPRequest_obj,curl_onProgress,return )

 ::haxe::io::Bytes NativeHTTPRequest_obj::curl_onRead(int max, ::haxe::io::Bytes input){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_380_curl_onRead)
HXLINE( 380)		bool _hx_tmp;
HXDLIN( 380)		if ((this->readPosition == (int)0)) {
HXLINE( 380)			_hx_tmp = (max >= input->length);
            		}
            		else {
HXLINE( 380)			_hx_tmp = false;
            		}
HXDLIN( 380)		if (_hx_tmp) {
HXLINE( 382)			return input;
            		}
            		else {
HXLINE( 384)			if ((this->readPosition >= input->length)) {
HXLINE( 386)				return ::haxe::io::Bytes_obj::alloc((int)0);
            			}
            			else {
HXLINE( 390)				int length = max;
HXLINE( 392)				if (((this->readPosition + length) > input->length)) {
HXLINE( 394)					length = (input->length - this->readPosition);
            				}
HXLINE( 398)				 ::haxe::io::Bytes data = input->sub(this->readPosition,length);
HXLINE( 399)				 ::lime::_backend::native::NativeHTTPRequest _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 399)				_hx_tmp1->readPosition = (_hx_tmp1->readPosition + length);
HXLINE( 400)				return data;
            			}
            		}
HXLINE( 380)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,curl_onRead,return )

int NativeHTTPRequest_obj::curl_onWrite( ::haxe::io::Bytes output,int size,int nmemb){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_407_curl_onWrite)
HXLINE( 409)		 ::haxe::io::Bytes cacheBytes = this->bytes;
HXLINE( 410)		this->bytes = ::haxe::io::Bytes_obj::alloc((this->bytes->length + output->length));
HXLINE( 411)		this->bytes->blit((int)0,cacheBytes,(int)0,cacheBytes->length);
HXLINE( 412)		this->bytes->blit(cacheBytes->length,output,(int)0,output->length);
HXLINE( 414)		return (size * nmemb);
            	}


HX_DEFINE_DYNAMIC_FUNC3(NativeHTTPRequest_obj,curl_onWrite,return )

 ::lime::_hx_system::ThreadPool NativeHTTPRequest_obj::threadPool;

void NativeHTTPRequest_obj::threadPool_doWork( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_419_threadPool_doWork)
HXLINE( 421)		 ::lime::_backend::native::NativeHTTPRequest instance = ( ( ::lime::_backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),hx::paccDynamic)) );
HXLINE( 422)		::String uri = ( (::String)(state->__Field(HX_("uri",6c,2b,59,00),hx::paccDynamic)) );
HXLINE( 423)		bool binary = ( (bool)(state->__Field(HX_("binary",01,bc,0b,ed),hx::paccDynamic)) );
HXLINE( 425)		bool _hx_tmp;
HXDLIN( 425)		if ((uri.indexOf(HX_("http://",52,75,cd,5a),null()) == (int)-1)) {
HXLINE( 425)			_hx_tmp = (uri.indexOf(HX_("https://",cf,b4,ae,3e),null()) == (int)-1);
            		}
            		else {
HXLINE( 425)			_hx_tmp = false;
            		}
HXDLIN( 425)		if (_hx_tmp) {
HXLINE( 427)			instance->loadFile(uri);
            		}
            		else {
HXLINE( 431)			instance->loadURL(uri,binary);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,threadPool_doWork,(void))

void NativeHTTPRequest_obj::threadPool_onComplete( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_438_threadPool_onComplete)
HXLINE( 440)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic)) );
HXLINE( 441)		promise->complete(( ( ::haxe::io::Bytes)(state->__Field(HX_("result",dd,68,84,08),hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,threadPool_onComplete,(void))

void NativeHTTPRequest_obj::threadPool_onError( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_0ebc94bde832cf0c_446_threadPool_onError)
HXLINE( 448)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic)) );
HXLINE( 449)		promise->error( ::Dynamic(state->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,threadPool_onError,(void))


hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__new() {
	hx::ObjectPtr< NativeHTTPRequest_obj > __this = new NativeHTTPRequest_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__alloc(hx::Ctx *_hx_ctx) {
	NativeHTTPRequest_obj *__this = (NativeHTTPRequest_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NativeHTTPRequest_obj), true, "lime._backend.native.NativeHTTPRequest"));
	*(void **)__this = NativeHTTPRequest_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NativeHTTPRequest_obj::NativeHTTPRequest_obj()
{
}

void NativeHTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeHTTPRequest);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(curl,"curl");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_MEMBER_NAME(readPosition,"readPosition");
	HX_MARK_END_CLASS();
}

void NativeHTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(curl,"curl");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(promise,"promise");
	HX_VISIT_MEMBER_NAME(readPosition,"readPosition");
}

hx::Val NativeHTTPRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { return hx::Val( curl); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( bytes); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return hx::Val( cancel_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { return hx::Val( promise); }
		if (HX_FIELD_EQ(inName,"loadURL") ) { return hx::Val( loadURL_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadData") ) { return hx::Val( loadData_dyn()); }
		if (HX_FIELD_EQ(inName,"loadFile") ) { return hx::Val( loadFile_dyn()); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return hx::Val( loadText_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded); }
		if (HX_FIELD_EQ(inName,"curl_onRead") ) { return hx::Val( curl_onRead_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readPosition") ) { return hx::Val( readPosition); }
		if (HX_FIELD_EQ(inName,"curl_onWrite") ) { return hx::Val( curl_onWrite_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curl_onHeader") ) { return hx::Val( curl_onHeader_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curl_onProgress") ) { return hx::Val( curl_onProgress_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeHTTPRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { outValue = threadPool; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true; }
	}
	return false;
}

hx::Val NativeHTTPRequest_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { curl=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast<  ::lime::app::Promise_haxe_io_Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readPosition") ) { readPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeHTTPRequest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
	}
	return false;
}

void NativeHTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("curl","\xec","\x4a","\xc9","\x41"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"));
	outFields->push(HX_HCSTRING("readPosition","\x1f","\xee","\x2f","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NativeHTTPRequest_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(NativeHTTPRequest_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsFloat,(int)offsetof(NativeHTTPRequest_obj,curl),HX_HCSTRING("curl","\xec","\x4a","\xc9","\x41")},
	{hx::fsObject /*::lime::net::_IHTTPRequest*/ ,(int)offsetof(NativeHTTPRequest_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::lime::app::Promise_haxe_io_Bytes*/ ,(int)offsetof(NativeHTTPRequest_obj,promise),HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7")},
	{hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,readPosition),HX_HCSTRING("readPosition","\x1f","\xee","\x2f","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo NativeHTTPRequest_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_hx_system::ThreadPool*/ ,(void *) &NativeHTTPRequest_obj::threadPool,HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeHTTPRequest_obj_sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("curl","\xec","\x4a","\xc9","\x41"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"),
	HX_HCSTRING("readPosition","\x1f","\xee","\x2f","\x06"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("loadData","\x70","\x27","\x03","\xb3"),
	HX_HCSTRING("loadFile","\xc2","\x9f","\x5b","\xb4"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("loadURL","\xe9","\x88","\xe3","\x08"),
	HX_HCSTRING("curl_onHeader","\xff","\xee","\xa6","\xac"),
	HX_HCSTRING("curl_onProgress","\x9f","\x9d","\x6b","\x99"),
	HX_HCSTRING("curl_onRead","\x48","\x90","\x7d","\x25"),
	HX_HCSTRING("curl_onWrite","\xad","\x7b","\xff","\x91"),
	::String(null()) };

static void NativeHTTPRequest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::threadPool,"threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeHTTPRequest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::threadPool,"threadPool");
};

#endif

hx::Class NativeHTTPRequest_obj::__mClass;

static ::String NativeHTTPRequest_obj_sStaticFields[] = {
	HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46"),
	HX_HCSTRING("threadPool_doWork","\x95","\x28","\x69","\x50"),
	HX_HCSTRING("threadPool_onComplete","\x11","\x97","\x0a","\x2c"),
	HX_HCSTRING("threadPool_onError","\x70","\x4e","\x70","\x13"),
	::String(null())
};

void NativeHTTPRequest_obj::__register()
{
	hx::Object *dummy = new NativeHTTPRequest_obj;
	NativeHTTPRequest_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeHTTPRequest","\x19","\xe6","\x3e","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeHTTPRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeHTTPRequest_obj::__SetStatic;
	__mClass->mMarkFunc = NativeHTTPRequest_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(NativeHTTPRequest_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NativeHTTPRequest_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeHTTPRequest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeHTTPRequest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeHTTPRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeHTTPRequest_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
