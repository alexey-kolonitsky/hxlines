// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DStencilAction_Context3DStencilAction_Impl_
#include <openfl/display3D/_Context3DStencilAction/Context3DStencilAction_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_18_fromString,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","fromString",0x85a5c581,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.fromString","openfl/display3D/Context3DStencilAction.hx",18,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_36_toString,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","toString",0x776f12d2,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.toString","openfl/display3D/Context3DStencilAction.hx",36,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_7_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",7,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_8_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",8,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_9_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",9,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_10_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",10,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_11_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",11,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_12_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",12,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_13_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",13,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_14_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",14,0x92be5171)
namespace openfl{
namespace display3D{
namespace _Context3DStencilAction{

void Context3DStencilAction_Impl__obj::__construct() { }

Dynamic Context3DStencilAction_Impl__obj::__CreateEmpty() { return new Context3DStencilAction_Impl__obj; }

void *Context3DStencilAction_Impl__obj::_hx_vtable = 0;

Dynamic Context3DStencilAction_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DStencilAction_Impl__obj > _hx_result = new Context3DStencilAction_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DStencilAction_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23bfe1a0;
}

 ::Dynamic Context3DStencilAction_Impl__obj::DECREMENT_SATURATE;

 ::Dynamic Context3DStencilAction_Impl__obj::DECREMENT_WRAP;

 ::Dynamic Context3DStencilAction_Impl__obj::INCREMENT_SATURATE;

 ::Dynamic Context3DStencilAction_Impl__obj::INCREMENT_WRAP;

 ::Dynamic Context3DStencilAction_Impl__obj::INVERT;

 ::Dynamic Context3DStencilAction_Impl__obj::KEEP;

 ::Dynamic Context3DStencilAction_Impl__obj::SET;

 ::Dynamic Context3DStencilAction_Impl__obj::ZERO;

 ::Dynamic Context3DStencilAction_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_18_fromString)
HXLINE(  18)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("decrementSaturate",22,cd,3b,f4)) ){
HXLINE(  18)			return (int)0;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("decrementWrap",7d,61,2a,a2)) ){
HXLINE(  18)			return (int)1;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("incrementSaturate",3e,59,b0,83)) ){
HXLINE(  18)			return (int)2;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("incrementWrap",99,af,a7,4e)) ){
HXLINE(  18)			return (int)3;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE(  18)			return (int)4;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("keep",85,d0,06,47)) ){
HXLINE(  18)			return (int)5;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("set",a2,9b,57,00)) ){
HXLINE(  18)			return (int)6;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("zero",28,0f,f1,50)) ){
HXLINE(  18)			return (int)7;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  18)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  18)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DStencilAction_Impl__obj,fromString,return )

::String Context3DStencilAction_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_36_toString)
HXLINE(  36)		switch((int)(value)){
            			case (int)0: {
HXLINE(  36)				return HX_("decrementSaturate",22,cd,3b,f4);
            			}
            			break;
            			case (int)1: {
HXLINE(  36)				return HX_("decrementWrap",7d,61,2a,a2);
            			}
            			break;
            			case (int)2: {
HXLINE(  36)				return HX_("incrementSaturate",3e,59,b0,83);
            			}
            			break;
            			case (int)3: {
HXLINE(  36)				return HX_("incrementWrap",99,af,a7,4e);
            			}
            			break;
            			case (int)4: {
HXLINE(  36)				return HX_("invert",16,e7,d8,9f);
            			}
            			break;
            			case (int)5: {
HXLINE(  36)				return HX_("keep",85,d0,06,47);
            			}
            			break;
            			case (int)6: {
HXLINE(  36)				return HX_("set",a2,9b,57,00);
            			}
            			break;
            			case (int)7: {
HXLINE(  36)				return HX_("zero",28,0f,f1,50);
            			}
            			break;
            			default:{
HXLINE(  36)				return null();
            			}
            		}
HXDLIN(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DStencilAction_Impl__obj,toString,return )


Context3DStencilAction_Impl__obj::Context3DStencilAction_Impl__obj()
{
}

bool Context3DStencilAction_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DStencilAction_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DStencilAction_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,HX_HCSTRING("DECREMENT_SATURATE","\xfb","\x9a","\x33","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::DECREMENT_WRAP,HX_HCSTRING("DECREMENT_WRAP","\xd6","\x46","\xe1","\xde")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,HX_HCSTRING("INCREMENT_SATURATE","\x5f","\xa7","\xb9","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::INCREMENT_WRAP,HX_HCSTRING("INCREMENT_WRAP","\x3a","\x51","\x08","\x20")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::KEEP,HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::SET,HX_HCSTRING("SET","\x82","\x37","\x3f","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DStencilAction_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::SET,"SET");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::ZERO,"ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DStencilAction_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::SET,"SET");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::ZERO,"ZERO");
};

#endif

hx::Class Context3DStencilAction_Impl__obj::__mClass;

static ::String Context3DStencilAction_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("DECREMENT_SATURATE","\xfb","\x9a","\x33","\xb0"),
	HX_HCSTRING("DECREMENT_WRAP","\xd6","\x46","\xe1","\xde"),
	HX_HCSTRING("INCREMENT_SATURATE","\x5f","\xa7","\xb9","\xa6"),
	HX_HCSTRING("INCREMENT_WRAP","\x3a","\x51","\x08","\x20"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("SET","\x82","\x37","\x3f","\x00"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DStencilAction_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DStencilAction_Impl__obj;
	Context3DStencilAction_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","\x08","\xfb","\xbc","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DStencilAction_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DStencilAction_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DStencilAction_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DStencilAction_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DStencilAction_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DStencilAction_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DStencilAction_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DStencilAction_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_7_boot)
HXLINE(   7)		DECREMENT_SATURATE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_8_boot)
HXLINE(   8)		DECREMENT_WRAP = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_9_boot)
HXLINE(   9)		INCREMENT_SATURATE = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_10_boot)
HXLINE(  10)		INCREMENT_WRAP = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_11_boot)
HXLINE(  11)		INVERT = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_12_boot)
HXLINE(  12)		KEEP = (int)5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_13_boot)
HXLINE(  13)		SET = (int)6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_14_boot)
HXLINE(  14)		ZERO = (int)7;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DStencilAction
