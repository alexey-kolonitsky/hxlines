// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_20__new,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","_new",0x3ba81ab0,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_._new","lime/graphics/cairo/CairoFontOptions.hx",20,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_41_get_antialias,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_antialias",0xacf70356,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_antialias","lime/graphics/cairo/CairoFontOptions.hx",41,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_49_set_antialias,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_antialias",0xf1fce562,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_antialias","lime/graphics/cairo/CairoFontOptions.hx",49,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_63_get_hintMetrics,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_hintMetrics",0xb7d30224,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",63,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_71_set_hintMetrics,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintMetrics",0xb39e7f30,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",71,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_86_get_hintStyle,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_hintStyle",0xb5ba9ad2,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",86,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_94_set_hintStyle,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintStyle",0xfac07cde,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",94,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_108_get_subpixelOrder,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_subpixelOrder",0x298e5e50,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",108,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_116_set_subpixelOrder,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_subpixelOrder",0x4cfc365c,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",116,0x355ba586)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontOptions{

void CairoFontOptions_Impl__obj::__construct() { }

Dynamic CairoFontOptions_Impl__obj::__CreateEmpty() { return new CairoFontOptions_Impl__obj; }

void *CairoFontOptions_Impl__obj::_hx_vtable = 0;

Dynamic CairoFontOptions_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoFontOptions_Impl__obj > _hx_result = new CairoFontOptions_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoFontOptions_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c8265e5;
}

 ::Dynamic CairoFontOptions_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_20__new)
HXLINE(  20)		 ::Dynamic this1 = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_create()) );
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_Impl__obj,_new,return )

int CairoFontOptions_Impl__obj::get_antialias( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_41_get_antialias)
HXLINE(  41)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias(hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_antialias,return )

int CairoFontOptions_Impl__obj::set_antialias( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_49_set_antialias)
HXLINE(  52)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias(hx::DynamicPtr(this1),value);
HXLINE(  55)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_antialias,return )

int CairoFontOptions_Impl__obj::get_hintMetrics( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_63_get_hintMetrics)
HXLINE(  63)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics(hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_hintMetrics,return )

int CairoFontOptions_Impl__obj::set_hintMetrics( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_71_set_hintMetrics)
HXLINE(  74)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics(hx::DynamicPtr(this1),value);
HXLINE(  77)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintMetrics,return )

int CairoFontOptions_Impl__obj::get_hintStyle( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_86_get_hintStyle)
HXLINE(  86)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style(hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_hintStyle,return )

int CairoFontOptions_Impl__obj::set_hintStyle( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_94_set_hintStyle)
HXLINE(  97)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style(hx::DynamicPtr(this1),value);
HXLINE( 100)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintStyle,return )

int CairoFontOptions_Impl__obj::get_subpixelOrder( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_108_get_subpixelOrder)
HXLINE( 108)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order(hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_subpixelOrder,return )

int CairoFontOptions_Impl__obj::set_subpixelOrder( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_116_set_subpixelOrder)
HXLINE( 119)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order(hx::DynamicPtr(this1),value);
HXLINE( 122)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_subpixelOrder,return )


CairoFontOptions_Impl__obj::CairoFontOptions_Impl__obj()
{
}

bool CairoFontOptions_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_antialias") ) { outValue = get_antialias_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { outValue = set_antialias_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_hintStyle") ) { outValue = get_hintStyle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_hintStyle") ) { outValue = set_hintStyle_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hintMetrics") ) { outValue = get_hintMetrics_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_hintMetrics") ) { outValue = set_hintMetrics_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_subpixelOrder") ) { outValue = get_subpixelOrder_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_subpixelOrder") ) { outValue = set_subpixelOrder_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoFontOptions_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoFontOptions_Impl__obj_sStaticStorageInfo = 0;
#endif

static void CairoFontOptions_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoFontOptions_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoFontOptions_Impl__obj::__mClass;

static ::String CairoFontOptions_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_hintMetrics","\x13","\x13","\x85","\x82"),
	HX_HCSTRING("set_hintMetrics","\x1f","\x90","\x50","\x7e"),
	HX_HCSTRING("get_hintStyle","\x01","\x42","\x11","\x40"),
	HX_HCSTRING("set_hintStyle","\x0d","\x24","\x17","\x85"),
	HX_HCSTRING("get_subpixelOrder","\xff","\xc8","\x99","\x91"),
	HX_HCSTRING("set_subpixelOrder","\x0b","\xa1","\x07","\xb5"),
	::String(null())
};

void CairoFontOptions_Impl__obj::__register()
{
	hx::Object *dummy = new CairoFontOptions_Impl__obj;
	CairoFontOptions_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","\x7f","\x5d","\x67","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontOptions_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoFontOptions_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoFontOptions_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFontOptions_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoFontOptions_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoFontOptions_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoFontOptions_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontOptions
