// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5857023424199a6_42_new,"openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",42,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_62___enterFrame,"openfl.display.Bitmap","__enterFrame",0x534728ca,"openfl.display.Bitmap.__enterFrame","openfl/display/Bitmap.hx",62,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_78___getBounds,"openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",78,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_93___hitTest,"openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",93,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_126___hitTestMask,"openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",126,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_149___renderCairo,"openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",149,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_157___renderCairoMask,"openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",157,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_164___renderCanvas,"openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",164,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_171___renderCanvasMask,"openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",171,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_176___renderDOM,"openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",176,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_185___renderDOMClear,"openfl.display.Bitmap","__renderDOMClear",0xef620476,"openfl.display.Bitmap.__renderDOMClear","openfl/display/Bitmap.hx",185,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_196___renderGL,"openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",196,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_201___updateMask,"openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",201,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_232_set_bitmapData,"openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",232,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_252_get_height,"openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",252,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_265_set_height,"openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",265,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_285_get_width,"openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",285,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_298_set_width,"openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",298,0x461b2743)
namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_42_new)
HXLINE(  44)		super::__construct();
HXLINE(  46)		this->set_bitmapData(bitmapData);
HXLINE(  47)		this->pixelSnapping = pixelSnapping;
HXLINE(  48)		this->smoothing = smoothing;
HXLINE(  50)		if (hx::IsNull( pixelSnapping )) {
HXLINE(  52)			this->pixelSnapping = (int)1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3b5602c1;
	}
}

static ::openfl::display::IShaderDrawable_obj _hx_openfl_display_Bitmap__hx_openfl_display_IShaderDrawable= {
};

void *Bitmap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa78ed11a: return &_hx_openfl_display_Bitmap__hx_openfl_display_IShaderDrawable;
	}
	return super::_hx_getInterface(inHash);
}

void Bitmap_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_62___enterFrame)
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE(  62)			_hx_tmp = hx::IsNotNull( this->bitmapData->image );
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  64)			 ::lime::graphics::Image image = this->bitmapData->image;
HXLINE(  65)			if ((this->bitmapData->image->version != this->_hx___imageVersion)) {
HXLINE(  66)				if (!(this->_hx___renderDirty)) {
HXLINE(  66)					this->_hx___renderDirty = true;
HXDLIN(  66)					this->_hx___setParentRenderDirty();
            				}
HXLINE(  67)				this->_hx___imageVersion = image->version;
            			}
            		}
            	}


void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_78___getBounds)
HXLINE(  78)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE(  80)			 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get();
HXLINE(  81)			bounds->setTo((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE(  82)			bounds->_hx___transform(bounds,matrix);
HXLINE(  84)			rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(  86)			::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            		}
            	}


bool Bitmap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_93___hitTest)
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		bool _hx_tmp1;
HXDLIN(  95)		if (!(!(hitObject->get_visible()))) {
HXLINE(  95)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(  95)			_hx_tmp1 = true;
            		}
HXDLIN(  95)		if (!(_hx_tmp1)) {
HXLINE(  95)			_hx_tmp = hx::IsNull( this->bitmapData );
            		}
            		else {
HXLINE(  95)			_hx_tmp = true;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXLINE(  95)			return false;
            		}
HXLINE(  96)		bool _hx_tmp2;
HXDLIN(  96)		if (hx::IsNotNull( this->get_mask() )) {
HXLINE(  96)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(  96)			_hx_tmp2 = false;
            		}
HXDLIN(  96)		if (_hx_tmp2) {
HXLINE(  96)			return false;
            		}
