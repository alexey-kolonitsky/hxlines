// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
namespace openfl{
namespace display{

::openfl::display::GraphicsDataType GraphicsDataType_obj::BITMAP;

::openfl::display::GraphicsDataType GraphicsDataType_obj::END;

::openfl::display::GraphicsDataType GraphicsDataType_obj::GRADIENT;

::openfl::display::GraphicsDataType GraphicsDataType_obj::PATH;

::openfl::display::GraphicsDataType GraphicsDataType_obj::SOLID;

::openfl::display::GraphicsDataType GraphicsDataType_obj::STROKE;

::openfl::display::GraphicsDataType GraphicsDataType_obj::TRIANGLE_PATH;

bool GraphicsDataType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) { outValue = GraphicsDataType_obj::BITMAP; return true; }
	if (inName==HX_("END",bb,9f,34,00)) { outValue = GraphicsDataType_obj::END; return true; }
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) { outValue = GraphicsDataType_obj::GRADIENT; return true; }
	if (inName==HX_("PATH",a5,ad,12,35)) { outValue = GraphicsDataType_obj::PATH; return true; }
	if (inName==HX_("SOLID",0b,ec,b3,fe)) { outValue = GraphicsDataType_obj::SOLID; return true; }
	if (inName==HX_("STROKE",b8,5f,b7,c3)) { outValue = GraphicsDataType_obj::STROKE; return true; }
	if (inName==HX_("TRIANGLE_PATH",bc,e5,7d,7e)) { outValue = GraphicsDataType_obj::TRIANGLE_PATH; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GraphicsDataType_obj)

int GraphicsDataType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) return 4;
	if (inName==HX_("END",bb,9f,34,00)) return 5;
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) return 2;
	if (inName==HX_("PATH",a5,ad,12,35)) return 3;
	if (inName==HX_("SOLID",0b,ec,b3,fe)) return 1;
	if (inName==HX_("STROKE",b8,5f,b7,c3)) return 0;
	if (inName==HX_("TRIANGLE_PATH",bc,e5,7d,7e)) return 6;
	return super::__FindIndex(inName);
}

int GraphicsDataType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) return 0;
	if (inName==HX_("END",bb,9f,34,00)) return 0;
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) return 0;
	if (inName==HX_("PATH",a5,ad,12,35)) return 0;
	if (inName==HX_("SOLID",0b,ec,b3,fe)) return 0;
	if (inName==HX_("STROKE",b8,5f,b7,c3)) return 0;
	if (inName==HX_("TRIANGLE_PATH",bc,e5,7d,7e)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val GraphicsDataType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) return BITMAP;
	if (inName==HX_("END",bb,9f,34,00)) return END;
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) return GRADIENT;
	if (inName==HX_("PATH",a5,ad,12,35)) return PATH;
	if (inName==HX_("SOLID",0b,ec,b3,fe)) return SOLID;
	if (inName==HX_("STROKE",b8,5f,b7,c3)) return STROKE;
	if (inName==HX_("TRIANGLE_PATH",bc,e5,7d,7e)) return TRIANGLE_PATH;
	return super::__Field(inName,inCallProp);
}

static ::String GraphicsDataType_obj_sStaticFields[] = {
	HX_("STROKE",b8,5f,b7,c3),
	HX_("SOLID",0b,ec,b3,fe),
	HX_("GRADIENT",f0,c9,c4,83),
	HX_("PATH",a5,ad,12,35),
	HX_("BITMAP",ef,bb,8e,a3),
	HX_("END",bb,9f,34,00),
	HX_("TRIANGLE_PATH",bc,e5,7d,7e),
	::String(null())
};

static void GraphicsDataType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::BITMAP,"BITMAP");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::END,"END");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::GRADIENT,"GRADIENT");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::PATH,"PATH");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::SOLID,"SOLID");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::STROKE,"STROKE");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::TRIANGLE_PATH,"TRIANGLE_PATH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsDataType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::BITMAP,"BITMAP");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::END,"END");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::GRADIENT,"GRADIENT");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::PATH,"PATH");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::SOLID,"SOLID");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::STROKE,"STROKE");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::TRIANGLE_PATH,"TRIANGLE_PATH");
};
#endif

hx::Class GraphicsDataType_obj::__mClass;

Dynamic __Create_GraphicsDataType_obj() { return new GraphicsDataType_obj; }

void GraphicsDataType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl.display.GraphicsDataType","\x59","\xb2","\x88","\xda"), hx::TCanCast< GraphicsDataType_obj >,GraphicsDataType_obj_sStaticFields,0,
	&__Create_GraphicsDataType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicsDataType_obj, GraphicsDataType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , GraphicsDataType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GraphicsDataType_obj::__GetStatic;
}

void GraphicsDataType_obj::__boot()
{
BITMAP = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("BITMAP","\xef","\xbb","\x8e","\xa3"),4,0);
END = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),5,0);
GRADIENT = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("GRADIENT","\xf0","\xc9","\xc4","\x83"),2,0);
PATH = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("PATH","\xa5","\xad","\x12","\x35"),3,0);
SOLID = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("SOLID","\x0b","\xec","\xb3","\xfe"),1,0);
STROKE = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("STROKE","\xb8","\x5f","\xb7","\xc3"),0,0);
TRIANGLE_PATH = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("TRIANGLE_PATH","\xbc","\xe5","\x7d","\x7e"),6,0);
}


} // end namespace openfl
} // end namespace display
