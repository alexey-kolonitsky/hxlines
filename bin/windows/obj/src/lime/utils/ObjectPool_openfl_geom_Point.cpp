// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Point
#include <lime/utils/ObjectPool_openfl_geom_Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68de5308f7101ccb_24_new,"lime.utils.ObjectPool_openfl_geom_Point","new",0xd511c7a0,"lime.utils.ObjectPool_openfl_geom_Point.new","lime/utils/ObjectPool.hx",24,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_58_add,"lime.utils.ObjectPool_openfl_geom_Point","add",0xd507e961,"lime.utils.ObjectPool_openfl_geom_Point.add","lime/utils/ObjectPool.hx",58,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_69___default_clean,"lime.utils.ObjectPool_openfl_geom_Point","__default_clean",0x374d286b,"lime.utils.ObjectPool_openfl_geom_Point.__default_clean","lime/utils/ObjectPool.hx",69,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_76_clear,"lime.utils.ObjectPool_openfl_geom_Point","clear",0x41f5b8cd,"lime.utils.ObjectPool_openfl_geom_Point.clear","lime/utils/ObjectPool.hx",76,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_92___default_create,"lime.utils.ObjectPool_openfl_geom_Point","__default_create",0xa09db5da,"lime.utils.ObjectPool_openfl_geom_Point.__default_create","lime/utils/ObjectPool.hx",92,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_97_get,"lime.utils.ObjectPool_openfl_geom_Point","get",0xd50c77d6,"lime.utils.ObjectPool_openfl_geom_Point.get","lime/utils/ObjectPool.hx",97,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_123_release,"lime.utils.ObjectPool_openfl_geom_Point","release",0xa3181d07,"lime.utils.ObjectPool_openfl_geom_Point.release","lime/utils/ObjectPool.hx",123,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_153___addInactive,"lime.utils.ObjectPool_openfl_geom_Point","__addInactive",0xb81816cc,"lime.utils.ObjectPool_openfl_geom_Point.__addInactive","lime/utils/ObjectPool.hx",153,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_178___getInactive,"lime.utils.ObjectPool_openfl_geom_Point","__getInactive",0xacafa241,"lime.utils.ObjectPool_openfl_geom_Point.__getInactive","lime/utils/ObjectPool.hx",178,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_222___removeInactive,"lime.utils.ObjectPool_openfl_geom_Point","__removeInactive",0x88ae5faf,"lime.utils.ObjectPool_openfl_geom_Point.__removeInactive","lime/utils/ObjectPool.hx",222,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_271_get_size,"lime.utils.ObjectPool_openfl_geom_Point","get_size",0x67281d0a,"lime.utils.ObjectPool_openfl_geom_Point.get_size","lime/utils/ObjectPool.hx",271,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_68de5308f7101ccb_276_set_size,"lime.utils.ObjectPool_openfl_geom_Point","set_size",0x1585767e,"lime.utils.ObjectPool_openfl_geom_Point.set_size","lime/utils/ObjectPool.hx",276,0xc114d76b)
namespace lime{
namespace utils{

void ObjectPool_openfl_geom_Point_obj::__construct( ::Dynamic create, ::Dynamic clean, ::Dynamic size){
            	HX_GC_STACKFRAME(&_hx_pos_68de5308f7101ccb_24_new)
HXLINE(  26)		if (hx::IsNotNull( create )) {
HXLINE(  28)			this->create = create;
            		}
HXLINE(  32)		if (hx::IsNotNull( clean )) {
HXLINE(  34)			this->clean = clean;
            		}
HXLINE(  38)		if (hx::IsNotNull( size )) {
HXLINE(  40)			this->set_size(size);
            		}
HXLINE(  44)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  46)		this->activeObjects = (int)0;
HXLINE(  47)		this->inactiveObjects = (int)0;
HXLINE(  49)		this->_hx___inactiveObject0 = null();
HXLINE(  50)		this->_hx___inactiveObject1 = null();
HXLINE(  51)		this->_hx___inactiveObjectList =  ::List_obj::__alloc( HX_CTX );
            	}

Dynamic ObjectPool_openfl_geom_Point_obj::__CreateEmpty() { return new ObjectPool_openfl_geom_Point_obj; }

void *ObjectPool_openfl_geom_Point_obj::_hx_vtable = 0;

Dynamic ObjectPool_openfl_geom_Point_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectPool_openfl_geom_Point_obj > _hx_result = new ObjectPool_openfl_geom_Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectPool_openfl_geom_Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58a81654;
}

