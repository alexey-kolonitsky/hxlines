// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#include <openfl/_internal/utils/PerlinNoise.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9149717b628345a7_90_new,"openfl._internal.utils.PerlinNoise","new",0x0294f3cb,"openfl._internal.utils.PerlinNoise.new","openfl/_internal/utils/PerlinNoise.hx",90,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_99_fill,"openfl._internal.utils.PerlinNoise","fill",0x3a79a8b8,"openfl._internal.utils.PerlinNoise.fill","openfl/_internal/utils/PerlinNoise.hx",99,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_205_octFreqPers,"openfl._internal.utils.PerlinNoise","octFreqPers",0x79fea539,"openfl._internal.utils.PerlinNoise.octFreqPers","openfl/_internal/utils/PerlinNoise.hx",205,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_224_seedOffset,"openfl._internal.utils.PerlinNoise","seedOffset",0x045eabd9,"openfl._internal.utils.PerlinNoise.seedOffset","openfl/_internal/utils/PerlinNoise.hx",224,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_22_boot,"openfl._internal.utils.PerlinNoise","boot",0x37d95e67,"openfl._internal.utils.PerlinNoise.boot","openfl/_internal/utils/PerlinNoise.hx",22,0x13a5c608)
static const int _hx_array_data_42eeb259_9[] = {
	(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,
};
namespace openfl{
namespace _internal{
namespace utils{

void PerlinNoise_obj::__construct( ::Dynamic seed, ::Dynamic octaves, ::Dynamic falloff){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_90_new)
HXLINE(  91)		if (hx::IsNull( seed )) {
HXLINE(  91)			seed = (int)123;
            		}
HXLINE(  92)		if (hx::IsNull( falloff )) {
HXLINE(  92)			falloff = ((Float).5);
            		}
HXLINE(  93)		int _hx_tmp;
HXDLIN(  93)		if (hx::IsNull( octaves )) {
HXLINE(  93)			_hx_tmp = (int)4;
            		}
            		else {
HXLINE(  93)			_hx_tmp = octaves;
            		}
HXDLIN(  93)		this->octaves = _hx_tmp;
HXLINE(  94)		this->baseFactor = ((Float)0.015625);
HXLINE(  95)		this->seedOffset(seed);
HXLINE(  96)		this->octFreqPers(falloff);
            	}

Dynamic PerlinNoise_obj::__CreateEmpty() { return new PerlinNoise_obj; }

void *PerlinNoise_obj::_hx_vtable = 0;

Dynamic PerlinNoise_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PerlinNoise_obj > _hx_result = new PerlinNoise_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool PerlinNoise_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6189bcdd;
}

void PerlinNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _x,Float _y,Float _z, ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_99_fill)
HXLINE( 101)		Float baseX = ((_x * this->baseFactor) + this->iXoffset);
HXLINE( 104)		_y = ((_y * this->baseFactor) + this->iYoffset);
HXLINE( 105)		_z = ((_z * this->baseFactor) + this->iZoffset);
HXLINE( 107)		int width = bitmap->width;
HXLINE( 108)		int height = bitmap->height;
HXLINE( 110)		::Array< int > p = ::openfl::_internal::utils::PerlinNoise_obj::P;
HXLINE( 111)		int octaves = this->octaves;
HXLINE( 112)		::Array< Float > aOctFreq = this->aOctFreq;
HXLINE( 113)		::Array< Float > aOctPers = this->aOctPers;
HXLINE( 115)		{
HXLINE( 115)			int _g1 = (int)0;
HXDLIN( 115)			int _g = height;
HXDLIN( 115)			while((_g1 < _g)){
HXLINE( 115)				_g1 = (_g1 + (int)1);
HXDLIN( 115)				int py = (_g1 - (int)1);
HXLINE( 117)				_x = baseX;
HXLINE( 119)				{
HXLINE( 119)					int _g3 = (int)0;
HXDLIN( 119)					int _g2 = width;
HXDLIN( 119)					while((_g3 < _g2)){
HXLINE( 119)						_g3 = (_g3 + (int)1);
HXDLIN( 119)						int px = (_g3 - (int)1);
HXLINE( 121)						Float s = ((Float)0.);
HXLINE( 123)						{
HXLINE( 123)							int _g5 = (int)0;
HXDLIN( 123)							int _g4 = octaves;
HXDLIN( 123)							while((_g5 < _g4)){
HXLINE( 123)								_g5 = (_g5 + (int)1);
HXDLIN( 123)								int i = (_g5 - (int)1);
HXLINE( 125)								Float fFreq = aOctFreq->__get(i);
HXLINE( 126)								Float fPers = aOctPers->__get(i);
HXLINE( 128)								Float x = (_x * fFreq);
HXLINE( 129)								Float y = (_y * fFreq);
HXLINE( 130)								Float z = (_z * fFreq);
HXLINE( 132)								Float xf = (x - hx::Mod(x,(int)1));
HXLINE( 133)								Float yf = (y - hx::Mod(y,(int)1));
HXLINE( 134)								Float zf = (z - hx::Mod(z,(int)1));
HXLINE( 136)								int X = ((int)::Std_obj::_hx_int(xf) & (int)(int)255);
HXLINE( 137)								int Y = ((int)::Std_obj::_hx_int(yf) & (int)(int)255);
HXLINE( 138)								int Z = ((int)::Std_obj::_hx_int(zf) & (int)(int)255);
HXLINE( 140)								x = (x - xf);
HXLINE( 141)								y = (y - yf);
HXLINE( 142)								z = (z - zf);
HXLINE( 144)								Float u = (((x * x) * x) * ((x * ((x * (int)6) - (int)15)) + (int)10));
HXLINE( 145)								Float v = (((y * y) * y) * ((y * ((y * (int)6) - (int)15)) + (int)10));
HXLINE( 146)								Float w = (((z * z) * z) * ((z * ((z * (int)6) - (int)15)) + (int)10));
HXLINE( 148)								int A = (p->__get(X) + Y);
HXLINE( 149)								int AA = (p->__get(A) + Z);
HXLINE( 150)								int AB = (p->__get((A + (int)1)) + Z);
HXLINE( 151)								int B = (p->__get((X + (int)1)) + Y);
HXLINE( 152)								int BA = (p->__get(B) + Z);
HXLINE( 153)								int BB = (p->__get((B + (int)1)) + Z);
HXLINE( 155)								Float x1 = (x - (int)1);
HXLINE( 156)								Float y1 = (y - (int)1);
HXLINE( 157)								Float z1 = (z - (int)1);
HXLINE( 159)								int hash = ((int)p->__get((BB + (int)1)) & (int)(int)15);
HXLINE( 160)								Float g1;
HXDLIN( 160)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 160)									if ((hash < (int)8)) {
HXLINE( 160)										g1 = x1;
            									}
            									else {
HXLINE( 160)										g1 = y1;
            									}
            								}
            								else {
HXLINE( 160)									if ((hash < (int)8)) {
HXLINE( 160)										g1 = -(x1);
            									}
            									else {
HXLINE( 160)										g1 = -(y1);
            									}
            								}
HXDLIN( 160)								Float g11;
HXDLIN( 160)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 160)									if ((hash < (int)4)) {
HXLINE( 160)										g11 = y1;
            									}
            									else {
HXLINE( 160)										if ((hash == (int)12)) {
HXLINE( 160)											g11 = x1;
            										}
            										else {
HXLINE( 160)											g11 = z1;
            										}
            									}
            								}
            								else {
HXLINE( 160)									if ((hash < (int)4)) {
HXLINE( 160)										g11 = -(y1);
            									}
            									else {
HXLINE( 160)										if ((hash == (int)14)) {
HXLINE( 160)											g11 = -(x1);
            										}
            										else {
HXLINE( 160)											g11 = -(z1);
            										}
            									}
            								}
HXDLIN( 160)								Float g12 = (g1 + g11);
HXLINE( 162)								hash = ((int)p->__get((AB + (int)1)) & (int)(int)15);
HXLINE( 163)								Float g2;
HXDLIN( 163)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 163)									if ((hash < (int)8)) {
HXLINE( 163)										g2 = x;
            									}
            									else {
HXLINE( 163)										g2 = y1;
            									}
            								}
            								else {
HXLINE( 163)									if ((hash < (int)8)) {
HXLINE( 163)										g2 = -(x);
            									}
            									else {
HXLINE( 163)										g2 = -(y1);
            									}
            								}
HXDLIN( 163)								Float g21;
HXDLIN( 163)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 163)									if ((hash < (int)4)) {
HXLINE( 163)										g21 = y1;
            									}
            									else {
HXLINE( 163)										if ((hash == (int)12)) {
HXLINE( 163)											g21 = x;
            										}
            										else {
HXLINE( 163)											g21 = z1;
            										}
            									}
            								}
            								else {
HXLINE( 163)									if ((hash < (int)4)) {
HXLINE( 163)										g21 = -(y1);
            									}
            									else {
HXLINE( 163)										if ((hash == (int)14)) {
HXLINE( 163)											g21 = -(x);
            										}
            										else {
HXLINE( 163)											g21 = -(z1);
            										}
            									}
            								}
