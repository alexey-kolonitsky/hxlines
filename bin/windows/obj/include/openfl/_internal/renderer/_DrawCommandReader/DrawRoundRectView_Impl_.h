// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawRoundRectView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawRoundRectView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawRoundRectView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES DrawRoundRectView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DrawRoundRectView_Impl__obj OBJ_;
		DrawRoundRectView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x568b4c1d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_"); }

		hx::ObjectPtr< DrawRoundRectView_Impl__obj > __new() {
			hx::ObjectPtr< DrawRoundRectView_Impl__obj > __this = new DrawRoundRectView_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DrawRoundRectView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			DrawRoundRectView_Impl__obj *__this = (DrawRoundRectView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DrawRoundRectView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_"));
			*(void **)__this = DrawRoundRectView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawRoundRectView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DrawRoundRectView_Impl_","\x33","\xee","\x3d","\x1f"); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static Float get_x( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_x_dyn();

		static Float get_y( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_y_dyn();

		static Float get_width( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_width_dyn();

		static Float get_height( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_height_dyn();

		static Float get_ellipseWidth( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_ellipseWidth_dyn();

		static  ::Dynamic get_ellipseHeight( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_ellipseHeight_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawRoundRectView_Impl_ */ 
