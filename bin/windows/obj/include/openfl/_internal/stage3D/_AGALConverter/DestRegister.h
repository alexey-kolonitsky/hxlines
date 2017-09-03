// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#define INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,DestRegister)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES DestRegister_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DestRegister_obj OBJ_;
		DestRegister_obj();

	public:
		enum { _hx_ClassId = 0x4cd811f8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.DestRegister")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.stage3D._AGALConverter.DestRegister"); }
		static hx::ObjectPtr< DestRegister_obj > __new();
		static hx::ObjectPtr< DestRegister_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DestRegister_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DestRegister","\x05","\x3f","\xc2","\xef"); }

		static  ::openfl::_internal::stage3D::_AGALConverter::DestRegister parse(int v, ::openfl::_internal::stage3D::_AGALConverter::ProgramType programType);
		static ::Dynamic parse_dyn();

		int mask;
		int n;
		 ::openfl::_internal::stage3D::_AGALConverter::ProgramType programType;
		int type;
		::String getWriteMask();
		::Dynamic getWriteMask_dyn();

		::String toGLSL(hx::Null< bool >  useMask);
		::Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister */ 