HXLINE(  98)		this->_hx___getRenderTransform();
HXLINE( 100)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 100)		Float norm = (_this->a * _this->d);
HXDLIN( 100)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 100)		Float px;
HXDLIN( 100)		if ((norm1 == (int)0)) {
HXLINE( 100)			px = -(_this->tx);
            		}
            		else {
HXLINE( 100)			Float _this1 = _this->c;
HXDLIN( 100)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN( 100)			Float _this2 = _this->d;
HXDLIN( 100)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE( 101)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN( 101)		Float norm2 = (_this3->a * _this3->d);
HXDLIN( 101)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN( 101)		Float py;
HXDLIN( 101)		if ((norm3 == (int)0)) {
HXLINE( 101)			py = -(_this3->ty);
            		}
            		else {
HXLINE( 101)			Float _this4 = _this3->a;
HXDLIN( 101)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN( 101)			Float _this5 = _this3->b;
HXDLIN( 101)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE( 103)		bool _hx_tmp3;
HXDLIN( 103)		bool _hx_tmp4;
HXDLIN( 103)		bool _hx_tmp5;
HXDLIN( 103)		if ((px > (int)0)) {
HXLINE( 103)			_hx_tmp5 = (py > (int)0);
            		}
            		else {
HXLINE( 103)			_hx_tmp5 = false;
            		}
HXDLIN( 103)		if (_hx_tmp5) {
HXLINE( 103)			_hx_tmp4 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE( 103)			_hx_tmp4 = false;
            		}
HXDLIN( 103)		if (_hx_tmp4) {
HXLINE( 103)			_hx_tmp3 = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE( 103)			_hx_tmp3 = false;
            		}
HXDLIN( 103)		if (_hx_tmp3) {
HXLINE( 105)			bool _hx_tmp6;
HXDLIN( 105)			if (hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 105)				_hx_tmp6 = !(this->_hx___scrollRect->contains(px,py));
            			}
            			else {
HXLINE( 105)				_hx_tmp6 = false;
            			}
HXDLIN( 105)			if (_hx_tmp6) {
HXLINE( 107)				return false;
            			}
HXLINE( 111)			bool _hx_tmp7;
HXDLIN( 111)			if (hx::IsNotNull( stack )) {
HXLINE( 111)				_hx_tmp7 = !(interactiveOnly);
            			}
            			else {
HXLINE( 111)				_hx_tmp7 = false;
            			}
HXDLIN( 111)			if (_hx_tmp7) {
HXLINE( 113)				stack->push(hitObject);
            			}
HXLINE( 117)			return true;
            		}
HXLINE( 121)		return false;
            	}


bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_126___hitTestMask)
HXLINE( 128)		if (hx::IsNull( this->bitmapData )) {
HXLINE( 128)			return false;
            		}
HXLINE( 130)		this->_hx___getRenderTransform();
HXLINE( 132)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 132)		Float norm = (_this->a * _this->d);
HXDLIN( 132)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 132)		Float px;
HXDLIN( 132)		if ((norm1 == (int)0)) {
HXLINE( 132)			px = -(_this->tx);
            		}
            		else {
HXLINE( 132)			Float _this1 = _this->c;
HXDLIN( 132)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN( 132)			Float _this2 = _this->d;
HXDLIN( 132)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE( 133)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN( 133)		Float norm2 = (_this3->a * _this3->d);
HXDLIN( 133)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN( 133)		Float py;
HXDLIN( 133)		if ((norm3 == (int)0)) {
HXLINE( 133)			py = -(_this3->ty);
            		}
            		else {
HXLINE( 133)			Float _this4 = _this3->a;
HXDLIN( 133)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN( 133)			Float _this5 = _this3->b;
HXDLIN( 133)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE( 135)		bool _hx_tmp;
HXDLIN( 135)		bool _hx_tmp1;
HXDLIN( 135)		bool _hx_tmp2;
HXDLIN( 135)		if ((px > (int)0)) {
HXLINE( 135)			_hx_tmp2 = (py > (int)0);
            		}
            		else {
HXLINE( 135)			_hx_tmp2 = false;
            		}
HXDLIN( 135)		if (_hx_tmp2) {
HXLINE( 135)			_hx_tmp1 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE( 135)			_hx_tmp1 = false;
            		}
HXDLIN( 135)		if (_hx_tmp1) {
HXLINE( 135)			_hx_tmp = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE( 135)			_hx_tmp = false;
            		}
HXDLIN( 135)		if (_hx_tmp) {
HXLINE( 137)			return true;
            		}
HXLINE( 141)		return false;
            	}


void Bitmap_obj::_hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_149___renderCairo)
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if (!(!(this->_hx___renderable))) {
HXLINE( 149)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE( 149)			_hx_tmp = true;
            		}
