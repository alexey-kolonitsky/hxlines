// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_display_ShaderData
#define INCLUDED_openfl_display_ShaderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,ShaderData)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES ShaderData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ShaderData_obj OBJ_;
		ShaderData_obj();

	public:
		enum { _hx_ClassId = 0x2602c5dd };

		void __construct( ::openfl::utils::ByteArrayData byteArray);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.ShaderData"); }
		static hx::ObjectPtr< ShaderData_obj > __new( ::openfl::utils::ByteArrayData byteArray);
		static hx::ObjectPtr< ShaderData_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData byteArray);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ShaderData","\x0f","\x3c","\xad","\x27"); }

		 ::openfl::display::ShaderParameter_Float aAlpha;
		 ::openfl::display::ShaderParameter_Float aPosition;
		 ::openfl::display::ShaderParameter_Float aTexCoord;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData uImage0;
		 ::openfl::display::ShaderParameter_Float uMatrix;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderData */ 
