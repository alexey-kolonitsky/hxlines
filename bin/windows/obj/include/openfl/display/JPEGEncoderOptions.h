// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#define INCLUDED_openfl_display_JPEGEncoderOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_05e3536633e8ac7b_12_new)
HX_DECLARE_CLASS2(openfl,display,JPEGEncoderOptions)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES JPEGEncoderOptions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JPEGEncoderOptions_obj OBJ_;
		JPEGEncoderOptions_obj();

	public:
		enum { _hx_ClassId = 0x08ab8b9c };

		void __construct(hx::Null< int >  __o_quality);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display.JPEGEncoderOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display.JPEGEncoderOptions"); }

		hx::ObjectPtr< JPEGEncoderOptions_obj > __new(hx::Null< int >  __o_quality) {
			hx::ObjectPtr< JPEGEncoderOptions_obj > __this = new JPEGEncoderOptions_obj();
			__this->__construct(__o_quality);
			return __this;
		}

		static hx::ObjectPtr< JPEGEncoderOptions_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_quality) {
			JPEGEncoderOptions_obj *__this = (JPEGEncoderOptions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JPEGEncoderOptions_obj), false, "openfl.display.JPEGEncoderOptions"));
			*(void **)__this = JPEGEncoderOptions_obj::_hx_vtable;
{
int quality = __o_quality.Default(80);
            	HX_STACKFRAME(&_hx_pos_05e3536633e8ac7b_12_new)
HXLINE(  12)		( ( ::openfl::display::JPEGEncoderOptions)(__this) )->quality = quality;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JPEGEncoderOptions_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JPEGEncoderOptions","\xea","\xc9","\xd9","\x79"); }

		int quality;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_JPEGEncoderOptions */ 
