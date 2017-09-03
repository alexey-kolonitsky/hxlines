// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_unifill_Exception
#include <lime/text/unifill/Exception.h>
#endif
#ifndef INCLUDED_lime_text_unifill_InvalidCodePoint
#include <lime/text/unifill/InvalidCodePoint.h>
#endif
#ifndef INCLUDED_lime_text_unifill_InvalidCodeUnitSequence
#include <lime/text/unifill/InvalidCodeUnitSequence.h>
#endif
#ifndef INCLUDED_lime_text_unifill__Utf8_Utf8Impl
#include <lime/text/unifill/_Utf8/Utf8Impl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a40fde1f1e12772f_171_code_point_width,"lime.text.unifill._Utf8.Utf8Impl","code_point_width",0x227f0e01,"lime.text.unifill._Utf8.Utf8Impl.code_point_width","lime/text/unifill/Utf8.hx",171,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_a40fde1f1e12772f_174_find_prev_code_point,"lime.text.unifill._Utf8.Utf8Impl","find_prev_code_point",0xe8b6de00,"lime.text.unifill._Utf8.Utf8Impl.find_prev_code_point","lime/text/unifill/Utf8.hx",174,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_a40fde1f1e12772f_184_encode_code_point,"lime.text.unifill._Utf8.Utf8Impl","encode_code_point",0xfad7060b,"lime.text.unifill._Utf8.Utf8Impl.encode_code_point","lime/text/unifill/Utf8.hx",184,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_a40fde1f1e12772f_203_decode_code_point,"lime.text.unifill._Utf8.Utf8Impl","decode_code_point",0x7731c1f3,"lime.text.unifill._Utf8.Utf8Impl.decode_code_point","lime/text/unifill/Utf8.hx",203,0x1a6d2f09)
namespace lime{
namespace text{
namespace unifill{
namespace _Utf8{

void Utf8Impl_obj::__construct() { }

Dynamic Utf8Impl_obj::__CreateEmpty() { return new Utf8Impl_obj; }

void *Utf8Impl_obj::_hx_vtable = 0;

Dynamic Utf8Impl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utf8Impl_obj > _hx_result = new Utf8Impl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utf8Impl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d380bb0;
}

int Utf8Impl_obj::code_point_width(int c){
            	HX_STACKFRAME(&_hx_pos_a40fde1f1e12772f_171_code_point_width)
HXLINE( 171)		if ((c < (int)192)) {
HXLINE( 171)			return (int)1;
            		}
            		else {
HXLINE( 171)			if ((c < (int)224)) {
HXLINE( 171)				return (int)2;
            			}
            			else {
HXLINE( 171)				if ((c < (int)240)) {
HXLINE( 171)					return (int)3;
            				}
            				else {
HXLINE( 171)					if ((c < (int)248)) {
HXLINE( 171)						return (int)4;
            					}
            					else {
HXLINE( 171)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN( 171)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8Impl_obj,code_point_width,return )

int Utf8Impl_obj::find_prev_code_point( ::Dynamic accessor,int index){
            	HX_STACKFRAME(&_hx_pos_a40fde1f1e12772f_174_find_prev_code_point)
HXLINE( 175)		int c1 = ( (int)(accessor((index - (int)1))) );
HXLINE( 176)		bool _hx_tmp;
HXDLIN( 176)		if ((c1 >= (int)128)) {
HXLINE( 176)			_hx_tmp = (c1 >= (int)192);
            		}
            		else {
HXLINE( 176)			_hx_tmp = true;
            		}
HXDLIN( 176)		if (_hx_tmp) {
HXLINE( 176)			return (int)1;
            		}
            		else {
HXLINE( 177)			if ((((int)( (int)(accessor((index - (int)2))) ) & (int)(int)224) == (int)192)) {
HXLINE( 176)				return (int)2;
            			}
            			else {
HXLINE( 178)				if ((((int)( (int)(accessor((index - (int)3))) ) & (int)(int)240) == (int)224)) {
HXLINE( 176)					return (int)3;
            				}
            				else {
HXLINE( 179)					if ((((int)( (int)(accessor((index - (int)4))) ) & (int)(int)248) == (int)240)) {
HXLINE( 176)						return (int)4;
            					}
            					else {
HXLINE( 176)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN( 176)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,find_prev_code_point,return )

void Utf8Impl_obj::encode_code_point( ::Dynamic addUnit,int codePoint){
            	HX_GC_STACKFRAME(&_hx_pos_a40fde1f1e12772f_184_encode_code_point)
HXLINE( 184)		if ((codePoint <= (int)127)) {
HXLINE( 185)			addUnit(codePoint);
            		}
            		else {
HXLINE( 186)			if ((codePoint <= (int)2047)) {
HXLINE( 187)				addUnit(((int)(int)192 | (int)((int)codePoint >> (int)(int)6)));
HXLINE( 188)				addUnit(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            			}
            			else {
HXLINE( 189)				if ((codePoint <= (int)65535)) {
HXLINE( 190)					addUnit(((int)(int)224 | (int)((int)codePoint >> (int)(int)12)));
HXLINE( 191)					addUnit(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXLINE( 192)					addUnit(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            				}
            				else {
HXLINE( 193)					if ((codePoint <= (int)1114111)) {
HXLINE( 194)						addUnit(((int)(int)240 | (int)((int)codePoint >> (int)(int)18)));
HXLINE( 195)						addUnit(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)12) & (int)(int)63)));
HXLINE( 196)						addUnit(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXLINE( 197)						addUnit(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            					}
            					else {
HXLINE( 199)						HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,codePoint));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,encode_code_point,(void))

int Utf8Impl_obj::decode_code_point(int len, ::Dynamic accessor,int index){
            	HX_GC_STACKFRAME(&_hx_pos_a40fde1f1e12772f_203_decode_code_point)
HXLINE( 204)		int i = index;
HXLINE( 205)		bool _hx_tmp;
HXDLIN( 205)		if ((i >= (int)0)) {
HXLINE( 205)			_hx_tmp = (len <= i);
            		}
            		else {
HXLINE( 205)			_hx_tmp = true;
            		}
HXDLIN( 205)		if (_hx_tmp) {
HXLINE( 206)			HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 207)		int c1 = ( (int)(accessor(i)) );
HXLINE( 208)		if ((c1 < (int)128)) {
HXLINE( 209)			return c1;
            		}
HXLINE( 211)		if ((c1 < (int)192)) {
HXLINE( 212)			HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 214)		i = (i + (int)1);
HXLINE( 215)		bool _hx_tmp1;
HXDLIN( 215)		if ((i >= (int)0)) {
HXLINE( 215)			_hx_tmp1 = (len <= i);
            		}
            		else {
HXLINE( 215)			_hx_tmp1 = true;
            		}
HXDLIN( 215)		if (_hx_tmp1) {
HXLINE( 216)			HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 217)		int c2 = ( (int)(accessor(i)) );
HXLINE( 218)		if ((c1 < (int)224)) {
HXLINE( 219)			bool _hx_tmp2;
HXDLIN( 219)			if ((((int)c1 & (int)(int)30) != (int)0)) {
HXLINE( 219)				_hx_tmp2 = (((int)c2 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 219)				_hx_tmp2 = false;
            			}
HXDLIN( 219)			if (_hx_tmp2) {
HXLINE( 220)				return ((int)((int)((int)c1 & (int)(int)63) << (int)(int)6) | (int)((int)c2 & (int)(int)127));
            			}
            			else {
HXLINE( 222)				HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            			}
            		}
HXLINE( 224)		i = (i + (int)1);
HXLINE( 225)		bool _hx_tmp3;
HXDLIN( 225)		if ((i >= (int)0)) {
HXLINE( 225)			_hx_tmp3 = (len <= i);
            		}
            		else {
HXLINE( 225)			_hx_tmp3 = true;
            		}
HXDLIN( 225)		if (_hx_tmp3) {
HXLINE( 226)			HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 227)		int c3 = ( (int)(accessor(i)) );
HXLINE( 228)		if ((c1 < (int)240)) {
HXLINE( 229)			bool _hx_tmp4;
HXDLIN( 229)			bool _hx_tmp5;
HXDLIN( 229)			bool _hx_tmp6;
HXDLIN( 229)			bool _hx_tmp7;
HXDLIN( 229)			if ((((int)c1 & (int)(int)15) == (int)0)) {
HXLINE( 229)				_hx_tmp7 = (((int)c2 & (int)(int)32) != (int)0);
            			}
            			else {
HXLINE( 229)				_hx_tmp7 = true;
            			}
HXDLIN( 229)			if (_hx_tmp7) {
HXLINE( 229)				_hx_tmp6 = (((int)c2 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 229)				_hx_tmp6 = false;
            			}
HXDLIN( 229)			if (_hx_tmp6) {
HXLINE( 229)				_hx_tmp5 = (((int)c3 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 229)				_hx_tmp5 = false;
            			}
HXDLIN( 229)			if (_hx_tmp5) {
HXLINE( 230)				bool _hx_tmp8;
HXDLIN( 230)				bool _hx_tmp9;
HXDLIN( 230)				if ((c1 == (int)237)) {
HXLINE( 230)					_hx_tmp9 = ((int)160 <= c2);
            				}
            				else {
HXLINE( 230)					_hx_tmp9 = false;
            				}
HXDLIN( 230)				if (_hx_tmp9) {
HXLINE( 230)					_hx_tmp8 = (c2 <= (int)191);
            				}
            				else {
HXLINE( 230)					_hx_tmp8 = false;
            				}
HXLINE( 229)				_hx_tmp4 = !(_hx_tmp8);
            			}
            			else {
HXLINE( 229)				_hx_tmp4 = false;
            			}
HXDLIN( 229)			if (_hx_tmp4) {
HXLINE( 231)				return ((int)((int)((int)((int)c1 & (int)(int)31) << (int)(int)12) | (int)((int)((int)c2 & (int)(int)127) << (int)(int)6)) | (int)((int)c3 & (int)(int)127));
            			}
            			else {
HXLINE( 233)				HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            			}
            		}
HXLINE( 235)		i = (i + (int)1);
HXLINE( 236)		bool _hx_tmp10;
HXDLIN( 236)		if ((i >= (int)0)) {
HXLINE( 236)			_hx_tmp10 = (len <= i);
            		}
            		else {
HXLINE( 236)			_hx_tmp10 = true;
            		}
HXDLIN( 236)		if (_hx_tmp10) {
HXLINE( 237)			HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            		}
HXLINE( 238)		int c4 = ( (int)(accessor(i)) );
HXLINE( 239)		if ((c1 < (int)248)) {
HXLINE( 240)			bool _hx_tmp11;
HXDLIN( 240)			bool _hx_tmp12;
HXDLIN( 240)			bool _hx_tmp13;
HXDLIN( 240)			bool _hx_tmp14;
HXDLIN( 240)			bool _hx_tmp15;
HXDLIN( 240)			if ((((int)c1 & (int)(int)7) == (int)0)) {
HXLINE( 240)				_hx_tmp15 = (((int)c2 & (int)(int)48) != (int)0);
            			}
            			else {
HXLINE( 240)				_hx_tmp15 = true;
            			}
HXDLIN( 240)			if (_hx_tmp15) {
HXLINE( 240)				_hx_tmp14 = (((int)c2 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 240)				_hx_tmp14 = false;
            			}
HXDLIN( 240)			if (_hx_tmp14) {
HXLINE( 240)				_hx_tmp13 = (((int)c3 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 240)				_hx_tmp13 = false;
            			}
HXDLIN( 240)			if (_hx_tmp13) {
HXLINE( 240)				_hx_tmp12 = (((int)c4 & (int)(int)192) == (int)128);
            			}
            			else {
HXLINE( 240)				_hx_tmp12 = false;
            			}
HXDLIN( 240)			if (_hx_tmp12) {
HXLINE( 241)				bool _hx_tmp16;
HXDLIN( 241)				bool _hx_tmp17;
HXDLIN( 241)				if ((c1 == (int)244)) {
HXLINE( 241)					_hx_tmp17 = (c2 > (int)143);
            				}
            				else {
HXLINE( 241)					_hx_tmp17 = false;
            				}
HXDLIN( 241)				if (!(_hx_tmp17)) {
HXLINE( 241)					_hx_tmp16 = (c1 > (int)244);
            				}
            				else {
HXLINE( 241)					_hx_tmp16 = true;
            				}
HXLINE( 240)				_hx_tmp11 = !(_hx_tmp16);
            			}
            			else {
HXLINE( 240)				_hx_tmp11 = false;
            			}
HXDLIN( 240)			if (_hx_tmp11) {
HXLINE( 242)				return ((int)((int)((int)((int)((int)c1 & (int)(int)15) << (int)(int)18) | (int)((int)((int)c2 & (int)(int)127) << (int)(int)12)) | (int)((int)((int)c3 & (int)(int)127) << (int)(int)6)) | (int)((int)c4 & (int)(int)127));
            			}
            			else {
HXLINE( 244)				HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
            			}
            		}
HXLINE( 246)		HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodeUnitSequence_obj::__alloc( HX_CTX ,index));
HXDLIN( 246)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8Impl_obj,decode_code_point,return )


Utf8Impl_obj::Utf8Impl_obj()
{
}

bool Utf8Impl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"code_point_width") ) { outValue = code_point_width_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"encode_code_point") ) { outValue = encode_code_point_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode_code_point") ) { outValue = decode_code_point_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"find_prev_code_point") ) { outValue = find_prev_code_point_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Utf8Impl_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Utf8Impl_obj_sStaticStorageInfo = 0;
#endif

static void Utf8Impl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utf8Impl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8Impl_obj::__mClass;

static ::String Utf8Impl_obj_sStaticFields[] = {
	HX_HCSTRING("code_point_width","\x45","\xbc","\xb7","\x0f"),
	HX_HCSTRING("find_prev_code_point","\x44","\xfe","\x1d","\xb2"),
	HX_HCSTRING("encode_code_point","\x47","\xd3","\x36","\x9f"),
	HX_HCSTRING("decode_code_point","\x2f","\x8f","\x91","\x1b"),
	::String(null())
};

void Utf8Impl_obj::__register()
{
	hx::Object *dummy = new Utf8Impl_obj;
	Utf8Impl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.unifill._Utf8.Utf8Impl","\x32","\xd2","\x80","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8Impl_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utf8Impl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utf8Impl_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8Impl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utf8Impl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8Impl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8Impl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace unifill
} // end namespace _Utf8
