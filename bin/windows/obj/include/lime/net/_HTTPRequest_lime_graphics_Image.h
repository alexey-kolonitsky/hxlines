// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_net__HTTPRequest_lime_graphics_Image
#define INCLUDED_lime_net__HTTPRequest_lime_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,net,_HTTPRequest,AbstractHTTPRequest)
HX_DECLARE_CLASS2(lime,net,_HTTPRequest_Bytes)
HX_DECLARE_CLASS2(lime,net,_HTTPRequest_lime_graphics_Image)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)

namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES _HTTPRequest_lime_graphics_Image_obj : public  ::lime::net::_HTTPRequest_Bytes_obj
{
	public:
		typedef  ::lime::net::_HTTPRequest_Bytes_obj super;
		typedef _HTTPRequest_lime_graphics_Image_obj OBJ_;
		_HTTPRequest_lime_graphics_Image_obj();

	public:
		enum { _hx_ClassId = 0x39a54782 };

		void __construct(::String uri);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net._HTTPRequest_lime_graphics_Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.net._HTTPRequest_lime_graphics_Image"); }
		static hx::ObjectPtr< _HTTPRequest_lime_graphics_Image_obj > __new(::String uri);
		static hx::ObjectPtr< _HTTPRequest_lime_graphics_Image_obj > __alloc(hx::Ctx *_hx_ctx,::String uri);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_HTTPRequest_lime_graphics_Image_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("_HTTPRequest_lime_graphics_Image","\x5a","\x18","\x68","\xb2"); }

		 ::Dynamic fromBytes( ::haxe::io::Bytes bytes);

};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net__HTTPRequest_lime_graphics_Image */ 
