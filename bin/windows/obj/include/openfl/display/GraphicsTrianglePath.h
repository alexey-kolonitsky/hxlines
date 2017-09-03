// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#define INCLUDED_openfl_display_GraphicsTrianglePath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsTrianglePath)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsPath)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsTrianglePath_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GraphicsTrianglePath_obj OBJ_;
		GraphicsTrianglePath_obj();

	public:
		enum { _hx_ClassId = 0x61741c4a };

		void __construct( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsTrianglePath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.GraphicsTrianglePath"); }
		static hx::ObjectPtr< GraphicsTrianglePath_obj > __new( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling);
		static hx::ObjectPtr< GraphicsTrianglePath_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsTrianglePath_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("GraphicsTrianglePath","\x18","\x0a","\x69","\x29"); }

		 ::Dynamic culling;
		 ::openfl::_Vector::IntVector indices;
		 ::openfl::_Vector::FloatVector uvtData;
		 ::openfl::_Vector::FloatVector vertices;
		 ::openfl::display::GraphicsDataType _hx___graphicsDataType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsTrianglePath */ 
