// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_ui_Mouse
#define INCLUDED_openfl_ui_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,ui,Mouse)

namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Mouse_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();

	public:
		enum { _hx_ClassId = 0x1d7c6159 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.ui.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.ui.Mouse"); }

		hx::ObjectPtr< Mouse_obj > __new() {
			hx::ObjectPtr< Mouse_obj > __this = new Mouse_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Mouse_obj > __alloc(hx::Ctx *_hx_ctx) {
			Mouse_obj *__this = (Mouse_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Mouse_obj), false, "openfl.ui.Mouse"));
			*(void **)__this = Mouse_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void __boot();
		static bool supportsCursor;
		static bool supportsNativeCursor;
		static ::String _hx___cursor;
		static void hide();
		static ::Dynamic hide_dyn();

		static void show();
		static ::Dynamic show_dyn();

		static ::String get_cursor();
		static ::Dynamic get_cursor_dyn();

		static ::String set_cursor(::String value);
		static ::Dynamic set_cursor_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_Mouse */ 
