// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture
#define INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d2a7e04602cd59d8_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_compressed_3DC_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES AMD_compressed_3DC_texture_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AMD_compressed_3DC_texture_obj OBJ_;
		AMD_compressed_3DC_texture_obj();

	public:
		enum { _hx_ClassId = 0x6fd0dae5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_compressed_3DC_texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.AMD_compressed_3DC_texture"); }

		hx::ObjectPtr< AMD_compressed_3DC_texture_obj > __new() {
			hx::ObjectPtr< AMD_compressed_3DC_texture_obj > __this = new AMD_compressed_3DC_texture_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AMD_compressed_3DC_texture_obj > __alloc(hx::Ctx *_hx_ctx) {
			AMD_compressed_3DC_texture_obj *__this = (AMD_compressed_3DC_texture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AMD_compressed_3DC_texture_obj), false, "lime.graphics.opengl.ext.AMD_compressed_3DC_texture"));
			*(void **)__this = AMD_compressed_3DC_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d2a7e04602cd59d8_6_new)
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::AMD_compressed_3DC_texture)(__this) )->_3DC_XY_AMD = (int)34810;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::AMD_compressed_3DC_texture)(__this) )->_3DC_X_AMD = (int)34809;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AMD_compressed_3DC_texture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AMD_compressed_3DC_texture","\x97","\xaf","\x9a","\x80"); }

		int _3DC_X_AMD;
		int _3DC_XY_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture */ 