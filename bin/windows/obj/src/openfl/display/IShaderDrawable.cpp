// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif

namespace openfl{
namespace display{


static ::String IShaderDrawable_obj_sMemberFields[] = {
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	::String(null()) };

static void IShaderDrawable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IShaderDrawable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IShaderDrawable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IShaderDrawable_obj::__mClass,"__mClass");
};

#endif

hx::Class IShaderDrawable_obj::__mClass;

void IShaderDrawable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.IShaderDrawable","\x02","\x41","\xc5","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IShaderDrawable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IShaderDrawable_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xa78ed11a >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IShaderDrawable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
