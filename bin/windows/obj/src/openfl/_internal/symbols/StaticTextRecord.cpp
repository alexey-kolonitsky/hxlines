// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#include <openfl/_internal/symbols/StaticTextRecord.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_94798ee06130056c_150_new,"openfl._internal.symbols.StaticTextRecord","new",0xb28773e1,"openfl._internal.symbols.StaticTextRecord.new","openfl/_internal/symbols/StaticTextSymbol.hx",150,0x451958e5)
namespace openfl{
namespace _internal{
namespace symbols{

void StaticTextRecord_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_94798ee06130056c_150_new)
            	}

Dynamic StaticTextRecord_obj::__CreateEmpty() { return new StaticTextRecord_obj; }

void *StaticTextRecord_obj::_hx_vtable = 0;

Dynamic StaticTextRecord_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticTextRecord_obj > _hx_result = new StaticTextRecord_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticTextRecord_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x26a21b9b;
}


StaticTextRecord_obj::StaticTextRecord_obj()
{
}

void StaticTextRecord_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticTextRecord);
	HX_MARK_MEMBER_NAME(advances,"advances");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(fontHeight,"fontHeight");
	HX_MARK_MEMBER_NAME(fontID,"fontID");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_END_CLASS();
}

void StaticTextRecord_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advances,"advances");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(fontHeight,"fontHeight");
	HX_VISIT_MEMBER_NAME(fontID,"fontID");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
}

hx::Val StaticTextRecord_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fontID") ) { return hx::Val( fontID); }
		if (HX_FIELD_EQ(inName,"glyphs") ) { return hx::Val( glyphs); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { return hx::Val( advances); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fontHeight") ) { return hx::Val( fontHeight); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StaticTextRecord_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fontID") ) { fontID=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { advances=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fontHeight") ) { fontHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticTextRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advances","\xb1","\x69","\x7b","\x3b"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("fontHeight","\x16","\x9f","\x9f","\xb6"));
	outFields->push(HX_HCSTRING("fontID","\x6a","\xef","\xee","\xfa"));
	outFields->push(HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StaticTextRecord_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(StaticTextRecord_obj,advances),HX_HCSTRING("advances","\xb1","\x69","\x7b","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StaticTextRecord_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(StaticTextRecord_obj,fontHeight),HX_HCSTRING("fontHeight","\x16","\x9f","\x9f","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StaticTextRecord_obj,fontID),HX_HCSTRING("fontID","\x6a","\xef","\xee","\xfa")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(StaticTextRecord_obj,glyphs),HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StaticTextRecord_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StaticTextRecord_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StaticTextRecord_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticTextRecord_obj_sMemberFields[] = {
	HX_HCSTRING("advances","\xb1","\x69","\x7b","\x3b"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("fontHeight","\x16","\x9f","\x9f","\xb6"),
	HX_HCSTRING("fontID","\x6a","\xef","\xee","\xfa"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	::String(null()) };

static void StaticTextRecord_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticTextRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticTextRecord_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticTextRecord_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticTextRecord_obj::__mClass;

void StaticTextRecord_obj::__register()
{
	hx::Object *dummy = new StaticTextRecord_obj;
	StaticTextRecord_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.StaticTextRecord","\x6f","\xef","\x2d","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticTextRecord_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StaticTextRecord_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticTextRecord_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticTextRecord_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticTextRecord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticTextRecord_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
