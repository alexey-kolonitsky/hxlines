// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif

namespace haxe{
namespace crypto{

void BaseCode_obj::__construct() { }

Dynamic BaseCode_obj::__CreateEmpty() { return new BaseCode_obj; }

void *BaseCode_obj::_hx_vtable = 0;

Dynamic BaseCode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BaseCode_obj > _hx_result = new BaseCode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseCode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x234bc1a5;
}


BaseCode_obj::BaseCode_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BaseCode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BaseCode_obj_sStaticStorageInfo = 0;
#endif

static void BaseCode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BaseCode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseCode_obj::__mClass;

void BaseCode_obj::__register()
{
	hx::Object *dummy = new BaseCode_obj;
	BaseCode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.BaseCode","\x83","\xc2","\xf9","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BaseCode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BaseCode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BaseCode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseCode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseCode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
