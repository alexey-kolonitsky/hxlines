// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_float_linear
#define INCLUDED_lime_graphics_opengl_ext_OES_texture_float_linear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4b57b99d34ba052b_10_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_texture_float_linear)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_texture_float_linear_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OES_texture_float_linear_obj OBJ_;
		OES_texture_float_linear_obj();

	public:
		enum { _hx_ClassId = 0x596c7180 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_texture_float_linear")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_texture_float_linear"); }

		hx::ObjectPtr< OES_texture_float_linear_obj > __new() {
			hx::ObjectPtr< OES_texture_float_linear_obj > __this = new OES_texture_float_linear_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< OES_texture_float_linear_obj > __alloc(hx::Ctx *_hx_ctx) {
			OES_texture_float_linear_obj *__this = (OES_texture_float_linear_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OES_texture_float_linear_obj), false, "lime.graphics.opengl.ext.OES_texture_float_linear"));
			*(void **)__this = OES_texture_float_linear_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4b57b99d34ba052b_10_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_texture_float_linear_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OES_texture_float_linear","\xce","\x52","\x3e","\xd7"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_texture_float_linear */ 
