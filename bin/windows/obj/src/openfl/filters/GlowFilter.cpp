// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#include <openfl/filters/_GlowFilter/GlowShader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f54e58291eefcbc3_34_new,"openfl.filters.GlowFilter","new",0xf734d428,"openfl.filters.GlowFilter.new","openfl/filters/GlowFilter.hx",34,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_55_clone,"openfl.filters.GlowFilter","clone",0x7c629925,"openfl.filters.GlowFilter.clone","openfl/filters/GlowFilter.hx",55,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_60___applyFilter,"openfl.filters.GlowFilter","__applyFilter",0x0cceae6e,"openfl.filters.GlowFilter.__applyFilter","openfl/filters/GlowFilter.hx",60,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_77___initShader,"openfl.filters.GlowFilter","__initShader",0x188dd8ad,"openfl.filters.GlowFilter.__initShader","openfl/filters/GlowFilter.hx",77,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_112_set_alpha,"openfl.filters.GlowFilter","set_alpha",0x5b5af989,"openfl.filters.GlowFilter.set_alpha","openfl/filters/GlowFilter.hx",112,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_120_set_blurX,"openfl.filters.GlowFilter","set_blurX",0xeec561fc,"openfl.filters.GlowFilter.set_blurX","openfl/filters/GlowFilter.hx",120,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_133_set_blurY,"openfl.filters.GlowFilter","set_blurY",0xeec561fd,"openfl.filters.GlowFilter.set_blurY","openfl/filters/GlowFilter.hx",133,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_146_set_color,"openfl.filters.GlowFilter","set_color",0x8420c38e,"openfl.filters.GlowFilter.set_color","openfl/filters/GlowFilter.hx",146,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_154_set_inner,"openfl.filters.GlowFilter","set_inner",0xf7e083c1,"openfl.filters.GlowFilter.set_inner","openfl/filters/GlowFilter.hx",154,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_162_set_knockout,"openfl.filters.GlowFilter","set_knockout",0xf84cc4af,"openfl.filters.GlowFilter.set_knockout","openfl/filters/GlowFilter.hx",162,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_170_set_quality,"openfl.filters.GlowFilter","set_quality",0xb56977aa,"openfl.filters.GlowFilter.set_quality","openfl/filters/GlowFilter.hx",170,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_185_set_strength,"openfl.filters.GlowFilter","set_strength",0x1735ed36,"openfl.filters.GlowFilter.set_strength","openfl/filters/GlowFilter.hx",185,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_19_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",19,0x5f568606)
namespace openfl{
namespace filters{

void GlowFilter_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout){
int color = __o_color.Default(16711680);
Float alpha = __o_alpha.Default(1);
Float blurX = __o_blurX.Default(6);
Float blurY = __o_blurY.Default(6);
Float strength = __o_strength.Default(2);
int quality = __o_quality.Default(1);
bool inner = __o_inner.Default(false);
bool knockout = __o_knockout.Default(false);
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_34_new)
HXLINE(  36)		super::__construct();
HXLINE(  38)		this->set_color(color);
HXLINE(  39)		this->set_alpha(alpha);
HXLINE(  40)		this->set_blurX(blurX);
HXLINE(  41)		this->set_blurY(blurY);
HXLINE(  42)		this->set_strength(strength);
HXLINE(  43)		this->set_quality(quality);
HXLINE(  44)		this->set_inner(inner);
HXLINE(  45)		this->set_knockout(knockout);
HXLINE(  47)		this->_hx___needSecondBitmapData = true;
HXLINE(  48)		this->_hx___preserveObject = true;
            	}

Dynamic GlowFilter_obj::__CreateEmpty() { return new GlowFilter_obj; }

void *GlowFilter_obj::_hx_vtable = 0;

Dynamic GlowFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlowFilter_obj > _hx_result = new GlowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GlowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f68d692) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f68d692;
	} else {
		return inClassId==(int)0x65fc6b28;
	}
}

 ::openfl::filters::BitmapFilter GlowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_55_clone)
HXLINE(  55)		return  ::openfl::filters::GlowFilter_obj::__alloc( HX_CTX ,this->color,this->alpha,this->blurX,this->blurY,this->strength,this->quality,this->inner,this->knockout);
            	}


 ::openfl::display::BitmapData GlowFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_60___applyFilter)
