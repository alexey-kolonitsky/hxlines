// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_lime_text_unifill_Exception
#include <lime/text/unifill/Exception.h>
#endif
#ifndef INCLUDED_lime_text_unifill_InvalidCodePoint
#include <lime/text/unifill/InvalidCodePoint.h>
#endif
#ifndef INCLUDED_lime_text_unifill__Utf8_Utf8Impl
#include <lime/text/unifill/_Utf8/Utf8Impl.h>
#endif
#ifndef INCLUDED_lime_text_unifill__Utf8_Utf8_Impl_
#include <lime/text/unifill/_Utf8/Utf8_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_11_fromCodePoint,"lime.text.unifill._Utf8.Utf8_Impl_","fromCodePoint",0x52fc87fd,"lime.text.unifill._Utf8.Utf8_Impl_.fromCodePoint","lime/text/unifill/Utf8.hx",11,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_20_fromCodePoints,"lime.text.unifill._Utf8.Utf8_Impl_","fromCodePoints",0x49fa75d6,"lime.text.unifill._Utf8.Utf8_Impl_.fromCodePoints","lime/text/unifill/Utf8.hx",20,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_29_fromString,"lime.text.unifill._Utf8.Utf8_Impl_","fromString",0x4758fc77,"lime.text.unifill._Utf8.Utf8_Impl_.fromString","lime/text/unifill/Utf8.hx",29,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_33_fromBytes,"lime.text.unifill._Utf8.Utf8_Impl_","fromBytes",0x8595eb85,"lime.text.unifill._Utf8.Utf8_Impl_.fromBytes","lime/text/unifill/Utf8.hx",33,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_37_encodeWith,"lime.text.unifill._Utf8.Utf8_Impl_","encodeWith",0xf74c25d8,"lime.text.unifill._Utf8.Utf8_Impl_.encodeWith","lime/text/unifill/Utf8.hx",37,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_46_codeUnitAt,"lime.text.unifill._Utf8.Utf8_Impl_","codeUnitAt",0x1e334040,"lime.text.unifill._Utf8.Utf8_Impl_.codeUnitAt","lime/text/unifill/Utf8.hx",46,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_54_codePointAt,"lime.text.unifill._Utf8.Utf8_Impl_","codePointAt",0xe144419a,"lime.text.unifill._Utf8.Utf8_Impl_.codePointAt","lime/text/unifill/Utf8.hx",54,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_62_charAt,"lime.text.unifill._Utf8.Utf8_Impl_","charAt",0xc46fca05,"lime.text.unifill._Utf8.Utf8_Impl_.charAt","lime/text/unifill/Utf8.hx",62,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_69_codePointCount,"lime.text.unifill._Utf8.Utf8_Impl_","codePointCount",0xc1bd7a88,"lime.text.unifill._Utf8.Utf8_Impl_.codePointCount","lime/text/unifill/Utf8.hx",69,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_83_codePointWidthAt,"lime.text.unifill._Utf8.Utf8_Impl_","codePointWidthAt",0xdb9ed292,"lime.text.unifill._Utf8.Utf8_Impl_.codePointWidthAt","lime/text/unifill/Utf8.hx",83,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_93_codePointWidthBefore,"lime.text.unifill._Utf8.Utf8_Impl_","codePointWidthBefore",0x40098d9e,"lime.text.unifill._Utf8.Utf8_Impl_.codePointWidthBefore","lime/text/unifill/Utf8.hx",93,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_101_offsetByCodePoints,"lime.text.unifill._Utf8.Utf8_Impl_","offsetByCodePoints",0xb0e0c2b6,"lime.text.unifill._Utf8.Utf8_Impl_.offsetByCodePoints","lime/text/unifill/Utf8.hx",101,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_112_substr,"lime.text.unifill._Utf8.Utf8_Impl_","substr",0xa7053fcd,"lime.text.unifill._Utf8.Utf8_Impl_.substr","lime/text/unifill/Utf8.hx",112,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_123_validate,"lime.text.unifill._Utf8.Utf8_Impl_","validate",0x01888032,"lime.text.unifill._Utf8.Utf8_Impl_.validate","lime/text/unifill/Utf8.hx",123,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_121_validate,"lime.text.unifill._Utf8.Utf8_Impl_","validate",0x01888032,"lime.text.unifill._Utf8.Utf8_Impl_.validate","lime/text/unifill/Utf8.hx",121,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_132_toString,"lime.text.unifill._Utf8.Utf8_Impl_","toString",0x35138048,"lime.text.unifill._Utf8.Utf8_Impl_.toString","lime/text/unifill/Utf8.hx",132,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_136_toBytes,"lime.text.unifill._Utf8.Utf8_Impl_","toBytes",0xd8288cd4,"lime.text.unifill._Utf8.Utf8_Impl_.toBytes","lime/text/unifill/Utf8.hx",136,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_139__new,"lime.text.unifill._Utf8.Utf8_Impl_","_new",0x5e14c6fd,"lime.text.unifill._Utf8.Utf8_Impl_._new","lime/text/unifill/Utf8.hx",139,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_144_get_length,"lime.text.unifill._Utf8.Utf8_Impl_","get_length",0x8273d34b,"lime.text.unifill._Utf8.Utf8_Impl_.get_length","lime/text/unifill/Utf8.hx",144,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_147_forward_offset_by_code_points,"lime.text.unifill._Utf8.Utf8_Impl_","forward_offset_by_code_points",0x45b5b4a3,"lime.text.unifill._Utf8.Utf8_Impl_.forward_offset_by_code_points","lime/text/unifill/Utf8.hx",147,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_2680a405264392be_157_backward_offset_by_code_points,"lime.text.unifill._Utf8.Utf8_Impl_","backward_offset_by_code_points",0x672cb6f9,"lime.text.unifill._Utf8.Utf8_Impl_.backward_offset_by_code_points","lime/text/unifill/Utf8.hx",157,0x1a6d2f09)
namespace lime{
namespace text{
namespace unifill{
namespace _Utf8{

void Utf8_Impl__obj::__construct() { }

Dynamic Utf8_Impl__obj::__CreateEmpty() { return new Utf8_Impl__obj; }

void *Utf8_Impl__obj::_hx_vtable = 0;

Dynamic Utf8_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utf8_Impl__obj > _hx_result = new Utf8_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utf8_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53401018;
}

::String Utf8_Impl__obj::fromCodePoint(int codePoint){
            	HX_GC_STACKFRAME(&_hx_pos_2680a405264392be_11_fromCodePoint)
HXLINE(  12)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  13)		if ((codePoint <= (int)127)) {
HXLINE(  13)			buf->b->push(codePoint);
            		}
            		else {
HXLINE(  13)			if ((codePoint <= (int)2047)) {
HXLINE(  13)				::Array< unsigned char > buf1 = buf->b;
HXDLIN(  13)				buf1->push(((int)(int)192 | (int)((int)codePoint >> (int)(int)6)));
HXDLIN(  13)				::Array< unsigned char > buf2 = buf->b;
HXDLIN(  13)				buf2->push(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            			}
            			else {
HXLINE(  13)				if ((codePoint <= (int)65535)) {
HXLINE(  13)					::Array< unsigned char > buf3 = buf->b;
HXDLIN(  13)					buf3->push(((int)(int)224 | (int)((int)codePoint >> (int)(int)12)));
HXDLIN(  13)					::Array< unsigned char > buf4 = buf->b;
HXDLIN(  13)					buf4->push(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXDLIN(  13)					::Array< unsigned char > buf5 = buf->b;
HXDLIN(  13)					buf5->push(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            				}
            				else {
HXLINE(  13)					if ((codePoint <= (int)1114111)) {
HXLINE(  13)						::Array< unsigned char > buf6 = buf->b;
HXDLIN(  13)						buf6->push(((int)(int)240 | (int)((int)codePoint >> (int)(int)18)));
HXDLIN(  13)						::Array< unsigned char > buf7 = buf->b;
HXDLIN(  13)						buf7->push(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)12) & (int)(int)63)));
HXDLIN(  13)						::Array< unsigned char > buf8 = buf->b;
HXDLIN(  13)						buf8->push(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXDLIN(  13)						::Array< unsigned char > buf9 = buf->b;
HXDLIN(  13)						buf9->push(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            					}
            					else {
HXLINE(  13)						HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,codePoint));
            					}
            				}
            			}
            		}
HXLINE(  14)		::String this1 = buf->getBytes()->toString();
HXDLIN(  14)		::String this2 = this1;
HXDLIN(  14)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromCodePoint,return )

::String Utf8_Impl__obj::fromCodePoints( ::Dynamic codePoints){
            	HX_GC_STACKFRAME(&_hx_pos_2680a405264392be_20_fromCodePoints)
HXLINE(  21)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  22)		{
HXLINE(  22)			 ::Dynamic c = codePoints->__Field(HX_("iterator",ee,49,9a,93),hx::paccDynamic)();
HXDLIN(  22)			while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  22)				int c1 = ( (int)(c->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  23)				if ((c1 <= (int)127)) {
HXLINE(  23)					buf->b->push(c1);
            				}
            				else {
HXLINE(  23)					if ((c1 <= (int)2047)) {
HXLINE(  23)						::Array< unsigned char > buf1 = buf->b;
HXDLIN(  23)						buf1->push(((int)(int)192 | (int)((int)c1 >> (int)(int)6)));
HXDLIN(  23)						::Array< unsigned char > buf2 = buf->b;
HXDLIN(  23)						buf2->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            					}
            					else {
HXLINE(  23)						if ((c1 <= (int)65535)) {
HXLINE(  23)							::Array< unsigned char > buf3 = buf->b;
HXDLIN(  23)							buf3->push(((int)(int)224 | (int)((int)c1 >> (int)(int)12)));
HXDLIN(  23)							::Array< unsigned char > buf4 = buf->b;
HXDLIN(  23)							buf4->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)6) & (int)(int)63)));
HXDLIN(  23)							::Array< unsigned char > buf5 = buf->b;
HXDLIN(  23)							buf5->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            						}
            						else {
HXLINE(  23)							if ((c1 <= (int)1114111)) {
HXLINE(  23)								::Array< unsigned char > buf6 = buf->b;
HXDLIN(  23)								buf6->push(((int)(int)240 | (int)((int)c1 >> (int)(int)18)));
HXDLIN(  23)								::Array< unsigned char > buf7 = buf->b;
HXDLIN(  23)								buf7->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)12) & (int)(int)63)));
HXDLIN(  23)								::Array< unsigned char > buf8 = buf->b;
HXDLIN(  23)								buf8->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)6) & (int)(int)63)));
HXDLIN(  23)								::Array< unsigned char > buf9 = buf->b;
HXDLIN(  23)								buf9->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            							}
            							else {
HXLINE(  23)								HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,c1));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  25)		::String this1 = buf->getBytes()->toString();
HXDLIN(  25)		::String this2 = this1;
HXDLIN(  25)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromCodePoints,return )

