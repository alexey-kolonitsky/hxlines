// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_DynamicTextSymbol
#include <openfl/_internal/symbols/DynamicTextSymbol.h>
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
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea7b408073760da6_43_new,"openfl._internal.symbols.DynamicTextSymbol","new",0x78d87e53,"openfl._internal.symbols.DynamicTextSymbol.new","openfl/_internal/symbols/DynamicTextSymbol.hx",43,0xa6a1bd40)
HX_LOCAL_STACK_FRAME(_hx_pos_ea7b408073760da6_48___createObject,"openfl._internal.symbols.DynamicTextSymbol","__createObject",0x2c1ac2e8,"openfl._internal.symbols.DynamicTextSymbol.__createObject","openfl/_internal/symbols/DynamicTextSymbol.hx",48,0xa6a1bd40)
namespace openfl{
namespace _internal{
namespace symbols{

void DynamicTextSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea7b408073760da6_43_new)
HXLINE(  43)		super::__construct();
            	}

Dynamic DynamicTextSymbol_obj::__CreateEmpty() { return new DynamicTextSymbol_obj; }

void *DynamicTextSymbol_obj::_hx_vtable = 0;

Dynamic DynamicTextSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DynamicTextSymbol_obj > _hx_result = new DynamicTextSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DynamicTextSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00795451) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00795451;
	} else {
		return inClassId==(int)0x5bdcc22b;
	}
}

 ::openfl::display::DisplayObject DynamicTextSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_ea7b408073760da6_48___createObject)
HXLINE(  50)		 ::openfl::text::TextField textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  51)		textField->_hx___fromSymbol(swf,hx::ObjectPtr<OBJ_>(this));
HXLINE(  52)		return textField;
            	}



hx::ObjectPtr< DynamicTextSymbol_obj > DynamicTextSymbol_obj::__new() {
	hx::ObjectPtr< DynamicTextSymbol_obj > __this = new DynamicTextSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DynamicTextSymbol_obj > DynamicTextSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	DynamicTextSymbol_obj *__this = (DynamicTextSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DynamicTextSymbol_obj), true, "openfl._internal.symbols.DynamicTextSymbol"));
	*(void **)__this = DynamicTextSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DynamicTextSymbol_obj::DynamicTextSymbol_obj()
{
}

void DynamicTextSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicTextSymbol);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(fontHeight,"fontHeight");
	HX_MARK_MEMBER_NAME(fontID,"fontID");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(html,"html");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(leftMargin,"leftMargin");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(password,"password");
	HX_MARK_MEMBER_NAME(rightMargin,"rightMargin");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DynamicTextSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(fontHeight,"fontHeight");
	HX_VISIT_MEMBER_NAME(fontID,"fontID");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(html,"html");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(leftMargin,"leftMargin");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(password,"password");
	HX_VISIT_MEMBER_NAME(rightMargin,"rightMargin");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DynamicTextSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"html") ) { return hx::Val( html); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return hx::Val( align); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return hx::Val( border); }
		if (HX_FIELD_EQ(inName,"fontID") ) { return hx::Val( fontID); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		if (HX_FIELD_EQ(inName,"indent") ) { return hx::Val( indent); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { return hx::Val( leading); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return hx::Val( fontName); }
		if (HX_FIELD_EQ(inName,"password") ) { return hx::Val( password); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return hx::Val( wordWrap); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return hx::Val( multiline); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fontHeight") ) { return hx::Val( fontHeight); }
		if (HX_FIELD_EQ(inName,"leftMargin") ) { return hx::Val( leftMargin); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return hx::Val( selectable); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightMargin") ) { return hx::Val( rightMargin); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DynamicTextSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"html") ) { html=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontID") ) { fontID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"password") ) { password=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fontHeight") ) { fontHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftMargin") ) { leftMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightMargin") ) { rightMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicTextSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("fontHeight","\x16","\x9f","\x9f","\xb6"));
	outFields->push(HX_HCSTRING("fontID","\x6a","\xef","\xee","\xfa"));
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("html","\x6b","\x95","\x16","\x45"));
	outFields->push(HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("password","\x1b","\x23","\xd0","\x48"));
	outFields->push(HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DynamicTextSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DynamicTextSymbol_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DynamicTextSymbol_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(DynamicTextSymbol_obj,fontHeight),HX_HCSTRING("fontHeight","\x16","\x9f","\x9f","\xb6")},
	{hx::fsInt,(int)offsetof(DynamicTextSymbol_obj,fontID),HX_HCSTRING("fontID","\x6a","\xef","\xee","\xfa")},
	{hx::fsString,(int)offsetof(DynamicTextSymbol_obj,fontName),HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb")},
	{hx::fsFloat,(int)offsetof(DynamicTextSymbol_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,html),HX_HCSTRING("html","\x6b","\x95","\x16","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DynamicTextSymbol_obj,indent),HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DynamicTextSymbol_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DynamicTextSymbol_obj,leftMargin),HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,password),HX_HCSTRING("password","\x1b","\x23","\xd0","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DynamicTextSymbol_obj,rightMargin),HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsString,(int)offsetof(DynamicTextSymbol_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsFloat,(int)offsetof(DynamicTextSymbol_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(DynamicTextSymbol_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsFloat,(int)offsetof(DynamicTextSymbol_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(DynamicTextSymbol_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DynamicTextSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String DynamicTextSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("fontHeight","\x16","\x9f","\x9f","\xb6"),
	HX_HCSTRING("fontID","\x6a","\xef","\xee","\xfa"),
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("html","\x6b","\x95","\x16","\x45"),
	HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("password","\x1b","\x23","\xd0","\x48"),
	HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void DynamicTextSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DynamicTextSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DynamicTextSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DynamicTextSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class DynamicTextSymbol_obj::__mClass;

void DynamicTextSymbol_obj::__register()
{
	hx::Object *dummy = new DynamicTextSymbol_obj;
	DynamicTextSymbol_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.DynamicTextSymbol","\xe1","\x58","\xe8","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DynamicTextSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DynamicTextSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DynamicTextSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DynamicTextSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DynamicTextSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DynamicTextSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
