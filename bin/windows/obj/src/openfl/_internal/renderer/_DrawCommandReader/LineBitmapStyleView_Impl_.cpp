// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineBitmapStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineBitmapStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3928fbcce9df7715_360__new,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","_new",0x6ec636a4,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",360,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_3928fbcce9df7715_361_get_bitmap,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_bitmap",0xeee7753b,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_bitmap","openfl/_internal/renderer/DrawCommandReader.hx",361,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_3928fbcce9df7715_362_get_matrix,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_matrix",0xb9a39b8d,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",362,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_3928fbcce9df7715_363_get_repeat,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_repeat",0x0457fca7,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_repeat","openfl/_internal/renderer/DrawCommandReader.hx",363,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_3928fbcce9df7715_364_get_smooth,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_smooth",0x05466d7a,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_smooth","openfl/_internal/renderer/DrawCommandReader.hx",364,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void LineBitmapStyleView_Impl__obj::__construct() { }

Dynamic LineBitmapStyleView_Impl__obj::__CreateEmpty() { return new LineBitmapStyleView_Impl__obj; }

void *LineBitmapStyleView_Impl__obj::_hx_vtable = 0;

Dynamic LineBitmapStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineBitmapStyleView_Impl__obj > _hx_result = new LineBitmapStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineBitmapStyleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18f6d879;
}

 ::openfl::_internal::renderer::DrawCommandReader LineBitmapStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_3928fbcce9df7715_360__new)
HXLINE( 360)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 360)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,_new,return )

 ::openfl::display::BitmapData LineBitmapStyleView_Impl__obj::get_bitmap( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3928fbcce9df7715_361_get_bitmap)
HXLINE( 361)		return ( ( ::openfl::display::BitmapData)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_bitmap,return )

 ::openfl::geom::Matrix LineBitmapStyleView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3928fbcce9df7715_362_get_matrix)
HXLINE( 362)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 362)		return ( ( ::openfl::geom::Matrix)(this2->__get((this1->oPos + (int)1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_matrix,return )

bool LineBitmapStyleView_Impl__obj::get_repeat( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3928fbcce9df7715_363_get_repeat)
HXLINE( 363)		return this1->buffer->b->__get(this1->bPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_repeat,return )

bool LineBitmapStyleView_Impl__obj::get_smooth( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3928fbcce9df7715_364_get_smooth)
HXLINE( 364)		::Array< bool > this2 = this1->buffer->b;
HXDLIN( 364)		return this2->__get((this1->bPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_smooth,return )


LineBitmapStyleView_Impl__obj::LineBitmapStyleView_Impl__obj()
{
}

bool LineBitmapStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { outValue = get_bitmap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { outValue = get_repeat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { outValue = get_smooth_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LineBitmapStyleView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineBitmapStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void LineBitmapStyleView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineBitmapStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineBitmapStyleView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineBitmapStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineBitmapStyleView_Impl__obj::__mClass;

static ::String LineBitmapStyleView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_bitmap","\xb8","\x7f","\x93","\xe1"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("get_repeat","\x24","\x07","\x04","\xf7"),
	HX_HCSTRING("get_smooth","\xf7","\x77","\xf2","\xf7"),
	::String(null())
};

void LineBitmapStyleView_Impl__obj::__register()
{
	hx::Object *dummy = new LineBitmapStyleView_Impl__obj;
	LineBitmapStyleView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","\x0b","\xc6","\x66","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineBitmapStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineBitmapStyleView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineBitmapStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineBitmapStyleView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineBitmapStyleView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineBitmapStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineBitmapStyleView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