::String Utf8_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_29_fromString)
HXLINE(  29)		::String this1 = s;
HXDLIN(  29)		::String this2 = this1;
HXDLIN(  29)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromString,return )

::String Utf8_Impl__obj::fromBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_33_fromBytes)
HXLINE(  33)		::String this1 = b->toString();
HXDLIN(  33)		::String this2 = this1;
HXDLIN(  33)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromBytes,return )

void Utf8_Impl__obj::encodeWith( ::Dynamic f,int c){
            	HX_GC_STACKFRAME(&_hx_pos_2680a405264392be_37_encodeWith)
HXLINE(  37)		if ((c <= (int)127)) {
HXLINE(  37)			f(c);
            		}
            		else {
HXLINE(  37)			if ((c <= (int)2047)) {
HXLINE(  37)				f(((int)(int)192 | (int)((int)c >> (int)(int)6)));
HXDLIN(  37)				f(((int)(int)128 | (int)((int)c & (int)(int)63)));
            			}
            			else {
HXLINE(  37)				if ((c <= (int)65535)) {
HXLINE(  37)					f(((int)(int)224 | (int)((int)c >> (int)(int)12)));
HXDLIN(  37)					f(((int)(int)128 | (int)((int)((int)c >> (int)(int)6) & (int)(int)63)));
HXDLIN(  37)					f(((int)(int)128 | (int)((int)c & (int)(int)63)));
            				}
            				else {
HXLINE(  37)					if ((c <= (int)1114111)) {
HXLINE(  37)						f(((int)(int)240 | (int)((int)c >> (int)(int)18)));
HXDLIN(  37)						f(((int)(int)128 | (int)((int)((int)c >> (int)(int)12) & (int)(int)63)));
HXDLIN(  37)						f(((int)(int)128 | (int)((int)((int)c >> (int)(int)6) & (int)(int)63)));
HXDLIN(  37)						f(((int)(int)128 | (int)((int)c & (int)(int)63)));
            					}
            					else {
HXLINE(  37)						HX_STACK_DO_THROW( ::lime::text::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,c));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,encodeWith,(void))

int Utf8_Impl__obj::codeUnitAt(::String this1,int index){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_46_codeUnitAt)
HXLINE(  46)		return this1.cca(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codeUnitAt,return )

int Utf8_Impl__obj::codePointAt(::String this1,int index){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::String,this1) HXARGC(1)
            		int _hx_run(int i){
            			HX_STACKFRAME(&_hx_pos_2680a405264392be_54_codePointAt)
HXLINE(  54)			return this1.cca(i);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_2680a405264392be_54_codePointAt)
HXLINE(  54)		return ::lime::text::unifill::_Utf8::Utf8Impl_obj::decode_code_point(this1.length, ::Dynamic(new _hx_Closure_0(this1)),index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codePointAt,return )

::String Utf8_Impl__obj::charAt(::String this1,int index){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_62_charAt)
HXLINE(  62)		int c = this1.cca(index);
HXDLIN(  62)		 ::Dynamic len;
HXDLIN(  62)		if ((c < (int)192)) {
HXLINE(  62)			len = (int)1;
            		}
            		else {
HXLINE(  62)			if ((c < (int)224)) {
HXLINE(  62)				len = (int)2;
            			}
            			else {
HXLINE(  62)				if ((c < (int)240)) {
HXLINE(  62)					len = (int)3;
            				}
            				else {
HXLINE(  62)					if ((c < (int)248)) {
HXLINE(  62)						len = (int)4;
            					}
            					else {
HXLINE(  62)						len = (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  62)		::String this2 = this1.substr(index,len);
HXDLIN(  62)		::String this3 = this2;
HXDLIN(  62)		return this3;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,charAt,return )

int Utf8_Impl__obj::codePointCount(::String this1,int beginIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_69_codePointCount)
HXLINE(  70)		int index = beginIndex;
HXLINE(  71)		int i = (int)0;
HXLINE(  72)		while((index < endIndex)){
HXLINE(  73)			int c = this1.cca(index);
HXDLIN(  73)			int index1;
HXDLIN(  73)			if ((c < (int)192)) {
HXLINE(  73)				index1 = (int)1;
            			}
            			else {
HXLINE(  73)				if ((c < (int)224)) {
HXLINE(  73)					index1 = (int)2;
            				}
            				else {
HXLINE(  73)					if ((c < (int)240)) {
HXLINE(  73)						index1 = (int)3;
            					}
            					else {
HXLINE(  73)						if ((c < (int)248)) {
HXLINE(  73)							index1 = (int)4;
            						}
            						else {
HXLINE(  73)							index1 = (int)1;
            						}
            					}
            				}
            			}
HXDLIN(  73)			index = (index + index1);
HXLINE(  74)			i = (i + (int)1);
            		}
HXLINE(  76)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,codePointCount,return )

int Utf8_Impl__obj::codePointWidthAt(::String this1,int index){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_83_codePointWidthAt)
HXLINE(  84)		int c = this1.cca(index);
HXLINE(  85)		if ((c < (int)192)) {
HXLINE(  85)			return (int)1;
            		}
            		else {
HXLINE(  85)			if ((c < (int)224)) {
HXLINE(  85)				return (int)2;
            			}
            			else {
HXLINE(  85)				if ((c < (int)240)) {
HXLINE(  85)					return (int)3;
            				}
            				else {
HXLINE(  85)					if ((c < (int)248)) {
HXLINE(  85)						return (int)4;
            					}
            					else {
HXLINE(  85)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  85)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codePointWidthAt,return )

int Utf8_Impl__obj::codePointWidthBefore(::String this1,int index){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_93_codePointWidthBefore)
HXLINE(  93)		::String this2 = this1;
HXDLIN(  93)		int c1 = this2.cca((index - (int)1));
HXDLIN(  93)		bool _hx_tmp;
HXDLIN(  93)		if ((c1 >= (int)128)) {
HXLINE(  93)			_hx_tmp = (c1 >= (int)192);
            		}
            		else {
HXLINE(  93)			_hx_tmp = true;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  93)			return (int)1;
            		}
            		else {
HXLINE(  93)			::String this3 = this1;
HXDLIN(  93)			if ((((int)this3.cca((index - (int)2)) & (int)(int)224) == (int)192)) {
HXLINE(  93)				return (int)2;
            			}
            			else {
HXLINE(  93)				::String this4 = this1;
HXDLIN(  93)				if ((((int)this4.cca((index - (int)3)) & (int)(int)240) == (int)224)) {
HXLINE(  93)					return (int)3;
            				}
            				else {
HXLINE(  93)					::String this5 = this1;
HXDLIN(  93)					if ((((int)this5.cca((index - (int)4)) & (int)(int)248) == (int)240)) {
HXLINE(  93)						return (int)4;
            					}
            					else {
HXLINE(  93)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  93)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codePointWidthBefore,return )

int Utf8_Impl__obj::offsetByCodePoints(::String this1,int index,int codePointOffset){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_101_offsetByCodePoints)
HXLINE( 101)		if ((codePointOffset >= (int)0)) {
HXLINE( 102)			int index1 = index;
HXDLIN( 102)			int len = this1.length;
HXDLIN( 102)			int i = (int)0;
HXDLIN( 102)			while(true){
HXLINE( 102)				bool _hx_tmp;
HXDLIN( 102)				if ((i < codePointOffset)) {
HXLINE( 102)					_hx_tmp = (index1 < len);
            				}
            				else {
HXLINE( 102)					_hx_tmp = false;
            				}
HXDLIN( 102)				if (!(_hx_tmp)) {
HXLINE( 102)					goto _hx_goto_14;
            				}
HXDLIN( 102)				int c = this1.cca(index1);
HXDLIN( 102)				int index2;
HXDLIN( 102)				if ((c < (int)192)) {
HXLINE( 102)					index2 = (int)1;
            				}
            				else {
HXLINE( 102)					if ((c < (int)224)) {
HXLINE( 102)						index2 = (int)2;
            					}
            					else {
HXLINE( 102)						if ((c < (int)240)) {
HXLINE( 102)							index2 = (int)3;
            						}
            						else {
HXLINE( 102)							if ((c < (int)248)) {
HXLINE( 102)								index2 = (int)4;
            							}
            							else {
HXLINE( 102)								index2 = (int)1;
            							}
            						}
            					}
            				}
HXDLIN( 102)				index1 = (index1 + index2);
HXDLIN( 102)				i = (i + (int)1);
            			}
            			_hx_goto_14:;
HXLINE( 101)			return index1;
            		}
            		else {
HXLINE( 104)			int index3 = index;
HXDLIN( 104)			int count = (int)0;
HXDLIN( 104)			while(true){
HXLINE( 104)				bool _hx_tmp1;
HXDLIN( 104)				if ((count < -(codePointOffset))) {
HXLINE( 104)					_hx_tmp1 = ((int)0 < index3);
            				}
            				else {
HXLINE( 104)					_hx_tmp1 = false;
            				}
HXDLIN( 104)				if (!(_hx_tmp1)) {
HXLINE( 104)					goto _hx_goto_15;
            				}
HXDLIN( 104)				::String this2 = this1;
HXDLIN( 104)				::String this3 = this2;
HXDLIN( 104)				int c1 = this3.cca((index3 - (int)1));
HXDLIN( 104)				int index4;
HXDLIN( 104)				bool index5;
HXDLIN( 104)				if ((c1 >= (int)128)) {
HXLINE( 104)					index5 = (c1 >= (int)192);
            				}
            				else {
HXLINE( 104)					index5 = true;
            				}
HXDLIN( 104)				if (index5) {
HXLINE( 104)					index4 = (int)1;
            				}
            				else {
HXLINE( 104)					::String this4 = this2;
HXDLIN( 104)					if ((((int)this4.cca((index3 - (int)2)) & (int)(int)224) == (int)192)) {
HXLINE( 104)						index4 = (int)2;
            					}
            					else {
HXLINE( 104)						::String this5 = this2;
HXDLIN( 104)						if ((((int)this5.cca((index3 - (int)3)) & (int)(int)240) == (int)224)) {
HXLINE( 104)							index4 = (int)3;
            						}
            						else {
HXLINE( 104)							::String this6 = this2;
HXDLIN( 104)							if ((((int)this6.cca((index3 - (int)4)) & (int)(int)248) == (int)240)) {
HXLINE( 104)								index4 = (int)4;
            							}
            							else {
HXLINE( 104)								index4 = (int)1;
            							}
            						}
            					}
            				}
HXDLIN( 104)				index3 = (index3 - index4);
HXDLIN( 104)				count = (count + (int)1);
            			}
            			_hx_goto_15:;
HXLINE( 101)			return index3;
            		}
HXDLIN( 101)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,offsetByCodePoints,return )

::String Utf8_Impl__obj::substr(::String this1,int index, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_112_substr)
HXLINE( 112)		::String this2 = this1.substr(index,len);
HXDLIN( 112)		::String this3 = this2;
HXDLIN( 112)		return this3;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,substr,return )

void Utf8_Impl__obj::validate(::String this1){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::String,this1) HXARGC(1)
            		int _hx_run(int i){
            			HX_STACKFRAME(&_hx_pos_2680a405264392be_123_validate)
HXLINE( 123)			return this1.cca(i);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_2680a405264392be_121_validate)
HXLINE( 122)		int len = this1.length;
HXLINE( 123)		 ::Dynamic accessor =  ::Dynamic(new _hx_Closure_0(this1));
HXLINE( 124)		int i1 = (int)0;
HXLINE( 125)		while((i1 < len)){
HXLINE( 126)			::lime::text::unifill::_Utf8::Utf8Impl_obj::decode_code_point(len,accessor,i1);
HXLINE( 127)			int c = this1.cca(i1);
HXDLIN( 127)			int i2;
HXDLIN( 127)			if ((c < (int)192)) {
HXLINE( 127)				i2 = (int)1;
            			}
            			else {
HXLINE( 127)				if ((c < (int)224)) {
HXLINE( 127)					i2 = (int)2;
            				}
            				else {
HXLINE( 127)					if ((c < (int)240)) {
HXLINE( 127)						i2 = (int)3;
            					}
            					else {
HXLINE( 127)						if ((c < (int)248)) {
HXLINE( 127)							i2 = (int)4;
            						}
            						else {
HXLINE( 127)							i2 = (int)1;
            						}
            					}
            				}
            			}
HXDLIN( 127)			i1 = (i1 + i2);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,validate,(void))

::String Utf8_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_132_toString)
HXLINE( 132)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,toString,return )

 ::haxe::io::Bytes Utf8_Impl__obj::toBytes(::String this1){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_136_toBytes)
HXLINE( 136)		return ::haxe::io::Bytes_obj::ofString(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,toBytes,return )

::String Utf8_Impl__obj::_new(::String s){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_139__new)
HXLINE( 139)		::String this1 = s;
HXDLIN( 139)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,_new,return )

int Utf8_Impl__obj::get_length(::String this1){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_144_get_length)
HXLINE( 144)		return this1.length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,get_length,return )

int Utf8_Impl__obj::forward_offset_by_code_points(::String this1,int index,int codePointOffset){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_147_forward_offset_by_code_points)
HXLINE( 148)		int len = this1.length;
HXLINE( 149)		int i = (int)0;
HXLINE( 150)		while(true){
HXLINE( 150)			bool _hx_tmp;
HXDLIN( 150)			if ((i < codePointOffset)) {
HXLINE( 150)				_hx_tmp = (index < len);
            			}
            			else {
HXLINE( 150)				_hx_tmp = false;
            			}
HXDLIN( 150)			if (!(_hx_tmp)) {
HXLINE( 150)				goto _hx_goto_25;
            			}
HXLINE( 151)			int c = this1.cca(index);
HXDLIN( 151)			int index1;
HXDLIN( 151)			if ((c < (int)192)) {
HXLINE( 151)				index1 = (int)1;
            			}
            			else {
HXLINE( 151)				if ((c < (int)224)) {
HXLINE( 151)					index1 = (int)2;
            				}
            				else {
HXLINE( 151)					if ((c < (int)240)) {
HXLINE( 151)						index1 = (int)3;
            					}
            					else {
HXLINE( 151)						if ((c < (int)248)) {
HXLINE( 151)							index1 = (int)4;
            						}
            						else {
HXLINE( 151)							index1 = (int)1;
            						}
            					}
            				}
            			}
HXDLIN( 151)			index = (index + index1);
HXLINE( 152)			i = (i + (int)1);
            		}
            		_hx_goto_25:;
HXLINE( 154)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,forward_offset_by_code_points,return )

int Utf8_Impl__obj::backward_offset_by_code_points(::String this1,int index,int codePointOffset){
            	HX_STACKFRAME(&_hx_pos_2680a405264392be_157_backward_offset_by_code_points)
HXLINE( 158)		int count = (int)0;
HXLINE( 159)		while(true){
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if ((count < codePointOffset)) {
HXLINE( 159)				_hx_tmp = ((int)0 < index);
            			}
            			else {
HXLINE( 159)				_hx_tmp = false;
            			}
HXDLIN( 159)			if (!(_hx_tmp)) {
HXLINE( 159)				goto _hx_goto_27;
            			}
HXLINE( 160)			::String this2 = this1;
HXDLIN( 160)			::String this3 = this2;
HXDLIN( 160)			int c1 = this3.cca((index - (int)1));
HXDLIN( 160)			int index1;
HXDLIN( 160)			bool index2;
HXDLIN( 160)			if ((c1 >= (int)128)) {
HXLINE( 160)				index2 = (c1 >= (int)192);
            			}
            			else {
HXLINE( 160)				index2 = true;
            			}
HXDLIN( 160)			if (index2) {
HXLINE( 160)				index1 = (int)1;
            			}
            			else {
HXLINE( 160)				::String this4 = this2;
HXDLIN( 160)				if ((((int)this4.cca((index - (int)2)) & (int)(int)224) == (int)192)) {
HXLINE( 160)					index1 = (int)2;
            				}
            				else {
HXLINE( 160)					::String this5 = this2;
HXDLIN( 160)					if ((((int)this5.cca((index - (int)3)) & (int)(int)240) == (int)224)) {
HXLINE( 160)						index1 = (int)3;
            					}
            					else {
HXLINE( 160)						::String this6 = this2;
HXDLIN( 160)						if ((((int)this6.cca((index - (int)4)) & (int)(int)248) == (int)240)) {
HXLINE( 160)							index1 = (int)4;
            						}
            						else {
HXLINE( 160)							index1 = (int)1;
            						}
            					}
            				}
            			}
HXDLIN( 160)			index = (index - index1);
HXLINE( 161)			count = (count + (int)1);
            		}
            		_hx_goto_27:;
HXLINE( 163)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,backward_offset_by_code_points,return )


Utf8_Impl__obj::Utf8_Impl__obj()
{
}

bool Utf8_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encodeWith") ) { outValue = encodeWith_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { outValue = codePointAt_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { outValue = fromCodePoint_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { outValue = fromCodePoints_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"codePointCount") ) { outValue = codePointCount_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { outValue = codePointWidthAt_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { outValue = offsetByCodePoints_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { outValue = codePointWidthBefore_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"forward_offset_by_code_points") ) { outValue = forward_offset_by_code_points_dyn(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"backward_offset_by_code_points") ) { outValue = backward_offset_by_code_points_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Utf8_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Utf8_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Utf8_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utf8_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_Impl__obj::__mClass;

static ::String Utf8_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromCodePoint","\x19","\x4d","\x4f","\xce"),
	HX_HCSTRING("fromCodePoints","\x3a","\x29","\x14","\xb7"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("encodeWith","\x3c","\x57","\x67","\x04"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("codePointCount","\xec","\x2d","\xd7","\x2e"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("offsetByCodePoints","\x1a","\xf8","\x61","\x6c"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("forward_offset_by_code_points","\xbf","\x71","\x4d","\xf8"),
	HX_HCSTRING("backward_offset_by_code_points","\x5d","\x72","\x5a","\xf9"),
	::String(null())
};

void Utf8_Impl__obj::__register()
{
	hx::Object *dummy = new Utf8_Impl__obj;
	Utf8_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.unifill._Utf8.Utf8_Impl_","\x52","\x14","\x74","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utf8_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utf8_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utf8_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace unifill
} // end namespace _Utf8