HXDLIN( 149)		if (!(_hx_tmp)) {
HXLINE( 149)			 ::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
HXDLIN( 149)			bool _hx_tmp1;
HXDLIN( 149)			if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 149)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXLINE( 149)				_hx_tmp1 = false;
            			}
HXDLIN( 149)			if (_hx_tmp1) {
HXLINE( 149)				renderSession->blendModeManager->setBlendMode(this->_hx___worldBlendMode);
HXDLIN( 149)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 149)				 ::openfl::geom::Matrix transform = this->_hx___renderTransform;
HXDLIN( 149)				if (renderSession->roundPixels) {
HXLINE( 149)					 ::lime::math::Matrix3 matrix = transform->_hx___toMatrix3();
HXDLIN( 149)					matrix->tx = ::Math_obj::round(matrix->tx);
HXDLIN( 149)					matrix->ty = ::Math_obj::round(matrix->ty);
HXDLIN( 149)					cairo->set_matrix(matrix);
            				}
            				else {
HXLINE( 149)					cairo->set_matrix(transform->_hx___toMatrix3());
            				}
HXDLIN( 149)				 ::Dynamic surface = this->bitmapData->getSurface();
HXDLIN( 149)				if (hx::IsNotNull( surface )) {
HXLINE( 149)					 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 149)					int _hx_tmp2;
HXDLIN( 149)					bool _hx_tmp3;
HXDLIN( 149)					if (renderSession->allowSmoothing) {
HXLINE( 149)						_hx_tmp3 = this->smoothing;
            					}
            					else {
HXLINE( 149)						_hx_tmp3 = false;
            					}
HXDLIN( 149)					if (_hx_tmp3) {
HXLINE( 149)						_hx_tmp2 = (int)1;
            					}
            					else {
HXLINE( 149)						_hx_tmp2 = (int)3;
            					}
HXDLIN( 149)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp2);
HXDLIN( 149)					cairo->set_source(pattern);
HXDLIN( 149)					if ((this->_hx___worldAlpha == (int)1)) {
HXLINE( 149)						cairo->paint();
            					}
            					else {
HXLINE( 149)						cairo->paintWithAlpha(this->_hx___worldAlpha);
            					}
            				}
HXDLIN( 149)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_157___renderCairoMask)
HXLINE( 157)		 ::lime::graphics::cairo::Cairo renderSession1 = renderSession->cairo;
HXDLIN( 157)		Float _hx_tmp = this->get_width();
HXDLIN( 157)		renderSession1->rectangle((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_164___renderCanvas)
            	}


void Bitmap_obj::_hx___renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_171___renderCanvasMask)
HXLINE( 171)		 ::lime::graphics::CanvasRenderContext renderSession1 = renderSession->context;
HXDLIN( 171)		Float _hx_tmp = this->get_width();
HXDLIN( 171)		renderSession1->rect((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_176___renderDOM)
            	}


void Bitmap_obj::_hx___renderDOMClear( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_185___renderDOMClear)
            	}


void Bitmap_obj::_hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_196___renderGL)
HXLINE( 196)		::openfl::_internal::renderer::opengl::GLBitmap_obj::render(hx::ObjectPtr<OBJ_>(this),renderSession);
            	}