HXDLIN( 163)								Float g22 = (g2 + g21);
HXLINE( 165)								hash = ((int)p->__get((BA + (int)1)) & (int)(int)15);
HXLINE( 166)								Float g3;
HXDLIN( 166)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 166)									if ((hash < (int)8)) {
HXLINE( 166)										g3 = x1;
            									}
            									else {
HXLINE( 166)										g3 = y;
            									}
            								}
            								else {
HXLINE( 166)									if ((hash < (int)8)) {
HXLINE( 166)										g3 = -(x1);
            									}
            									else {
HXLINE( 166)										g3 = -(y);
            									}
            								}
HXDLIN( 166)								Float g31;
HXDLIN( 166)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 166)									if ((hash < (int)4)) {
HXLINE( 166)										g31 = y;
            									}
            									else {
HXLINE( 166)										if ((hash == (int)12)) {
HXLINE( 166)											g31 = x1;
            										}
            										else {
HXLINE( 166)											g31 = z1;
            										}
            									}
            								}
            								else {
HXLINE( 166)									if ((hash < (int)4)) {
HXLINE( 166)										g31 = -(y);
            									}
            									else {
HXLINE( 166)										if ((hash == (int)14)) {
HXLINE( 166)											g31 = -(x1);
            										}
            										else {
HXLINE( 166)											g31 = -(z1);
            										}
            									}
            								}
