// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_27_new,"openfl._internal.stage3D.SamplerState","new",0xfe112c0a,"openfl._internal.stage3D.SamplerState.new","openfl/_internal/stage3D/SamplerState.hx",27,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_44_copyFrom,"openfl._internal.stage3D.SamplerState","copyFrom",0x500527d5,"openfl._internal.stage3D.SamplerState.copyFrom","openfl/_internal/stage3D/SamplerState.hx",44,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_60_equals,"openfl._internal.stage3D.SamplerState","equals",0xcd1eb8d5,"openfl._internal.stage3D.SamplerState.equals","openfl/_internal/stage3D/SamplerState.hx",60,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_86_set_lodBias,"openfl._internal.stage3D.SamplerState","set_lodBias",0xa474bc67,"openfl._internal.stage3D.SamplerState.set_lodBias","openfl/_internal/stage3D/SamplerState.hx",86,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_94_set_magFilter,"openfl._internal.stage3D.SamplerState","set_magFilter",0x080d58b8,"openfl._internal.stage3D.SamplerState.set_magFilter","openfl/_internal/stage3D/SamplerState.hx",94,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_102_set_maxAniso,"openfl._internal.stage3D.SamplerState","set_maxAniso",0xa3c6d7c7,"openfl._internal.stage3D.SamplerState.set_maxAniso","openfl/_internal/stage3D/SamplerState.hx",102,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_110_set_minFilter,"openfl._internal.stage3D.SamplerState","set_minFilter",0xf4b728f7,"openfl._internal.stage3D.SamplerState.set_minFilter","openfl/_internal/stage3D/SamplerState.hx",110,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_118_set_wrapModeS,"openfl._internal.stage3D.SamplerState","set_wrapModeS",0xc608a773,"openfl._internal.stage3D.SamplerState.set_wrapModeS","openfl/_internal/stage3D/SamplerState.hx",118,0xf2d288c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_126_set_wrapModeT,"openfl._internal.stage3D.SamplerState","set_wrapModeT",0xc608a774,"openfl._internal.stage3D.SamplerState.set_wrapModeT","openfl/_internal/stage3D/SamplerState.hx",126,0xf2d288c3)
namespace openfl{
namespace _internal{
namespace stage3D{

void SamplerState_obj::__construct(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated){
Float lodBias = __o_lodBias.Default(((Float)0.0));
Float maxAniso = __o_maxAniso.Default(((Float)0.0));
bool ignoreSampler = __o_ignoreSampler.Default(false);
bool centroid = __o_centroid.Default(false);
bool mipmapGenerated = __o_mipmapGenerated.Default(false);
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_27_new)
HXLINE(  29)		this->set_minFilter(minFilter);
HXLINE(  30)		this->set_magFilter(magFilter);
HXLINE(  31)		this->set_wrapModeS(wrapModeS);
HXLINE(  32)		this->set_wrapModeT(wrapModeT);
HXLINE(  33)		this->set_lodBias(lodBias);
HXLINE(  34)		this->set_maxAniso(maxAniso);
HXLINE(  35)		this->ignoreSampler = ignoreSampler;
HXLINE(  36)		this->centroid = centroid;
HXLINE(  37)		this->mipmapGenerated = mipmapGenerated;
HXLINE(  39)		this->_hx___samplerDirty = true;
            	}

Dynamic SamplerState_obj::__CreateEmpty() { return new SamplerState_obj; }

void *SamplerState_obj::_hx_vtable = 0;

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SamplerState_obj > _hx_result = new SamplerState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool SamplerState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c998e6c;
}

void SamplerState_obj::copyFrom( ::openfl::_internal::stage3D::SamplerState other){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_44_copyFrom)
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if (hx::IsNotNull( other )) {
HXLINE(  46)			_hx_tmp = other->ignoreSampler;
            		}
            		else {
HXLINE(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  46)			return;
            		}
HXLINE(  48)		this->set_minFilter(other->minFilter);
HXLINE(  49)		this->set_magFilter(other->magFilter);
HXLINE(  50)		this->set_wrapModeS(other->wrapModeS);
HXLINE(  51)		this->set_wrapModeT(other->wrapModeT);
HXLINE(  52)		this->set_lodBias(other->lodBias);
HXLINE(  53)		this->set_maxAniso(other->maxAniso);
HXLINE(  54)		this->centroid = other->centroid;
HXLINE(  55)		this->mipmapGenerated = other->mipmapGenerated;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,copyFrom,(void))

bool SamplerState_obj::equals( ::openfl::_internal::stage3D::SamplerState other){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_60_equals)
HXLINE(  62)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),other )) {
HXLINE(  64)			return !(this->_hx___samplerDirty);
            		}
HXLINE(  68)		if (hx::IsNull( other )) {
HXLINE(  70)			return false;
            		}
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		bool _hx_tmp1;
HXDLIN(  74)		bool _hx_tmp2;
HXDLIN(  74)		bool _hx_tmp3;
HXDLIN(  74)		bool _hx_tmp4;
HXDLIN(  74)		if ((this->minFilter == other->minFilter)) {
HXLINE(  74)			_hx_tmp4 = (this->magFilter == other->magFilter);
            		}
            		else {
HXLINE(  74)			_hx_tmp4 = false;
            		}
HXDLIN(  74)		if (_hx_tmp4) {
HXLINE(  74)			_hx_tmp3 = (this->wrapModeS == other->wrapModeS);
            		}
            		else {
HXLINE(  74)			_hx_tmp3 = false;
            		}
HXDLIN(  74)		if (_hx_tmp3) {
HXLINE(  74)			_hx_tmp2 = (this->wrapModeT == other->wrapModeT);
            		}
            		else {
HXLINE(  74)			_hx_tmp2 = false;
            		}