HXLINE(  64)		int r = ((int)((int)this->color >> (int)(int)16) & (int)(int)255);
HXLINE(  65)		int g = ((int)((int)this->color >> (int)(int)8) & (int)(int)255);
HXLINE(  66)		int b = ((int)this->color & (int)(int)255);
HXLINE(  67)		 ::openfl::geom::Rectangle sourceBitmapData1 = sourceBitmapData->rect;
HXDLIN(  67)		sourceBitmapData->colorTransform(sourceBitmapData1, ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,(int)0,(int)0,(int)0,(int)1,r,g,b,(this->alpha * (int)255)));
HXLINE(  69)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN(  69)		 ::lime::graphics::Image sourceBitmapData2 = sourceBitmapData->image;
HXDLIN(  69)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN(  69)		 ::lime::math::Vector2 finalImage1 = destPoint->_hx___toLimeVector2();
HXDLIN(  69)		 ::lime::graphics::Image finalImage2 = ::lime::graphics::utils::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData2,finalImage,finalImage1,this->blurX,this->blurY,this->quality,this->strength);
HXLINE(  71)		if (hx::IsEq( finalImage2,bitmapData->image )) {
HXLINE(  71)			return bitmapData;
            		}
HXLINE(  72)		return sourceBitmapData;
            	}


 ::openfl::display::Shader GlowFilter_obj::_hx___initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_77___initShader)
