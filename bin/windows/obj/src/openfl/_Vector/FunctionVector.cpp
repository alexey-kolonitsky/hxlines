// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_FunctionVector
#include <openfl/_Vector/FunctionVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f37013fa3e7b7067_884_new,"openfl._Vector.FunctionVector","new",0x9bdddf17,"openfl._Vector.FunctionVector.new","openfl/Vector.hx",884,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_907_concat,"openfl._Vector.FunctionVector","concat",0x3878c6bd,"openfl._Vector.FunctionVector.concat","openfl/Vector.hx",907,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_922_copy,"openfl._Vector.FunctionVector","copy",0xbf078d1e,"openfl._Vector.FunctionVector.copy","openfl/Vector.hx",922,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_929_get,"openfl._Vector.FunctionVector","get",0x9bd88f4d,"openfl._Vector.FunctionVector.get","openfl/Vector.hx",929,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_942_indexOf,"openfl._Vector.FunctionVector","indexOf",0x03bc7f00,"openfl._Vector.FunctionVector.indexOf","openfl/Vector.hx",942,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_961_insertAt,"openfl._Vector.FunctionVector","insertAt",0x3cb1b675,"openfl._Vector.FunctionVector.insertAt","openfl/Vector.hx",961,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_972_iterator,"openfl._Vector.FunctionVector","iterator",0x0e2c83d7,"openfl._Vector.FunctionVector.iterator","openfl/Vector.hx",972,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_979_join,"openfl._Vector.FunctionVector","join",0xc3a80553,"openfl._Vector.FunctionVector.join","openfl/Vector.hx",979,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_984_lastIndexOf,"openfl._Vector.FunctionVector","lastIndexOf",0xc9451aca,"openfl._Vector.FunctionVector.lastIndexOf","openfl/Vector.hx",984,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1002_pop,"openfl._Vector.FunctionVector","pop",0x9bdf6c48,"openfl._Vector.FunctionVector.pop","openfl/Vector.hx",1002,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1017_push,"openfl._Vector.FunctionVector","push",0xc7a3e343,"openfl._Vector.FunctionVector.push","openfl/Vector.hx",1017,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1030_reverse,"openfl._Vector.FunctionVector","reverse",0x3df96f59,"openfl._Vector.FunctionVector.reverse","openfl/Vector.hx",1030,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1040_set,"openfl._Vector.FunctionVector","set",0x9be1aa59,"openfl._Vector.FunctionVector.set","openfl/Vector.hx",1040,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1055_shift,"openfl._Vector.FunctionVector","shift",0x995756f9,"openfl._Vector.FunctionVector.shift","openfl/Vector.hx",1055,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1070_slice,"openfl._Vector.FunctionVector","slice",0x9bfc2ec9,"openfl._Vector.FunctionVector.slice","openfl/Vector.hx",1070,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1077_sort,"openfl._Vector.FunctionVector","sort",0xc99af8c7,"openfl._Vector.FunctionVector.sort","openfl/Vector.hx",1077,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1084_splice,"openfl._Vector.FunctionVector","splice",0x30474325,"openfl._Vector.FunctionVector.splice","openfl/Vector.hx",1084,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1091_toString,"openfl._Vector.FunctionVector","toString",0xb3010a95,"openfl._Vector.FunctionVector.toString","openfl/Vector.hx",1091,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1098_unshift,"openfl._Vector.FunctionVector","unshift",0x9bb119c0,"openfl._Vector.FunctionVector.unshift","openfl/Vector.hx",1098,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1116_get_length,"openfl._Vector.FunctionVector","get_length",0x7e924ad8,"openfl._Vector.FunctionVector.get_length","openfl/Vector.hx",1116,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_f37013fa3e7b7067_1121_set_length,"openfl._Vector.FunctionVector","set_length",0x820fe94c,"openfl._Vector.FunctionVector.set_length","openfl/Vector.hx",1121,0x4a01873c)
namespace openfl{
namespace _Vector{

void FunctionVector_obj::__construct( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_884_new)
HXLINE( 886)		if (hx::IsNull( array )) {
HXLINE( 888)			array = ::cpp::VirtualArray_obj::__new();
            		}
HXLINE( 892)		this->_hx___array = array;
HXLINE( 894)		if (hx::IsNotNull( length )) {
HXLINE( 896)			this->set_length(length);
            		}
HXLINE( 900)		this->fixed = hx::IsEq( fixed,true );
            	}

Dynamic FunctionVector_obj::__CreateEmpty() { return new FunctionVector_obj; }

void *FunctionVector_obj::_hx_vtable = 0;

Dynamic FunctionVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FunctionVector_obj > _hx_result = new FunctionVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FunctionVector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3899d30d;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_FunctionVector__hx_openfl__Vector_IVector= {
	( int (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::get_length,
	( int (hx::Object::*)(int))&::openfl::_Vector::FunctionVector_obj::set_length,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::openfl::_Vector::FunctionVector_obj::concat,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::copy,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::FunctionVector_obj::get,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::FunctionVector_obj::indexOf,
	( void (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::FunctionVector_obj::insertAt,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::iterator,
	( ::String (hx::Object::*)(::String))&::openfl::_Vector::FunctionVector_obj::join,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::FunctionVector_obj::lastIndexOf,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::pop,
	( int (hx::Object::*)( ::Dynamic))&::openfl::_Vector::FunctionVector_obj::push,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::reverse,
	(  ::Dynamic (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::FunctionVector_obj::set,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::shift,
	( ::Dynamic (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::FunctionVector_obj::slice,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::FunctionVector_obj::sort,
	( ::Dynamic (hx::Object::*)(int,int))&::openfl::_Vector::FunctionVector_obj::splice,
	( ::String (hx::Object::*)())&::openfl::_Vector::FunctionVector_obj::toString,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::FunctionVector_obj::unshift,
};

void *FunctionVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_FunctionVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic FunctionVector_obj::concat(::Dynamic a){
            	HX_GC_STACKFRAME(&_hx_pos_f37013fa3e7b7067_907_concat)
HXLINE( 907)		if (hx::IsNull( a )) {
HXLINE( 909)			return  ::openfl::_Vector::FunctionVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            		}
            		else {
HXLINE( 913)			::cpp::VirtualArray _hx_tmp = this->_hx___array;
HXDLIN( 913)			return  ::openfl::_Vector::FunctionVector_obj::__alloc( HX_CTX ,null(),null(),_hx_tmp->concat(hx::TCast<  ::openfl::_Vector::FunctionVector >::cast(a)->_hx___array));
            		}
HXLINE( 907)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,concat,return )

::Dynamic FunctionVector_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_f37013fa3e7b7067_922_copy)
HXLINE( 922)		bool _hx_tmp = this->fixed;
HXDLIN( 922)		return  ::openfl::_Vector::FunctionVector_obj::__alloc( HX_CTX ,null(),_hx_tmp,this->_hx___array->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,copy,return )

 ::Dynamic FunctionVector_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_929_get)
HXLINE( 929)		if ((index >= this->_hx___array->get_length())) {
HXLINE( 931)			return null();
            		}
            		else {
HXLINE( 935)			return this->_hx___array->__get(index);
            		}
HXLINE( 929)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,get,return )

int FunctionVector_obj::indexOf( ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_942_indexOf)
HXLINE( 944)		{
HXLINE( 944)			int _g1 = from;
HXDLIN( 944)			int _g = this->_hx___array->get_length();
HXDLIN( 944)			while((_g1 < _g)){
HXLINE( 944)				_g1 = (_g1 + (int)1);
HXDLIN( 944)				int i = (_g1 - (int)1);
HXLINE( 946)				if (::Reflect_obj::compareMethods(this->_hx___array->__get(i),x)) {
HXLINE( 948)					return i;
            				}
            			}
            		}
HXLINE( 954)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,indexOf,return )

void FunctionVector_obj::insertAt(int index, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_961_insertAt)
HXLINE( 961)		bool _hx_tmp;
HXDLIN( 961)		if (!(!(this->fixed))) {
HXLINE( 961)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXLINE( 961)			_hx_tmp = true;
            		}
HXDLIN( 961)		if (_hx_tmp) {
HXLINE( 963)			this->_hx___array->insert(index,element);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,insertAt,(void))

 ::Dynamic FunctionVector_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_972_iterator)
HXLINE( 972)		return this->_hx___array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,iterator,return )

::String FunctionVector_obj::join(::String sep){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_979_join)
HXLINE( 979)		return this->_hx___array->join(sep);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,join,return )

int FunctionVector_obj::lastIndexOf( ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_984_lastIndexOf)
HXLINE( 986)		int i = (this->_hx___array->get_length() - (int)1);
HXLINE( 988)		while(hx::IsGreaterEq( i,from )){
HXLINE( 990)			if (::Reflect_obj::compareMethods(this->_hx___array->__get(i),x)) {
HXLINE( 990)				return i;
            			}
HXLINE( 991)			i = (i - (int)1);
            		}
HXLINE( 995)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,lastIndexOf,return )

 ::Dynamic FunctionVector_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1002_pop)
HXLINE(1002)		if (!(this->fixed)) {
HXLINE(1004)			return this->_hx___array->pop();
            		}
            		else {
HXLINE(1008)			return null();
            		}
HXLINE(1002)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,pop,return )

int FunctionVector_obj::push( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1017_push)
HXLINE(1017)		if (!(this->fixed)) {
HXLINE(1019)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE(1023)			return this->_hx___array->get_length();
            		}
HXLINE(1017)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,push,return )

::Dynamic FunctionVector_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1030_reverse)
HXLINE(1032)		this->_hx___array->reverse();
HXLINE(1033)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,reverse,return )

 ::Dynamic FunctionVector_obj::set(int index, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1040_set)
HXLINE(1040)		bool _hx_tmp;
HXDLIN(1040)		if (!(!(this->fixed))) {
HXLINE(1040)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXLINE(1040)			_hx_tmp = true;
            		}
HXDLIN(1040)		if (_hx_tmp) {
HXLINE(1042)			return (this->_hx___array->set(index,value));
            		}
            		else {
HXLINE(1046)			return value;
            		}
HXLINE(1040)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,set,return )

 ::Dynamic FunctionVector_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1055_shift)
HXLINE(1055)		if (!(this->fixed)) {
HXLINE(1057)			return this->_hx___array->shift();
            		}
            		else {
HXLINE(1061)			return null();
            		}
HXLINE(1055)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,shift,return )

::Dynamic FunctionVector_obj::slice( ::Dynamic __o_startIndex, ::Dynamic __o_endIndex){
 ::Dynamic startIndex = __o_startIndex.Default(0);
 ::Dynamic endIndex = __o_endIndex.Default(16777215);
            	HX_GC_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1070_slice)
HXLINE(1070)		return  ::openfl::_Vector::FunctionVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->slice(startIndex,endIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,slice,return )

void FunctionVector_obj::sort( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1077_sort)
HXLINE(1077)		this->_hx___array->sort(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,sort,(void))

::Dynamic FunctionVector_obj::splice(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1084_splice)
HXLINE(1084)		return  ::openfl::_Vector::FunctionVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->splice(pos,len));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,splice,return )

::String FunctionVector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1091_toString)
HXLINE(1091)		if (hx::IsNotNull( this->_hx___array )) {
HXLINE(1091)			return this->_hx___array->toString();
            		}
            		else {
HXLINE(1091)			return null();
            		}
HXDLIN(1091)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,toString,return )

void FunctionVector_obj::unshift( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1098_unshift)
HXLINE(1098)		if (!(this->fixed)) {
HXLINE(1100)			this->_hx___array->unshift(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,unshift,(void))

int FunctionVector_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1116_get_length)
HXLINE(1116)		return this->_hx___array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,get_length,return )

int FunctionVector_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_f37013fa3e7b7067_1121_set_length)
HXLINE(1123)		if (!(this->fixed)) {
HXLINE(1127)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE(1156)		return this->_hx___array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,set_length,return )


hx::ObjectPtr< FunctionVector_obj > FunctionVector_obj::__new( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array) {
	hx::ObjectPtr< FunctionVector_obj > __this = new FunctionVector_obj();
	__this->__construct(length,fixed,array);
	return __this;
}

hx::ObjectPtr< FunctionVector_obj > FunctionVector_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array) {
	FunctionVector_obj *__this = (FunctionVector_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FunctionVector_obj), true, "openfl._Vector.FunctionVector"));
	*(void **)__this = FunctionVector_obj::_hx_vtable;
	__this->__construct(length,fixed,array);
	return __this;
}

FunctionVector_obj::FunctionVector_obj()
{
}

void FunctionVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void FunctionVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

hx::Val FunctionVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn()); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn()); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn()); }
		if (HX_FIELD_EQ(inName,"join") ) { return hx::Val( join_dyn()); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn()); }
		if (HX_FIELD_EQ(inName,"sort") ) { return hx::Val( sort_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return hx::Val( fixed); }
		if (HX_FIELD_EQ(inName,"shift") ) { return hx::Val( shift_dyn()); }
		if (HX_FIELD_EQ(inName,"slice") ) { return hx::Val( slice_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_length()); }
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		if (HX_FIELD_EQ(inName,"splice") ) { return hx::Val( splice_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return hx::Val( _hx___array); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn()); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn()); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return hx::Val( unshift_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return hx::Val( insertAt_dyn()); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn()); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return hx::Val( lastIndexOf_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FunctionVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FunctionVector_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FunctionVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FunctionVector_obj,_hx___array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FunctionVector_obj_sStaticStorageInfo = 0;
#endif

static ::String FunctionVector_obj_sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void FunctionVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunctionVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FunctionVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunctionVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FunctionVector_obj::__mClass;

void FunctionVector_obj::__register()
{
	hx::Object *dummy = new FunctionVector_obj;
	FunctionVector_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.FunctionVector","\xa5","\x07","\x75","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FunctionVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FunctionVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FunctionVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FunctionVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FunctionVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FunctionVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
