// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b69a1b3bd673fa32_15_new,"openfl.media.SoundTransform","new",0x75fea817,"openfl.media.SoundTransform.new","openfl/media/SoundTransform.hx",15,0xcbc8f637)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a1b3bd673fa32_29_clone,"openfl.media.SoundTransform","clone",0xa03c86d4,"openfl.media.SoundTransform.clone","openfl/media/SoundTransform.hx",29,0xcbc8f637)
namespace openfl{
namespace media{

void SoundTransform_obj::__construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning){
Float vol = __o_vol.Default(1);
Float panning = __o_panning.Default(0);
            	HX_STACKFRAME(&_hx_pos_b69a1b3bd673fa32_15_new)
HXLINE(  17)		this->volume = vol;
HXLINE(  18)		this->pan = panning;
HXLINE(  19)		this->leftToLeft = (int)0;
HXLINE(  20)		this->leftToRight = (int)0;
HXLINE(  21)		this->rightToLeft = (int)0;
HXLINE(  22)		this->rightToRight = (int)0;
            	}

Dynamic SoundTransform_obj::__CreateEmpty() { return new SoundTransform_obj; }

void *SoundTransform_obj::_hx_vtable = 0;

Dynamic SoundTransform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SoundTransform_obj > _hx_result = new SoundTransform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SoundTransform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00b0ff2d;
}

 ::openfl::media::SoundTransform SoundTransform_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b69a1b3bd673fa32_29_clone)
HXLINE(  29)		return  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,this->volume,this->pan);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundTransform_obj,clone,return )


SoundTransform_obj::SoundTransform_obj()
{
}

hx::Val SoundTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return hx::Val( pan); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return hx::Val( volume); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftToLeft") ) { return hx::Val( leftToLeft); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { return hx::Val( leftToRight); }
		if (HX_FIELD_EQ(inName,"rightToLeft") ) { return hx::Val( rightToLeft); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightToRight") ) { return hx::Val( rightToRight); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SoundTransform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftToLeft") ) { leftToLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { leftToRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightToLeft") ) { rightToLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightToRight") ) { rightToRight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftToLeft","\x89","\x2e","\x7a","\xac"));
	outFields->push(HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6"));
	outFields->push(HX_HCSTRING("rightToRight","\xe5","\xe7","\x96","\xa0"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SoundTransform_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,leftToLeft),HX_HCSTRING("leftToLeft","\x89","\x2e","\x7a","\xac")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,leftToRight),HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,pan),HX_HCSTRING("pan","\x5d","\x51","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,rightToLeft),HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,rightToRight),HX_HCSTRING("rightToRight","\xe5","\xe7","\x96","\xa0")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SoundTransform_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundTransform_obj_sMemberFields[] = {
	HX_HCSTRING("leftToLeft","\x89","\x2e","\x7a","\xac"),
	HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6"),
	HX_HCSTRING("rightToRight","\xe5","\xe7","\x96","\xa0"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void SoundTransform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SoundTransform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundTransform_obj::__mClass;

void SoundTransform_obj::__register()
{
	hx::Object *dummy = new SoundTransform_obj;
	SoundTransform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundTransform","\xa5","\x50","\x3d","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SoundTransform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SoundTransform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundTransform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SoundTransform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundTransform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundTransform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
