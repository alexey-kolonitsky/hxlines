// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_console_Shader
#include <lime/graphics/console/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_32a2b5d56f659945_20_new,"lime.graphics.console.Shader","new",0x4ec19f58,"lime.graphics.console.Shader.new","lime/graphics/console/Shader.hx",20,0xa09eb717)
namespace lime{
namespace graphics{
namespace console{

void Shader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_32a2b5d56f659945_20_new)
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e6e2abc;
}


Shader_obj::Shader_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Shader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static void Shader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Shader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Object *dummy = new Shader_obj;
	Shader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.console.Shader","\x66","\x53","\x81","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Shader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Shader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace console