void ObjectPool_openfl_geom_Point_obj::add( ::openfl::geom::Point object){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_58_add)
HXLINE(  58)		if (!(::haxe::IMap_obj::exists(this->_hx___pool,object))) {
HXLINE(  60)			::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE(  61)			this->clean(object);
HXLINE(  62)			{
HXLINE(  62)				if (hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE(  62)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE(  62)					if (hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE(  62)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE(  62)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN(  62)				this->inactiveObjects++;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Point_obj,add,(void))

HX_BEGIN_DEFAULT_FUNC(__default_clean,ObjectPool_openfl_geom_Point_obj)
void _hx_run( ::openfl::geom::Point object){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_69___default_clean)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

void ObjectPool_openfl_geom_Point_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_68de5308f7101ccb_76_clear)
HXLINE(  78)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  80)		this->activeObjects = (int)0;
HXLINE(  81)		this->inactiveObjects = (int)0;
HXLINE(  83)		this->_hx___inactiveObject0 = null();
HXLINE(  84)		this->_hx___inactiveObject1 = null();
HXLINE(  85)		this->_hx___inactiveObjectList->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Point_obj,clear,(void))

HX_BEGIN_DEFAULT_FUNC(__default_create,ObjectPool_openfl_geom_Point_obj)
 ::openfl::geom::Point _hx_run(){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_92___default_create)
HXLINE(  92)		return null();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

 ::openfl::geom::Point ObjectPool_openfl_geom_Point_obj::get(){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_97_get)
HXLINE(  99)		 ::openfl::geom::Point object = null();
HXLINE( 101)		if ((this->inactiveObjects > (int)0)) {
HXLINE( 103)			 ::openfl::geom::Point object1 = null();
HXDLIN( 103)			if (hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 103)				object1 = this->_hx___inactiveObject0;
HXDLIN( 103)				this->_hx___inactiveObject0 = null();
            			}
            			else {
HXLINE( 103)				if (hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 103)					object1 = this->_hx___inactiveObject1;
HXDLIN( 103)					this->_hx___inactiveObject1 = null();
            				}
            				else {
HXLINE( 103)					object1 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::geom::Point >();
HXDLIN( 103)					if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE( 103)						this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::geom::Point >();
            					}
HXDLIN( 103)					if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE( 103)						this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::geom::Point >();
            					}
            				}
            			}
HXDLIN( 103)			this->inactiveObjects--;
HXDLIN( 103)			this->activeObjects++;
HXDLIN( 103)			object = object1;
            		}
            		else {
HXLINE( 105)			bool _hx_tmp;
HXDLIN( 105)			if (hx::IsNotNull( this->_hx___size )) {
HXLINE( 105)				_hx_tmp = hx::IsLess( this->activeObjects,this->_hx___size );
            			}
            			else {
HXLINE( 105)				_hx_tmp = true;
            			}
HXDLIN( 105)			if (_hx_tmp) {
HXLINE( 107)				object = ( ( ::openfl::geom::Point)(this->create()) );
HXLINE( 109)				if (hx::IsNotNull( object )) {
HXLINE( 111)					::haxe::IMap_obj::set(this->_hx___pool,object,true);
HXLINE( 112)					this->activeObjects++;
            				}
            			}
            		}
HXLINE( 118)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Point_obj,get,return )