HXDLIN(  74)		if (_hx_tmp2) {
HXLINE(  74)			_hx_tmp1 = (this->lodBias == other->lodBias);
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = false;
            		}
HXDLIN(  74)		if (_hx_tmp1) {
HXLINE(  74)			_hx_tmp = (this->maxAniso == other->maxAniso);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  74)			return (this->mipmapGenerated == other->mipmapGenerated);
            		}
            		else {
HXLINE(  74)			return false;
            		}
HXDLIN(  74)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,equals,return )

Float SamplerState_obj::set_lodBias(Float value){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_86_set_lodBias)
HXLINE(  88)		if ((this->lodBias != value)) {
HXLINE(  88)			this->_hx___samplerDirty = true;
            		}
HXLINE(  89)		return (this->lodBias = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_lodBias,return )

int SamplerState_obj::set_magFilter(int value){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_94_set_magFilter)
HXLINE(  96)		if ((this->magFilter != value)) {
HXLINE(  96)			this->_hx___samplerDirty = true;
            		}
HXLINE(  97)		return (this->magFilter = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_magFilter,return )

Float SamplerState_obj::set_maxAniso(Float value){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_102_set_maxAniso)
HXLINE( 104)		if ((this->maxAniso != value)) {
HXLINE( 104)			this->_hx___samplerDirty = true;
            		}
HXLINE( 105)		return (this->maxAniso = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_maxAniso,return )

int SamplerState_obj::set_minFilter(int value){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_110_set_minFilter)
HXLINE( 112)		if ((this->minFilter != value)) {
HXLINE( 112)			this->_hx___samplerDirty = true;
            		}
HXLINE( 113)		return (this->minFilter = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_minFilter,return )

int SamplerState_obj::set_wrapModeS(int value){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_118_set_wrapModeS)
HXLINE( 120)		if ((this->wrapModeS != value)) {
HXLINE( 120)			this->_hx___samplerDirty = true;
            		}
HXLINE( 121)		return (this->wrapModeS = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_wrapModeS,return )

int SamplerState_obj::set_wrapModeT(int value){
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_126_set_wrapModeT)
HXLINE( 128)		if ((this->wrapModeT != value)) {
HXLINE( 128)			this->_hx___samplerDirty = true;
            		}
HXLINE( 129)		return (this->wrapModeT = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_wrapModeT,return )


SamplerState_obj::SamplerState_obj()
{
}

hx::Val SamplerState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return hx::Val( lodBias); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { return hx::Val( maxAniso); }
		if (HX_FIELD_EQ(inName,"centroid") ) { return hx::Val( centroid); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { return hx::Val( magFilter); }
		if (HX_FIELD_EQ(inName,"minFilter") ) { return hx::Val( minFilter); }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { return hx::Val( wrapModeS); }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { return hx::Val( wrapModeT); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_lodBias") ) { return hx::Val( set_lodBias_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_maxAniso") ) { return hx::Val( set_maxAniso_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { return hx::Val( ignoreSampler); }
		if (HX_FIELD_EQ(inName,"set_magFilter") ) { return hx::Val( set_magFilter_dyn()); }
		if (HX_FIELD_EQ(inName,"set_minFilter") ) { return hx::Val( set_minFilter_dyn()); }
		if (HX_FIELD_EQ(inName,"set_wrapModeS") ) { return hx::Val( set_wrapModeS_dyn()); }
		if (HX_FIELD_EQ(inName,"set_wrapModeT") ) { return hx::Val( set_wrapModeT_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { return hx::Val( _hx___samplerDirty); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { return hx::Val( mipmapGenerated); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SamplerState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_lodBias(inValue) );lodBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_maxAniso(inValue) );maxAniso=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centroid") ) { centroid=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_magFilter(inValue) );magFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_minFilter(inValue) );minFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_wrapModeS(inValue) );wrapModeS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_wrapModeT(inValue) );wrapModeT=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { ignoreSampler=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { _hx___samplerDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { mipmapGenerated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"));
	outFields->push(HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"));
	outFields->push(HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"));
	outFields->push(HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"));
	outFields->push(HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"));
	outFields->push(HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"));
	outFields->push(HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97"));
	outFields->push(HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1"));
	outFields->push(HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6"));
	outFields->push(HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SamplerState_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SamplerState_obj,lodBias),HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,magFilter),HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1")},
	{hx::fsFloat,(int)offsetof(SamplerState_obj,maxAniso),HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,minFilter),HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeS),HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeT),HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,centroid),HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,ignoreSampler),HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,mipmapGenerated),HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,_hx___samplerDirty),HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SamplerState_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerState_obj_sMemberFields[] = {
	HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"),
	HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"),
	HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"),
	HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"),
	HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"),
	HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"),
	HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97"),
	HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1"),
	HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6"),
	HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("set_lodBias","\xbd","\xa6","\x14","\x3d"),
	HX_HCSTRING("set_magFilter","\x8e","\x04","\x3d","\xf8"),
	HX_HCSTRING("set_maxAniso","\xb1","\xf8","\x13","\x97"),
	HX_HCSTRING("set_minFilter","\xcd","\xd4","\xe6","\xe4"),
	HX_HCSTRING("set_wrapModeS","\x49","\x53","\x38","\xb6"),
	HX_HCSTRING("set_wrapModeT","\x4a","\x53","\x38","\xb6"),
	::String(null()) };

static void SamplerState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SamplerState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Object *dummy = new SamplerState_obj;
	SamplerState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.SamplerState","\x18","\x1f","\xbc","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SamplerState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SamplerState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SamplerState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
