// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoSurface,CairoSurface_Impl_)

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{


class HXCPP_CLASS_ATTRIBUTES CairoSurface_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CairoSurface_Impl__obj OBJ_;
		CairoSurface_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0b9a0b05 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoSurface.CairoSurface_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_"); }

		hx::ObjectPtr< CairoSurface_Impl__obj > __new() {
			hx::ObjectPtr< CairoSurface_Impl__obj > __this = new CairoSurface_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CairoSurface_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			CairoSurface_Impl__obj *__this = (CairoSurface_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoSurface_Impl__obj), false, "lime.graphics.cairo._CairoSurface.CairoSurface_Impl_"));
			*(void **)__this = CairoSurface_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoSurface_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoSurface_Impl_","\x05","\x91","\x98","\x4d"); }

		static void flush( ::Dynamic this1);
		static ::Dynamic flush_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_ */ 