HXLINE(  79)		 ::openfl::display::ShaderData data = ::openfl::filters::GlowFilter_obj::_hx___glowShader->get_data();
HXLINE(  81)		if ((pass <= this->horizontalPasses)) {
HXLINE(  83)			Float scale = ::Math_obj::pow(((Float)0.5),((int)pass >> (int)(int)1));
HXLINE(  84)			 ::Dynamic data1 =  ::Dynamic( ::Dynamic(data->__Field(HX_("uRadius",a7,8a,da,e6),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic));
HXDLIN(  84)			data1->__SetItem((int)0,(this->blurX * scale));
HXLINE(  85)			 ::Dynamic( ::Dynamic(data->__Field(HX_("uRadius",a7,8a,da,e6),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic))->__SetItem((int)1,(int)0);
            		}
            		else {
HXLINE(  89)			Float scale1 = ::Math_obj::pow(((Float)0.5),((int)(pass - this->horizontalPasses) >> (int)(int)1));
HXLINE(  90)			 ::Dynamic( ::Dynamic(data->__Field(HX_("uRadius",a7,8a,da,e6),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic))->__SetItem((int)0,(int)0);
HXLINE(  91)			 ::Dynamic data2 =  ::Dynamic( ::Dynamic(data->__Field(HX_("uRadius",a7,8a,da,e6),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic));
HXDLIN(  91)			data2->__SetItem((int)1,(this->blurY * scale1));
            		}
HXLINE(  95)		 ::Dynamic data3 =  ::Dynamic( ::Dynamic(data->__Field(HX_("uColor",ae,18,4b,a5),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic));
HXDLIN(  95)		data3->__SetItem((int)0,((Float)((int)((int)this->color >> (int)(int)16) & (int)(int)255) / (Float)(int)255));
HXLINE(  96)		 ::Dynamic data4 =  ::Dynamic( ::Dynamic(data->__Field(HX_("uColor",ae,18,4b,a5),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic));
HXDLIN(  96)		data4->__SetItem((int)1,((Float)((int)((int)this->color >> (int)(int)8) & (int)(int)255) / (Float)(int)255));
HXLINE(  97)		 ::Dynamic data5 =  ::Dynamic( ::Dynamic(data->__Field(HX_("uColor",ae,18,4b,a5),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic));
HXDLIN(  97)		data5->__SetItem((int)2,((Float)((int)this->color & (int)(int)255) / (Float)(int)255));
HXLINE(  98)		 ::Dynamic( ::Dynamic(data->__Field(HX_("uColor",ae,18,4b,a5),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic))->__SetItem((int)3,this->alpha);
HXLINE( 100)		return ::openfl::filters::GlowFilter_obj::_hx___glowShader;
            	}


Float GlowFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_112_set_alpha)
HXLINE( 114)		if ((value != this->alpha)) {
HXLINE( 114)			this->_hx___renderDirty = true;
            		}
HXLINE( 115)		return (this->alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_alpha,return )

Float GlowFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_120_set_blurX)
HXLINE( 122)		if ((value != this->blurX)) {
HXLINE( 123)			this->blurX = value;
HXLINE( 124)			this->_hx___renderDirty = true;
HXLINE( 125)			int _hx_tmp;
HXDLIN( 125)			if ((value > (int)0)) {
HXLINE( 125)				_hx_tmp = ::Math_obj::ceil(value);
            			}
            			else {
HXLINE( 125)				_hx_tmp = (int)0;
            			}
HXDLIN( 125)			this->_hx___leftExtension = _hx_tmp;
HXLINE( 126)			this->_hx___rightExtension = this->_hx___leftExtension;
            		}
HXLINE( 128)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurX,return )

Float GlowFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_133_set_blurY)
HXLINE( 135)		if ((value != this->blurY)) {
HXLINE( 136)			this->blurY = value;
HXLINE( 137)			this->_hx___renderDirty = true;
HXLINE( 138)			int _hx_tmp;
HXDLIN( 138)			if ((value > (int)0)) {
HXLINE( 138)				_hx_tmp = ::Math_obj::ceil(value);
            			}
            			else {
HXLINE( 138)				_hx_tmp = (int)0;
            			}
HXDLIN( 138)			this->_hx___leftExtension = _hx_tmp;
HXLINE( 139)			this->_hx___rightExtension = this->_hx___leftExtension;
            		}
HXLINE( 141)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurY,return )

int GlowFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_146_set_color)
HXLINE( 148)		if ((value != this->color)) {
HXLINE( 148)			this->_hx___renderDirty = true;
            		}
HXLINE( 149)		return (this->color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_color,return )

bool GlowFilter_obj::set_inner(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_154_set_inner)
HXLINE( 156)		if ((value != this->inner)) {
HXLINE( 156)			this->_hx___renderDirty = true;
            		}
HXLINE( 157)		return (this->inner = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_inner,return )

bool GlowFilter_obj::set_knockout(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_162_set_knockout)
HXLINE( 164)		if ((value != this->knockout)) {
HXLINE( 164)			this->_hx___renderDirty = true;
            		}
HXLINE( 165)		return (this->knockout = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_knockout,return )

int GlowFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_170_set_quality)
HXLINE( 174)		int _hx_tmp;
HXDLIN( 174)		if ((this->blurX <= (int)0)) {
HXLINE( 174)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE( 174)			Float _hx_tmp1 = this->blurX;
HXDLIN( 174)			_hx_tmp = (::Math_obj::round((_hx_tmp1 * ((Float)value / (Float)(int)4))) + (int)1);
            		}
HXDLIN( 174)		this->horizontalPasses = _hx_tmp;
HXLINE( 175)		int _hx_tmp2;
HXDLIN( 175)		if ((this->blurY <= (int)0)) {
HXLINE( 175)			_hx_tmp2 = (int)0;
            		}
            		else {
HXLINE( 175)			Float _hx_tmp3 = this->blurY;
HXDLIN( 175)			_hx_tmp2 = (::Math_obj::round((_hx_tmp3 * ((Float)value / (Float)(int)4))) + (int)1);
            		}
HXDLIN( 175)		this->verticalPasses = _hx_tmp2;
HXLINE( 177)		this->_hx___numShaderPasses = (this->horizontalPasses + this->verticalPasses);
HXLINE( 179)		if ((value != this->quality)) {
HXLINE( 179)			this->_hx___renderDirty = true;
            		}
HXLINE( 180)		return (this->quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_quality,return )

Float GlowFilter_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_185_set_strength)
HXLINE( 187)		if ((value != this->strength)) {
HXLINE( 187)			this->_hx___renderDirty = true;
            		}
HXLINE( 188)		return (this->strength = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_strength,return )

 ::openfl::filters::_GlowFilter::GlowShader GlowFilter_obj::_hx___glowShader;


hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout) {
	hx::ObjectPtr< GlowFilter_obj > __this = new GlowFilter_obj();
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout) {
	GlowFilter_obj *__this = (GlowFilter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlowFilter_obj), false, "openfl.filters.GlowFilter"));
	*(void **)__this = GlowFilter_obj::_hx_vtable;
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

GlowFilter_obj::GlowFilter_obj()
{
}

hx::Val GlowFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha); }
		if (HX_FIELD_EQ(inName,"blurX") ) { return hx::Val( blurX); }
		if (HX_FIELD_EQ(inName,"blurY") ) { return hx::Val( blurY); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		if (HX_FIELD_EQ(inName,"inner") ) { return hx::Val( inner); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return hx::Val( quality); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { return hx::Val( knockout); }
		if (HX_FIELD_EQ(inName,"strength") ) { return hx::Val( strength); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return hx::Val( set_alpha_dyn()); }
		if (HX_FIELD_EQ(inName,"set_blurX") ) { return hx::Val( set_blurX_dyn()); }
		if (HX_FIELD_EQ(inName,"set_blurY") ) { return hx::Val( set_blurY_dyn()); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return hx::Val( set_color_dyn()); }
		if (HX_FIELD_EQ(inName,"set_inner") ) { return hx::Val( set_inner_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_quality") ) { return hx::Val( set_quality_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return hx::Val( _hx___initShader_dyn()); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return hx::Val( set_knockout_dyn()); }
		if (HX_FIELD_EQ(inName,"set_strength") ) { return hx::Val( set_strength_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return hx::Val( _hx___applyFilter_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"verticalPasses") ) { return hx::Val( verticalPasses); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"horizontalPasses") ) { return hx::Val( horizontalPasses); }
	}
	return super::__Field(inName,inCallProp);
}

bool GlowFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__glowShader") ) { outValue = _hx___glowShader; return true; }
	}
	return false;
}

hx::Val GlowFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_alpha(inValue) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blurX(inValue) );blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blurY(inValue) );blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_color(inValue) );color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_inner(inValue) );inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_quality(inValue) );quality=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_knockout(inValue) );knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_strength(inValue) );strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"verticalPasses") ) { verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"horizontalPasses") ) { horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GlowFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__glowShader") ) { _hx___glowShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::GlowShader >(); return true; }
	}
	return false;
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	outFields->push(HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96"));
	outFields->push(HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlowFilter_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurX),HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurY),HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,knockout),HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,horizontalPasses),HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,verticalPasses),HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GlowFilter_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_GlowFilter::GlowShader*/ ,(void *) &GlowFilter_obj::_hx___glowShader,HX_HCSTRING("__glowShader","\xb2","\xe4","\x70","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GlowFilter_obj_sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"),
	HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("horizontalPasses","\x83","\x07","\xcd","\x96"),
	HX_HCSTRING("verticalPasses","\x95","\xc0","\xb5","\xb8"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_blurX","\x34","\x58","\xfb","\xdb"),
	HX_HCSTRING("set_blurY","\x35","\x58","\xfb","\xdb"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_inner","\xf9","\x79","\x16","\xe5"),
	HX_HCSTRING("set_knockout","\x77","\x81","\xb8","\x39"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("set_strength","\xfe","\xa9","\xa1","\x58"),
	::String(null()) };

static void GlowFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___glowShader,"__glowShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___glowShader,"__glowShader");
};

#endif

hx::Class GlowFilter_obj::__mClass;

static ::String GlowFilter_obj_sStaticFields[] = {
	HX_HCSTRING("__glowShader","\xb2","\xe4","\x70","\x07"),
	::String(null())
};

void GlowFilter_obj::__register()
{
	hx::Object *dummy = new GlowFilter_obj;
	GlowFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.GlowFilter","\x36","\xe0","\x65","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlowFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &GlowFilter_obj::__SetStatic;
	__mClass->mMarkFunc = GlowFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GlowFilter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlowFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlowFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_19_boot)
HXLINE(  19)		_hx___glowShader =  ::openfl::filters::_GlowFilter::GlowShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters
