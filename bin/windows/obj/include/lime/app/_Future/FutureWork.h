// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_app__Future_FutureWork
#define INCLUDED_lime_app__Future_FutureWork

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,app,_Future,FutureWork)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)

namespace lime{
namespace app{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES FutureWork_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FutureWork_obj OBJ_;
		FutureWork_obj();

	public:
		enum { _hx_ClassId = 0x594b82aa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.app._Future.FutureWork")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.app._Future.FutureWork"); }

		hx::ObjectPtr< FutureWork_obj > __new() {
			hx::ObjectPtr< FutureWork_obj > __this = new FutureWork_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FutureWork_obj > __alloc(hx::Ctx *_hx_ctx) {
			FutureWork_obj *__this = (FutureWork_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FutureWork_obj), false, "lime.app._Future.FutureWork"));
			*(void **)__this = FutureWork_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FutureWork_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FutureWork","\xd4","\xa7","\xda","\xde"); }

		static  ::lime::_hx_system::ThreadPool threadPool;
		static void queue( ::Dynamic state);
		static ::Dynamic queue_dyn();

		static void threadPool_doWork( ::Dynamic state);
		static ::Dynamic threadPool_doWork_dyn();

		static void threadPool_onComplete( ::Dynamic state);
		static ::Dynamic threadPool_onComplete_dyn();

		static void threadPool_onError( ::Dynamic state);
		static ::Dynamic threadPool_onError_dyn();

};

} // end namespace lime
} // end namespace app
} // end namespace _Future

#endif /* INCLUDED_lime_app__Future_FutureWork */ 
