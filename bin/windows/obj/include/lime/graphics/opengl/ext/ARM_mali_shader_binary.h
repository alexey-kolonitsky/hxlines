// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_shader_binary
#define INCLUDED_lime_graphics_opengl_ext_ARM_mali_shader_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e18d77e874350d8f_9_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ARM_mali_shader_binary)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ARM_mali_shader_binary_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ARM_mali_shader_binary_obj OBJ_;
		ARM_mali_shader_binary_obj();

	public:
		enum { _hx_ClassId = 0x4981f182 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ARM_mali_shader_binary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ARM_mali_shader_binary"); }

		hx::ObjectPtr< ARM_mali_shader_binary_obj > __new() {
			hx::ObjectPtr< ARM_mali_shader_binary_obj > __this = new ARM_mali_shader_binary_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ARM_mali_shader_binary_obj > __alloc(hx::Ctx *_hx_ctx) {
			ARM_mali_shader_binary_obj *__this = (ARM_mali_shader_binary_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ARM_mali_shader_binary_obj), false, "lime.graphics.opengl.ext.ARM_mali_shader_binary"));
			*(void **)__this = ARM_mali_shader_binary_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e18d77e874350d8f_9_new)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::ARM_mali_shader_binary)(__this) )->MALI_SHADER_BINARY_ARM = (int)36704;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ARM_mali_shader_binary_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ARM_mali_shader_binary","\x50","\x43","\x81","\xcb"); }

		int MALI_SHADER_BINARY_ARM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ARM_mali_shader_binary */ 