HXDLIN( 166)								Float g32 = (g3 + g31);
HXLINE( 168)								hash = ((int)p->__get((AA + (int)1)) & (int)(int)15);
HXLINE( 169)								Float g4;
HXDLIN( 169)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 169)									if ((hash < (int)8)) {
HXLINE( 169)										g4 = x;
            									}
            									else {
HXLINE( 169)										g4 = y;
            									}
            								}
            								else {
HXLINE( 169)									if ((hash < (int)8)) {
HXLINE( 169)										g4 = -(x);
            									}
            									else {
HXLINE( 169)										g4 = -(y);
            									}
            								}
HXDLIN( 169)								Float g41;
HXDLIN( 169)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 169)									if ((hash < (int)4)) {
HXLINE( 169)										g41 = y;
            									}
            									else {
HXLINE( 169)										if ((hash == (int)12)) {
HXLINE( 169)											g41 = x;
            										}
            										else {
HXLINE( 169)											g41 = z1;
            										}
            									}
            								}
            								else {
HXLINE( 169)									if ((hash < (int)4)) {
HXLINE( 169)										g41 = -(y);
            									}
            									else {
HXLINE( 169)										if ((hash == (int)14)) {
HXLINE( 169)											g41 = -(x);
            										}
            										else {
HXLINE( 169)											g41 = -(z1);
            										}
            									}
            								}
HXDLIN( 169)								Float g42 = (g4 + g41);
HXLINE( 171)								hash = ((int)p->__get(BB) & (int)(int)15);
HXLINE( 172)								Float g5;
HXDLIN( 172)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 172)									if ((hash < (int)8)) {
HXLINE( 172)										g5 = x1;
            									}
            									else {
HXLINE( 172)										g5 = y1;
            									}
            								}
            								else {
HXLINE( 172)									if ((hash < (int)8)) {
HXLINE( 172)										g5 = -(x1);
            									}
            									else {
HXLINE( 172)										g5 = -(y1);
            									}
            								}
HXDLIN( 172)								Float g51;
HXDLIN( 172)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 172)									if ((hash < (int)4)) {
HXLINE( 172)										g51 = y1;
            									}
            									else {
HXLINE( 172)										if ((hash == (int)12)) {
HXLINE( 172)											g51 = x1;
            										}
            										else {
HXLINE( 172)											g51 = z;
            										}
            									}
            								}
            								else {
HXLINE( 172)									if ((hash < (int)4)) {
HXLINE( 172)										g51 = -(y1);
            									}
            									else {
HXLINE( 172)										if ((hash == (int)14)) {
HXLINE( 172)											g51 = -(x1);
            										}
            										else {
HXLINE( 172)											g51 = -(z);
            										}
            									}
            								}
HXDLIN( 172)								Float g52 = (g5 + g51);
HXLINE( 174)								hash = ((int)p->__get(AB) & (int)(int)15);
HXLINE( 175)								Float g6;
HXDLIN( 175)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 175)									if ((hash < (int)8)) {
HXLINE( 175)										g6 = x;
            									}
            									else {
HXLINE( 175)										g6 = y1;
            									}
            								}
            								else {
HXLINE( 175)									if ((hash < (int)8)) {
HXLINE( 175)										g6 = -(x);
            									}
            									else {
HXLINE( 175)										g6 = -(y1);
            									}
            								}
HXDLIN( 175)								Float g61;
HXDLIN( 175)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 175)									if ((hash < (int)4)) {
HXLINE( 175)										g61 = y1;
            									}
            									else {
HXLINE( 175)										if ((hash == (int)12)) {
HXLINE( 175)											g61 = x;
            										}
            										else {
HXLINE( 175)											g61 = z;
            										}
            									}
            								}
            								else {
HXLINE( 175)									if ((hash < (int)4)) {
HXLINE( 175)										g61 = -(y1);
            									}
            									else {
HXLINE( 175)										if ((hash == (int)14)) {
HXLINE( 175)											g61 = -(x);
            										}
            										else {
HXLINE( 175)											g61 = -(z);
            										}
            									}
            								}
HXDLIN( 175)								Float g62 = (g6 + g61);
HXLINE( 177)								hash = ((int)p->__get(BA) & (int)(int)15);
HXLINE( 178)								Float g7;
HXDLIN( 178)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 178)									if ((hash < (int)8)) {
HXLINE( 178)										g7 = x1;
            									}
            									else {
HXLINE( 178)										g7 = y;
            									}
            								}
            								else {
HXLINE( 178)									if ((hash < (int)8)) {
HXLINE( 178)										g7 = -(x1);
            									}
            									else {
HXLINE( 178)										g7 = -(y);
            									}
            								}
HXDLIN( 178)								Float g71;
HXDLIN( 178)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 178)									if ((hash < (int)4)) {
HXLINE( 178)										g71 = y;
            									}
            									else {
HXLINE( 178)										if ((hash == (int)12)) {
HXLINE( 178)											g71 = x1;
            										}
            										else {
HXLINE( 178)											g71 = z;
            										}
            									}
            								}
            								else {
HXLINE( 178)									if ((hash < (int)4)) {
HXLINE( 178)										g71 = -(y);
            									}
            									else {
HXLINE( 178)										if ((hash == (int)14)) {
HXLINE( 178)											g71 = -(x1);
            										}
            										else {
HXLINE( 178)											g71 = -(z);
            										}
            									}
            								}
HXDLIN( 178)								Float g72 = (g7 + g71);
HXLINE( 180)								hash = ((int)p->__get(AA) & (int)(int)15);
HXLINE( 181)								Float g8;
HXDLIN( 181)								if ((((int)hash & (int)(int)1) == (int)0)) {
HXLINE( 181)									if ((hash < (int)8)) {
HXLINE( 181)										g8 = x;
            									}
            									else {
HXLINE( 181)										g8 = y;
            									}
            								}
            								else {
HXLINE( 181)									if ((hash < (int)8)) {
HXLINE( 181)										g8 = -(x);
            									}
            									else {
HXLINE( 181)										g8 = -(y);
            									}
            								}