void ObjectPool_openfl_geom_Point_obj::release( ::openfl::geom::Point object){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_123_release)
HXLINE( 137)		this->activeObjects--;
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (hx::IsNotNull( this->_hx___size )) {
HXLINE( 139)			_hx_tmp = hx::IsLess( (this->activeObjects + this->inactiveObjects),this->_hx___size );
            		}
            		else {
HXLINE( 139)			_hx_tmp = true;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 141)			this->clean(object);
HXLINE( 142)			{
HXLINE( 142)				if (hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 142)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE( 142)					if (hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 142)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE( 142)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN( 142)				this->inactiveObjects++;
            			}
            		}
            		else {
HXLINE( 146)			::haxe::IMap_obj::remove(this->_hx___pool,object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Point_obj,release,(void))

void ObjectPool_openfl_geom_Point_obj::_hx___addInactive( ::openfl::geom::Point object){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_153___addInactive)
HXLINE( 159)		if (hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 161)			this->_hx___inactiveObject0 = object;
            		}
            		else {
HXLINE( 163)			if (hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 165)				this->_hx___inactiveObject1 = object;
            			}
            			else {
HXLINE( 169)				this->_hx___inactiveObjectList->add(object);
            			}
            		}
HXLINE( 173)		this->inactiveObjects++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Point_obj,_hx___addInactive,(void))

 ::openfl::geom::Point ObjectPool_openfl_geom_Point_obj::_hx___getInactive(){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_178___getInactive)
HXLINE( 180)		 ::openfl::geom::Point object = null();
HXLINE( 182)		if (hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 184)			object = this->_hx___inactiveObject0;
HXLINE( 185)			this->_hx___inactiveObject0 = null();
            		}
            		else {
HXLINE( 187)			if (hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 189)				object = this->_hx___inactiveObject1;
HXLINE( 190)				this->_hx___inactiveObject1 = null();
            			}
            			else {
HXLINE( 194)				object = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::geom::Point >();
HXLINE( 196)				if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE( 198)					this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::geom::Point >();
            				}
HXLINE( 202)				if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE( 204)					this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::geom::Point >();
            				}
            			}
            		}
HXLINE( 214)		this->inactiveObjects--;
HXLINE( 215)		this->activeObjects++;
HXLINE( 217)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Point_obj,_hx___getInactive,return )

void ObjectPool_openfl_geom_Point_obj::_hx___removeInactive(int count){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_222___removeInactive)
HXLINE( 224)		bool _hx_tmp;
HXDLIN( 224)		if ((count > (int)0)) {
HXLINE( 224)			_hx_tmp = (this->inactiveObjects == (int)0);
            		}
            		else {
HXLINE( 224)			_hx_tmp = true;
            		}
HXDLIN( 224)		if (_hx_tmp) {
HXLINE( 224)			return;
            		}
HXLINE( 226)		if (hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 228)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject0);
HXLINE( 229)			this->_hx___inactiveObject0 = null();
HXLINE( 230)			this->inactiveObjects--;
HXLINE( 231)			count = (count - (int)1);
            		}
HXLINE( 235)		bool _hx_tmp1;
HXDLIN( 235)		if ((count != (int)0)) {
HXLINE( 235)			_hx_tmp1 = (this->inactiveObjects == (int)0);
            		}
            		else {
HXLINE( 235)			_hx_tmp1 = true;
            		}
HXDLIN( 235)		if (_hx_tmp1) {
HXLINE( 235)			return;
            		}
HXLINE( 237)		if (hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 239)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject1);
HXLINE( 240)			this->_hx___inactiveObject1 = null();
HXLINE( 241)			this->inactiveObjects--;
HXLINE( 242)			count = (count - (int)1);
            		}
HXLINE( 246)		bool _hx_tmp2;
HXDLIN( 246)		if ((count != (int)0)) {
HXLINE( 246)			_hx_tmp2 = (this->inactiveObjects == (int)0);
            		}
            		else {
HXLINE( 246)			_hx_tmp2 = true;
            		}
HXDLIN( 246)		if (_hx_tmp2) {
HXLINE( 246)			return;
            		}
