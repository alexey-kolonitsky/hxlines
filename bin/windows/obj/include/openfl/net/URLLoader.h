// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_net_URLLoader
#define INCLUDED_openfl_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
HX_DECLARE_CLASS2(openfl,net,URLRequest)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES URLLoader_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();

	public:
		enum { _hx_ClassId = 0x59fbe715 };

		void __construct( ::openfl::net::URLRequest request);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.net.URLLoader"); }
		static hx::ObjectPtr< URLLoader_obj > __new( ::openfl::net::URLRequest request);
		static hx::ObjectPtr< URLLoader_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::net::URLRequest request);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("URLLoader","\xc2","\x68","\xb3","\x41"); }

		int bytesLoaded;
		int bytesTotal;
		 ::Dynamic data;
		 ::Dynamic dataFormat;
		::Dynamic _hx___httpRequest;
		void close();
		::Dynamic close_dyn();

		void load( ::openfl::net::URLRequest request);
		::Dynamic load_dyn();

		void _hx___dispatchStatus();
		::Dynamic _hx___dispatchStatus_dyn();

		void _hx___prepareRequest(::Dynamic httpRequest, ::openfl::net::URLRequest request);
		::Dynamic _hx___prepareRequest_dyn();

		void httpRequest_onError( ::Dynamic error);
		::Dynamic httpRequest_onError_dyn();

		void httpRequest_onProgress(int bytesLoaded,int bytesTotal);
		::Dynamic httpRequest_onProgress_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLLoader */ 