HXDLIN( 181)								Float g81;
HXDLIN( 181)								if ((((int)hash & (int)(int)2) == (int)0)) {
HXLINE( 181)									if ((hash < (int)4)) {
HXLINE( 181)										g81 = y;
            									}
            									else {
HXLINE( 181)										if ((hash == (int)12)) {
HXLINE( 181)											g81 = x;
            										}
            										else {
HXLINE( 181)											g81 = z;
            										}
            									}
            								}
            								else {
HXLINE( 181)									if ((hash < (int)4)) {
HXLINE( 181)										g81 = -(y);
            									}
            									else {
HXLINE( 181)										if ((hash == (int)14)) {
HXLINE( 181)											g81 = -(x);
            										}
            										else {
HXLINE( 181)											g81 = -(z);
            										}
            									}
            								}
HXDLIN( 181)								Float g82 = (g8 + g81);
HXLINE( 183)								g22 = (g22 + (u * (g12 - g22)));
HXLINE( 184)								g42 = (g42 + (u * (g32 - g42)));
HXLINE( 185)								g62 = (g62 + (u * (g52 - g62)));
HXLINE( 186)								g82 = (g82 + (u * (g72 - g82)));
HXLINE( 188)								g42 = (g42 + (v * (g22 - g42)));
HXLINE( 189)								g82 = (g82 + (v * (g62 - g82)));
HXLINE( 191)								s = (s + ((g82 + (w * (g42 - g82))) * fPers));
            							}
            						}
HXLINE( 194)						int color = ::Std_obj::_hx_int((((s * this->fPersMax) + (int)1) * (int)128));
HXLINE( 196)						bitmap->setPixel32(px,py,((int)((int)((int)(int)-16777216 | (int)((int)color << (int)(int)16)) | (int)((int)color << (int)(int)8)) | (int)color));
HXLINE( 198)						_x = (_x + this->baseFactor);
            					}
            				}
HXLINE( 201)				_y = (_y + this->baseFactor);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(PerlinNoise_obj,fill,(void))

void PerlinNoise_obj::octFreqPers(Float fPersistence){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_205_octFreqPers)
HXLINE( 207)		Float fFreq;
HXDLIN( 207)		Float fPers;
HXLINE( 209)		this->aOctFreq = ::Array_obj< Float >::__new(0);
HXLINE( 210)		this->aOctPers = ::Array_obj< Float >::__new(0);
HXLINE( 211)		this->fPersMax = (int)0;
HXLINE( 213)		{
HXLINE( 213)			int _g1 = (int)0;
HXDLIN( 213)			int _g = this->octaves;
HXDLIN( 213)			while((_g1 < _g)){
HXLINE( 213)				_g1 = (_g1 + (int)1);
HXDLIN( 213)				int i = (_g1 - (int)1);
HXLINE( 214)				fFreq = ::Math_obj::pow((int)2,i);
HXLINE( 215)				fPers = ::Math_obj::pow(fPersistence,i);
HXLINE( 216)				 ::openfl::_internal::utils::PerlinNoise _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 216)				_hx_tmp->fPersMax = (_hx_tmp->fPersMax + fPers);
HXLINE( 217)				this->aOctFreq->push(fFreq);
HXLINE( 218)				this->aOctPers->push(fPers);
            			}
            		}
HXLINE( 221)		this->fPersMax = ((Float)(int)1 / (Float)this->fPersMax);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,octFreqPers,(void))

void PerlinNoise_obj::seedOffset(int iSeed){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_224_seedOffset)
HXLINE( 225)		iSeed = ::Std_obj::_hx_int(hx::Mod((iSeed * ((Float)16807.)),(int)2147483647));
HXDLIN( 225)		this->iXoffset = iSeed;
HXLINE( 226)		iSeed = ::Std_obj::_hx_int(hx::Mod((iSeed * ((Float)16807.)),(int)2147483647));
HXDLIN( 226)		this->iYoffset = iSeed;
HXLINE( 227)		iSeed = ::Std_obj::_hx_int(hx::Mod((iSeed * ((Float)16807.)),(int)2147483647));
HXDLIN( 227)		this->iZoffset = iSeed;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,seedOffset,(void))

::Array< int > PerlinNoise_obj::P;


hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__new( ::Dynamic seed, ::Dynamic octaves, ::Dynamic falloff) {
	hx::ObjectPtr< PerlinNoise_obj > __this = new PerlinNoise_obj();
	__this->__construct(seed,octaves,falloff);
	return __this;
}

hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic seed, ::Dynamic octaves, ::Dynamic falloff) {
	PerlinNoise_obj *__this = (PerlinNoise_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PerlinNoise_obj), true, "openfl._internal.utils.PerlinNoise"));
	*(void **)__this = PerlinNoise_obj::_hx_vtable;
	__this->__construct(seed,octaves,falloff);
	return __this;
}

PerlinNoise_obj::PerlinNoise_obj()
{
}

void PerlinNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinNoise);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_MARK_MEMBER_NAME(aOctPers,"aOctPers");
	HX_MARK_MEMBER_NAME(fPersMax,"fPersMax");
	HX_MARK_MEMBER_NAME(iXoffset,"iXoffset");
	HX_MARK_MEMBER_NAME(iYoffset,"iYoffset");
	HX_MARK_MEMBER_NAME(iZoffset,"iZoffset");
	HX_MARK_MEMBER_NAME(baseFactor,"baseFactor");
	HX_MARK_END_CLASS();
}

void PerlinNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
	HX_VISIT_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_VISIT_MEMBER_NAME(aOctPers,"aOctPers");
	HX_VISIT_MEMBER_NAME(fPersMax,"fPersMax");
	HX_VISIT_MEMBER_NAME(iXoffset,"iXoffset");
	HX_VISIT_MEMBER_NAME(iYoffset,"iYoffset");
	HX_VISIT_MEMBER_NAME(iZoffset,"iZoffset");
	HX_VISIT_MEMBER_NAME(baseFactor,"baseFactor");
}

hx::Val PerlinNoise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return hx::Val( fill_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return hx::Val( octaves); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { return hx::Val( aOctFreq); }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { return hx::Val( aOctPers); }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { return hx::Val( fPersMax); }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { return hx::Val( iXoffset); }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { return hx::Val( iYoffset); }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { return hx::Val( iZoffset); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { return hx::Val( baseFactor); }
		if (HX_FIELD_EQ(inName,"seedOffset") ) { return hx::Val( seedOffset_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"octFreqPers") ) { return hx::Val( octFreqPers_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool PerlinNoise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = P; return true; }
	}
	return false;
}

hx::Val PerlinNoise_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { aOctFreq=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { aOctPers=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { fPersMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { iXoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { iYoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { iZoffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { baseFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PerlinNoise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void PerlinNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"));
	outFields->push(HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"));
	outFields->push(HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"));
	outFields->push(HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"));
	outFields->push(HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"));
	outFields->push(HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"));
	outFields->push(HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"));
	outFields->push(HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PerlinNoise_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PerlinNoise_obj,octaves),HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PerlinNoise_obj,aOctFreq),HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PerlinNoise_obj,aOctPers),HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,fPersMax),HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iXoffset),HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iYoffset),HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iZoffset),HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,baseFactor),HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo PerlinNoise_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &PerlinNoise_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String PerlinNoise_obj_sMemberFields[] = {
	HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"),
	HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"),
	HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"),
	HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"),
	HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"),
	HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"),
	HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"),
	HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("octFreqPers","\xce","\x9e","\x7b","\xa2"),
	HX_HCSTRING("seedOffset","\xe4","\xbb","\xcf","\xfe"),
	::String(null()) };

static void PerlinNoise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PerlinNoise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#endif

hx::Class PerlinNoise_obj::__mClass;

static ::String PerlinNoise_obj_sStaticFields[] = {
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	::String(null())
};

void PerlinNoise_obj::__register()
{
	hx::Object *dummy = new PerlinNoise_obj;
	PerlinNoise_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.utils.PerlinNoise","\x59","\xb2","\xee","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PerlinNoise_obj::__GetStatic;
	__mClass->mSetStaticField = &PerlinNoise_obj::__SetStatic;
	__mClass->mMarkFunc = PerlinNoise_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PerlinNoise_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PerlinNoise_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PerlinNoise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PerlinNoise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerlinNoise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerlinNoise_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PerlinNoise_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_22_boot)
HXLINE(  22)		P = ::Array_obj< int >::fromData( _hx_array_data_42eeb259_9,512);
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
