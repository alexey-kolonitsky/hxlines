// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_utils_TouchData
#define INCLUDED_openfl_utils_TouchData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,utils,ObjectPool_openfl_utils_TouchData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,TouchData)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES TouchData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TouchData_obj OBJ_;
		TouchData_obj();

	public:
		enum { _hx_ClassId = 0x20b112cc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils.TouchData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.utils.TouchData"); }
		static hx::ObjectPtr< TouchData_obj > __new();
		static hx::ObjectPtr< TouchData_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TouchData","\x69","\xc5","\xa2","\xa9"); }

		static void __boot();
		static  ::lime::utils::ObjectPool_openfl_utils_TouchData _hx___pool;
		 ::lime::ui::Touch touch;
		 ::openfl::display::InteractiveObject touchDownTarget;
		 ::openfl::display::InteractiveObject touchOverTarget;
		::Array< ::Dynamic> rollOutStack;
		void reset();
		::Dynamic reset_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_TouchData */ 