HXLINE( 248)		{
HXLINE( 248)			 ::_List::ListNode _g_head = this->_hx___inactiveObjectList->h;
HXDLIN( 248)			while(hx::IsNotNull( _g_head )){
HXLINE( 248)				 ::openfl::geom::Point val = ( ( ::openfl::geom::Point)(_g_head->item) );
HXDLIN( 248)				_g_head = _g_head->next;
HXDLIN( 248)				 ::openfl::geom::Point object = val;
HXLINE( 250)				::haxe::IMap_obj::remove(this->_hx___pool,object);
HXLINE( 251)				this->_hx___inactiveObjectList->remove(object);
HXLINE( 252)				this->inactiveObjects--;
HXLINE( 253)				count = (count - (int)1);
HXLINE( 255)				bool _hx_tmp3;
HXDLIN( 255)				if ((count != (int)0)) {
HXLINE( 255)					_hx_tmp3 = (this->inactiveObjects == (int)0);
            				}
            				else {
HXLINE( 255)					_hx_tmp3 = true;
            				}
HXDLIN( 255)				if (_hx_tmp3) {
HXLINE( 255)					return;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Point_obj,_hx___removeInactive,(void))

 ::Dynamic ObjectPool_openfl_geom_Point_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_271_get_size)
HXLINE( 271)		return this->_hx___size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl_geom_Point_obj,get_size,return )

 ::Dynamic ObjectPool_openfl_geom_Point_obj::set_size( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_68de5308f7101ccb_276_set_size)
HXLINE( 278)		if (hx::IsNull( value )) {
HXLINE( 280)			this->_hx___size = null();
            		}
            		else {
HXLINE( 284)			int current = (this->inactiveObjects + this->activeObjects);
HXLINE( 285)			this->_hx___size = value;
HXLINE( 287)			if (hx::IsGreater( current,value )) {
HXLINE( 289)				this->_hx___removeInactive((current - value));
            			}
            			else {
HXLINE( 291)				if (hx::IsGreater( value,current )) {
HXLINE( 293)					 ::openfl::geom::Point object;
HXLINE( 295)					{
HXLINE( 295)						int _g1 = (int)0;
HXDLIN( 295)						int _g = (value - current);
HXDLIN( 295)						while((_g1 < _g)){
HXLINE( 295)							_g1 = (_g1 + (int)1);
HXDLIN( 295)							int i = (_g1 - (int)1);
HXLINE( 297)							object = ( ( ::openfl::geom::Point)(this->create()) );
HXLINE( 299)							if (hx::IsNotNull( object )) {
HXLINE( 301)								::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE( 302)								this->_hx___inactiveObjectList->add(object);
HXLINE( 303)								this->inactiveObjects++;
            							}
            							else {
HXLINE( 307)								goto _hx_goto_12;
            							}
            						}
            						_hx_goto_12:;
            					}
            				}
            			}
            		}
HXLINE( 317)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl_geom_Point_obj,set_size,return )


void ObjectPool_openfl_geom_Point_obj::__alloc_dynamic_functions(hx::Ctx *_hx_ctx,ObjectPool_openfl_geom_Point_obj *_hx_obj) {
	if (!_hx_obj->create.mPtr) _hx_obj->create = new __default_create(_hx_obj);
	if (!_hx_obj->clean.mPtr) _hx_obj->clean = new __default_clean(_hx_obj);
}
hx::ObjectPtr< ObjectPool_openfl_geom_Point_obj > ObjectPool_openfl_geom_Point_obj::__new( ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	hx::ObjectPtr< ObjectPool_openfl_geom_Point_obj > __this = new ObjectPool_openfl_geom_Point_obj();
	__this->__construct(create,clean,size);
	return __this;
}

hx::ObjectPtr< ObjectPool_openfl_geom_Point_obj > ObjectPool_openfl_geom_Point_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	ObjectPool_openfl_geom_Point_obj *__this = (ObjectPool_openfl_geom_Point_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectPool_openfl_geom_Point_obj), true, "lime.utils.ObjectPool_openfl_geom_Point"));
	*(void **)__this = ObjectPool_openfl_geom_Point_obj::_hx_vtable;
	lime::utils::ObjectPool_openfl_geom_Point_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(create,clean,size);
	return __this;
}

ObjectPool_openfl_geom_Point_obj::ObjectPool_openfl_geom_Point_obj()
{
	create = new __default_create(this);
	clean = new __default_clean(this);
}

void ObjectPool_openfl_geom_Point_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool_openfl_geom_Point);
	HX_MARK_MEMBER_NAME(activeObjects,"activeObjects");
	HX_MARK_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_MARK_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_MARK_MEMBER_NAME(_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(_hx___size,"__size");
	HX_MARK_MEMBER_NAME(clean,"clean");
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_END_CLASS();
}

