// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer
#include <lime/graphics/opengl/ext/EXT_discard_framebuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c4caec69cb80b91_6_new,"lime.graphics.opengl.ext.EXT_discard_framebuffer","new",0xc7445c9e,"lime.graphics.opengl.ext.EXT_discard_framebuffer.new","lime/graphics/opengl/ext/EXT_discard_framebuffer.hx",6,0xc3cfcbb4)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_discard_framebuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6c4caec69cb80b91_6_new)
HXLINE(  11)		this->STENCIL_EXT = (int)6146;
HXLINE(  10)		this->DEPTH_EXT = (int)6145;
HXLINE(   9)		this->COLOR_EXT = (int)6144;
            	}

Dynamic EXT_discard_framebuffer_obj::__CreateEmpty() { return new EXT_discard_framebuffer_obj; }

void *EXT_discard_framebuffer_obj::_hx_vtable = 0;

Dynamic EXT_discard_framebuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EXT_discard_framebuffer_obj > _hx_result = new EXT_discard_framebuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_discard_framebuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x22e1ea64;
}


EXT_discard_framebuffer_obj::EXT_discard_framebuffer_obj()
{
}

hx::Val EXT_discard_framebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"COLOR_EXT") ) { return hx::Val( COLOR_EXT); }
		if (HX_FIELD_EQ(inName,"DEPTH_EXT") ) { return hx::Val( DEPTH_EXT); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STENCIL_EXT") ) { return hx::Val( STENCIL_EXT); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EXT_discard_framebuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"COLOR_EXT") ) { COLOR_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_EXT") ) { DEPTH_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STENCIL_EXT") ) { STENCIL_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_discard_framebuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COLOR_EXT","\x45","\xf4","\x2b","\x40"));
	outFields->push(HX_HCSTRING("DEPTH_EXT","\xe5","\xc3","\x41","\xbb"));
	outFields->push(HX_HCSTRING("STENCIL_EXT","\x5e","\x9d","\x9b","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EXT_discard_framebuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_discard_framebuffer_obj,COLOR_EXT),HX_HCSTRING("COLOR_EXT","\x45","\xf4","\x2b","\x40")},
	{hx::fsInt,(int)offsetof(EXT_discard_framebuffer_obj,DEPTH_EXT),HX_HCSTRING("DEPTH_EXT","\xe5","\xc3","\x41","\xbb")},
	{hx::fsInt,(int)offsetof(EXT_discard_framebuffer_obj,STENCIL_EXT),HX_HCSTRING("STENCIL_EXT","\x5e","\x9d","\x9b","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EXT_discard_framebuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_discard_framebuffer_obj_sMemberFields[] = {
	HX_HCSTRING("COLOR_EXT","\x45","\xf4","\x2b","\x40"),
	HX_HCSTRING("DEPTH_EXT","\xe5","\xc3","\x41","\xbb"),
	HX_HCSTRING("STENCIL_EXT","\x5e","\x9d","\x9b","\x3c"),
	::String(null()) };

static void EXT_discard_framebuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_discard_framebuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EXT_discard_framebuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_discard_framebuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_discard_framebuffer_obj::__mClass;

void EXT_discard_framebuffer_obj::__register()
{
	hx::Object *dummy = new EXT_discard_framebuffer_obj;
	EXT_discard_framebuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_discard_framebuffer","\xac","\x75","\xbe","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EXT_discard_framebuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EXT_discard_framebuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_discard_framebuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EXT_discard_framebuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_discard_framebuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_discard_framebuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