void Bitmap_obj::_hx___updateMask( ::openfl::display::Graphics maskGraphics){
            	HX_GC_STACKFRAME(&_hx_pos_f5857023424199a6_201___updateMask)
HXLINE( 203)		if (hx::IsNull( this->bitmapData )) {
HXLINE( 205)			return;
            		}
HXLINE( 209)		maskGraphics->_hx___commands->overrideMatrix(this->_hx___worldTransform);
HXLINE( 210)		maskGraphics->beginFill((int)0,null());
HXLINE( 211)		maskGraphics->drawRect((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE( 213)		if (hx::IsNull( maskGraphics->_hx___bounds )) {
HXLINE( 215)			maskGraphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 219)		this->_hx___getBounds(maskGraphics->_hx___bounds,::openfl::geom::Matrix_obj::_hx___identity);
HXLINE( 221)		this->super::_hx___updateMask(maskGraphics);
            	}


 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_232_set_bitmapData)
HXLINE( 234)		this->bitmapData = value;
HXLINE( 235)		this->smoothing = false;
HXLINE( 237)		if (!(this->_hx___renderDirty)) {
HXLINE( 237)			this->_hx___renderDirty = true;
HXDLIN( 237)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if (hx::IsNotNull( this->_hx___filters )) {
HXLINE( 239)			_hx_tmp = (this->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXLINE( 245)		this->_hx___imageVersion = (int)-1;
HXLINE( 247)		return this->bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_252_get_height)
HXLINE( 254)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 256)			int _hx_tmp = this->bitmapData->height;
HXDLIN( 256)			return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            		}
HXLINE( 260)		return (int)0;
            	}


Float Bitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_265_set_height)
HXLINE( 267)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 269)			if ((value != this->bitmapData->height)) {
HXLINE( 271)				if (!(this->_hx___renderDirty)) {
HXLINE( 271)					this->_hx___renderDirty = true;
HXDLIN( 271)					this->_hx___setParentRenderDirty();
            				}
HXLINE( 272)				this->set_scaleY(((Float)value / (Float)this->bitmapData->height));
            			}
HXLINE( 276)			return value;
            		}
HXLINE( 280)		return (int)0;
            	}


Float Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_285_get_width)
HXLINE( 287)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 289)			int _hx_tmp = this->bitmapData->width;
HXDLIN( 289)			return (_hx_tmp * ::Math_obj::abs(this->_hx___scaleX));
            		}
HXLINE( 293)		return (int)0;
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_298_set_width)
HXLINE( 300)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 302)			if ((value != this->bitmapData->width)) {
HXLINE( 304)				if (!(this->_hx___renderDirty)) {
HXLINE( 304)					this->_hx___renderDirty = true;
HXDLIN( 304)					this->_hx___setParentRenderDirty();
            				}
HXLINE( 305)				this->set_scaleX(((Float)value / (Float)this->bitmapData->width));
            			}
HXLINE( 309)			return value;
            		}
HXLINE( 313)		return (int)0;
            	}



hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn()); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn()); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn()); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn()); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return hx::Val( _hx___getBounds_dyn()); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return hx::Val( _hx___enterFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return hx::Val( _hx___updateMask_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return hx::Val( pixelSnapping); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn()); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return hx::Val( _hx___renderCairo_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { return hx::Val( _hx___imageVersion); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return hx::Val( _hx___renderCanvas_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__renderDOMClear") ) { return hx::Val( _hx___renderDOMClear_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return hx::Val( _hx___renderCairoMask_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return hx::Val( _hx___renderCanvasMask_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue) );bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { _hx___imageVersion=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("__imageVersion","\x1d","\xe4","\x7a","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(Bitmap_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,_hx___imageVersion),HX_HCSTRING("__imageVersion","\x1d","\xe4","\x7a","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__imageVersion","\x1d","\xe4","\x7a","\x8d"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderDOMClear","\x41","\xdc","\xee","\x79"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Object *dummy = new Bitmap_obj;
	Bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
