// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73476240e0218aae_20_new,"openfl._internal.symbols.SWFSymbol","new",0x42b29449,"openfl._internal.symbols.SWFSymbol.new","openfl/_internal/symbols/SWFSymbol.hx",20,0xf7371d0a)
HX_LOCAL_STACK_FRAME(_hx_pos_73476240e0218aae_29___createObject,"openfl._internal.symbols.SWFSymbol","__createObject",0x3e7224b2,"openfl._internal.symbols.SWFSymbol.__createObject","openfl/_internal/symbols/SWFSymbol.hx",29,0xf7371d0a)
namespace openfl{
namespace _internal{
namespace symbols{

void SWFSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_73476240e0218aae_20_new)
            	}

Dynamic SWFSymbol_obj::__CreateEmpty() { return new SWFSymbol_obj; }

void *SWFSymbol_obj::_hx_vtable = 0;

Dynamic SWFSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SWFSymbol_obj > _hx_result = new SWFSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SWFSymbol_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bdcc22b;
}

 ::openfl::display::DisplayObject SWFSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_STACKFRAME(&_hx_pos_73476240e0218aae_29___createObject)
HXLINE(  29)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFSymbol_obj,_hx___createObject,return )


hx::ObjectPtr< SWFSymbol_obj > SWFSymbol_obj::__new() {
	hx::ObjectPtr< SWFSymbol_obj > __this = new SWFSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SWFSymbol_obj > SWFSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	SWFSymbol_obj *__this = (SWFSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SWFSymbol_obj), true, "openfl._internal.symbols.SWFSymbol"));
	*(void **)__this = SWFSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SWFSymbol_obj::SWFSymbol_obj()
{
}

void SWFSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFSymbol);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void SWFSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(id,"id");
}

hx::Val SWFSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( className); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SWFSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SWFSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SWFSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SWFSymbol_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsInt,(int)offsetof(SWFSymbol_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SWFSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String SWFSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void SWFSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SWFSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class SWFSymbol_obj::__mClass;

void SWFSymbol_obj::__register()
{
	hx::Object *dummy = new SWFSymbol_obj;
	SWFSymbol_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.SWFSymbol","\xd7","\xbb","\x56","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SWFSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SWFSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SWFSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SWFSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SWFSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SWFSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
