// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFTFontFace,CairoFTFontFace_Impl_)
HX_DECLARE_CLASS2(lime,text,Font)

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFTFontFace{


class HXCPP_CLASS_ATTRIBUTES CairoFTFontFace_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CairoFTFontFace_Impl__obj OBJ_;
		CairoFTFontFace_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7dcd2697 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_"); }

		hx::ObjectPtr< CairoFTFontFace_Impl__obj > __new() {
			hx::ObjectPtr< CairoFTFontFace_Impl__obj > __this = new CairoFTFontFace_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CairoFTFontFace_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			CairoFTFontFace_Impl__obj *__this = (CairoFTFontFace_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoFTFontFace_Impl__obj), false, "lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_"));
			*(void **)__this = CairoFTFontFace_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFTFontFace_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoFTFontFace_Impl_","\x02","\x4e","\x0d","\xa4"); }

		static void __boot();
		static int FT_LOAD_FORCE_AUTOHINT;
		static  ::Dynamic _new();
		static ::Dynamic _new_dyn();

		static  ::Dynamic create( ::lime::text::Font face,int loadFlags);
		static ::Dynamic create_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFTFontFace

#endif /* INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_ */ 
