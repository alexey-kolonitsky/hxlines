// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_ApplicationMain
#define INCLUDED_ApplicationMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ApplicationMain)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES ApplicationMain_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ApplicationMain_obj OBJ_;
		ApplicationMain_obj();

	public:
		enum { _hx_ClassId = 0x4a39ff89 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ApplicationMain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"ApplicationMain"); }

		hx::ObjectPtr< ApplicationMain_obj > __new() {
			hx::ObjectPtr< ApplicationMain_obj > __this = new ApplicationMain_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ApplicationMain_obj > __alloc(hx::Ctx *_hx_ctx) {
			ApplicationMain_obj *__this = (ApplicationMain_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ApplicationMain_obj), false, "ApplicationMain"));
			*(void **)__this = ApplicationMain_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationMain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a"); }

		static void __boot();
		static void main();
		static ::Dynamic main_dyn();

		static void create( ::Dynamic config);
		static ::Dynamic create_dyn();

		static void start( ::openfl::display::Stage stage);
		static ::Dynamic start_dyn();

};


#endif /* INCLUDED_ApplicationMain */ 
