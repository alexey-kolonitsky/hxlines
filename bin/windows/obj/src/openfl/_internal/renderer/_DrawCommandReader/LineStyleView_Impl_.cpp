// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineStyleView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_386__new,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","_new",0xa17a2c15,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",386,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_387_get_thickness,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_thickness",0xb0b93817,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_thickness","openfl/_internal/renderer/DrawCommandReader.hx",387,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_388_get_color,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_color",0x93f7ea86,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_color","openfl/_internal/renderer/DrawCommandReader.hx",388,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_389_get_alpha,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_alpha",0x6b322081,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_alpha","openfl/_internal/renderer/DrawCommandReader.hx",389,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_390_get_pixelHinting,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_pixelHinting",0x0696dd12,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_pixelHinting","openfl/_internal/renderer/DrawCommandReader.hx",390,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_391_get_scaleMode,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_scaleMode",0x822621b0,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_scaleMode","openfl/_internal/renderer/DrawCommandReader.hx",391,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_392_get_caps,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_caps",0x6233585e,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_caps","openfl/_internal/renderer/DrawCommandReader.hx",392,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_393_get_joints,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_joints",0xaf786d66,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_joints","openfl/_internal/renderer/DrawCommandReader.hx",393,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_50383dc7e8b78720_394_get_miterLimit,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_miterLimit",0x8615e4f3,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_miterLimit","openfl/_internal/renderer/DrawCommandReader.hx",394,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void LineStyleView_Impl__obj::__construct() { }

Dynamic LineStyleView_Impl__obj::__CreateEmpty() { return new LineStyleView_Impl__obj; }

void *LineStyleView_Impl__obj::_hx_vtable = 0;

Dynamic LineStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineStyleView_Impl__obj > _hx_result = new LineStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineStyleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25723228;
}

 ::openfl::_internal::renderer::DrawCommandReader LineStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_386__new)
HXLINE( 386)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 386)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,_new,return )

 ::Dynamic LineStyleView_Impl__obj::get_thickness( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_387_get_thickness)
HXLINE( 387)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_thickness,return )

int LineStyleView_Impl__obj::get_color( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_388_get_color)
HXLINE( 388)		return this1->buffer->i->__get(this1->iPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_color,return )

Float LineStyleView_Impl__obj::get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_389_get_alpha)
HXLINE( 389)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_alpha,return )

bool LineStyleView_Impl__obj::get_pixelHinting( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_390_get_pixelHinting)
HXLINE( 390)		return this1->buffer->b->__get(this1->bPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_pixelHinting,return )

 ::Dynamic LineStyleView_Impl__obj::get_scaleMode( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_391_get_scaleMode)
HXLINE( 391)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 391)		return this2->__get((this1->oPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_scaleMode,return )

 ::Dynamic LineStyleView_Impl__obj::get_caps( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_392_get_caps)
HXLINE( 392)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 392)		return this2->__get((this1->oPos + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_caps,return )

 ::Dynamic LineStyleView_Impl__obj::get_joints( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_393_get_joints)
HXLINE( 393)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 393)		return this2->__get((this1->oPos + (int)3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_joints,return )

Float LineStyleView_Impl__obj::get_miterLimit( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_50383dc7e8b78720_394_get_miterLimit)
HXLINE( 394)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 394)		return this2->__get((this1->fPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_miterLimit,return )


LineStyleView_Impl__obj::LineStyleView_Impl__obj()
{
}

bool LineStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_caps") ) { outValue = get_caps_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_joints") ) { outValue = get_joints_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { outValue = get_thickness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { outValue = get_scaleMode_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { outValue = get_miterLimit_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_pixelHinting") ) { outValue = get_pixelHinting_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LineStyleView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void LineStyleView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineStyleView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineStyleView_Impl__obj::__mClass;

static ::String LineStyleView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_thickness","\x4b","\xc5","\xca","\x1b"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("get_pixelHinting","\x5e","\x88","\x9a","\x71"),
	HX_HCSTRING("get_scaleMode","\xe4","\xae","\x37","\xed"),
	HX_HCSTRING("get_caps","\xaa","\xd7","\x74","\xc1"),
	HX_HCSTRING("get_joints","\xb2","\x57","\x91","\x81"),
	HX_HCSTRING("get_miterLimit","\x3f","\xe5","\x5f","\xca"),
	::String(null())
};

void LineStyleView_Impl__obj::__register()
{
	hx::Object *dummy = new LineStyleView_Impl__obj;
	LineStyleView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","\x3a","\xc6","\x38","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineStyleView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineStyleView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineStyleView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineStyleView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
