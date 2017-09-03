// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Zlib
#include <lime/utils/compress/Zlib.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b7ae7edfe2bcbf35_27_compress,"lime.utils.compress.Zlib","compress",0x4fedbd0f,"lime.utils.compress.Zlib.compress","lime/utils/compress/Zlib.hx",27,0xe800dd9e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7ae7edfe2bcbf35_63_decompress,"lime.utils.compress.Zlib","decompress",0xe6dcf2d0,"lime.utils.compress.Zlib.decompress","lime/utils/compress/Zlib.hx",63,0xe800dd9e)
namespace lime{
namespace utils{
namespace compress{

void Zlib_obj::__construct() { }

Dynamic Zlib_obj::__CreateEmpty() { return new Zlib_obj; }

void *Zlib_obj::_hx_vtable = 0;

Dynamic Zlib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Zlib_obj > _hx_result = new Zlib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Zlib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0339a2c9;
}

 ::haxe::io::Bytes Zlib_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_b7ae7edfe2bcbf35_27_compress)
HXLINE(  27)		 ::Dynamic bytes1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  27)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_zlib_compress(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,compress,return )

 ::haxe::io::Bytes Zlib_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_b7ae7edfe2bcbf35_63_decompress)
HXLINE(  63)		 ::Dynamic bytes1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  63)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_zlib_decompress(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,decompress,return )


Zlib_obj::Zlib_obj()
{
}

bool Zlib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Zlib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Zlib_obj_sStaticStorageInfo = 0;
#endif

static void Zlib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Zlib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Zlib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Zlib_obj::__mClass,"__mClass");
};

#endif

hx::Class Zlib_obj::__mClass;

static ::String Zlib_obj_sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	::String(null())
};

void Zlib_obj::__register()
{
	hx::Object *dummy = new Zlib_obj;
	Zlib_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.Zlib","\xa1","\x4c","\xde","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Zlib_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Zlib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Zlib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Zlib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Zlib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Zlib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Zlib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace compress