void ObjectPool_openfl_geom_Point_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeObjects,"activeObjects");
	HX_VISIT_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_VISIT_MEMBER_NAME(_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(_hx___size,"__size");
	HX_VISIT_MEMBER_NAME(clean,"clean");
	HX_VISIT_MEMBER_NAME(create,"create");
}

hx::Val ObjectPool_openfl_geom_Point_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_size()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { return hx::Val( clean); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { return hx::Val( _hx___pool); }
		if (HX_FIELD_EQ(inName,"__size") ) { return hx::Val( _hx___size); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return hx::Val( get_size_dyn()); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return hx::Val( set_size_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return hx::Val( activeObjects); }
		if (HX_FIELD_EQ(inName,"__addInactive") ) { return hx::Val( _hx___addInactive_dyn()); }
		if (HX_FIELD_EQ(inName,"__getInactive") ) { return hx::Val( _hx___getInactive_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { return hx::Val( inactiveObjects); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__removeInactive") ) { return hx::Val( _hx___removeInactive_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { return hx::Val( _hx___inactiveObject0); }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { return hx::Val( _hx___inactiveObject1); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { return hx::Val( _hx___inactiveObjectList); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectPool_openfl_geom_Point_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_size(inValue) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { clean=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"create") ) { create=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { inactiveObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { _hx___inactiveObject0=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { _hx___inactiveObject1=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { _hx___inactiveObjectList=inValue.Cast<  ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_openfl_geom_Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"));
	outFields->push(HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("__inactiveObject0","\x46","\x3d","\x21","\x7f"));
	outFields->push(HX_HCSTRING("__inactiveObject1","\x47","\x3d","\x21","\x7f"));
	outFields->push(HX_HCSTRING("__inactiveObjectList","\x28","\xdd","\x99","\x7e"));
	outFields->push(HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"));
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectPool_openfl_geom_Point_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectPool_openfl_geom_Point_obj,activeObjects),HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a")},
	{hx::fsInt,(int)offsetof(ObjectPool_openfl_geom_Point_obj,inactiveObjects),HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,_hx___inactiveObject0),HX_HCSTRING("__inactiveObject0","\x46","\x3d","\x21","\x7f")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,_hx___inactiveObject1),HX_HCSTRING("__inactiveObject1","\x47","\x3d","\x21","\x7f")},
	{hx::fsObject /*::List*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,_hx___inactiveObjectList),HX_HCSTRING("__inactiveObjectList","\x28","\xdd","\x99","\x7e")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,_hx___pool),HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,_hx___size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,clean),HX_HCSTRING("clean","\x89","\x71","\x5b","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl_geom_Point_obj,create),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectPool_openfl_geom_Point_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectPool_openfl_geom_Point_obj_sMemberFields[] = {
	HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"),
	HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb"),
	HX_HCSTRING("__inactiveObject0","\x46","\x3d","\x21","\x7f"),
	HX_HCSTRING("__inactiveObject1","\x47","\x3d","\x21","\x7f"),
	HX_HCSTRING("__inactiveObjectList","\x28","\xdd","\x99","\x7e"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("__addInactive","\x8c","\x8f","\x04","\xe4"),
	HX_HCSTRING("__getInactive","\x01","\x1b","\x9c","\xd8"),
	HX_HCSTRING("__removeInactive","\xef","\xde","\xc5","\x68"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	::String(null()) };

static void ObjectPool_openfl_geom_Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPool_openfl_geom_Point_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectPool_openfl_geom_Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_openfl_geom_Point_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPool_openfl_geom_Point_obj::__mClass;

void ObjectPool_openfl_geom_Point_obj::__register()
{
	hx::Object *dummy = new ObjectPool_openfl_geom_Point_obj;
	ObjectPool_openfl_geom_Point_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ObjectPool_openfl_geom_Point","\xae","\xb7","\xf5","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectPool_openfl_geom_Point_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectPool_openfl_geom_Point_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPool_openfl_geom_Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectPool_openfl_geom_Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectPool_openfl_geom_Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectPool_openfl_geom_Point_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
