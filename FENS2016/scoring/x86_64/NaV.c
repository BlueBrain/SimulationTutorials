/* Created by Language version: 6.2.0 */
/* NOT VECTORIZED */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "scoplib_ansi.h"
#undef PI
#define nil 0
#include "md1redef.h"
#include "section.h"
#include "nrniv_mf.h"
#include "md2redef.h"
 
#if METHOD3
extern int _method3;
#endif

#if !NRNGPU
#undef exp
#define exp hoc_Exp
extern double hoc_Exp(double);
#endif
 
#define _threadargscomma_ /**/
#define _threadargs_ /**/
 
#define _threadargsprotocomma_ /**/
#define _threadargsproto_ /**/
 	/*SUPPRESS 761*/
	/*SUPPRESS 762*/
	/*SUPPRESS 763*/
	/*SUPPRESS 765*/
	 extern double *getarg();
 static double *_p; static Datum *_ppvar;
 
#define t nrn_threads->_t
#define dt nrn_threads->_dt
#define gbar _p[0]
#define g _p[1]
#define C1 _p[2]
#define C2 _p[3]
#define C3 _p[4]
#define C4 _p[5]
#define C5 _p[6]
#define I1 _p[7]
#define I2 _p[8]
#define I3 _p[9]
#define I4 _p[10]
#define I5 _p[11]
#define O _p[12]
#define I6 _p[13]
#define f01 _p[14]
#define f02 _p[15]
#define f03 _p[16]
#define f04 _p[17]
#define f0O _p[18]
#define f11 _p[19]
#define f12 _p[20]
#define f13 _p[21]
#define f14 _p[22]
#define f1n _p[23]
#define fi1 _p[24]
#define fi2 _p[25]
#define fi3 _p[26]
#define fi4 _p[27]
#define fi5 _p[28]
#define fin _p[29]
#define b01 _p[30]
#define b02 _p[31]
#define b03 _p[32]
#define b04 _p[33]
#define b0O _p[34]
#define b11 _p[35]
#define b12 _p[36]
#define b13 _p[37]
#define b14 _p[38]
#define b1n _p[39]
#define bi1 _p[40]
#define bi2 _p[41]
#define bi3 _p[42]
#define bi4 _p[43]
#define bi5 _p[44]
#define bin _p[45]
#define ena _p[46]
#define ina _p[47]
#define DC1 _p[48]
#define DC2 _p[49]
#define DC3 _p[50]
#define DC4 _p[51]
#define DC5 _p[52]
#define DI1 _p[53]
#define DI2 _p[54]
#define DI3 _p[55]
#define DI4 _p[56]
#define DI5 _p[57]
#define DO _p[58]
#define DI6 _p[59]
#define _g _p[60]
#define _ion_ena	*_ppvar[0]._pval
#define _ion_ina	*_ppvar[1]._pval
#define _ion_dinadv	*_ppvar[2]._pval
 
#if MAC
#if !defined(v)
#define v _mlhv
#endif
#if !defined(h)
#define h _mlhh
#endif
#endif
 
#if defined(__cplusplus)
extern "C" {
#endif
 static int hoc_nrnpointerindex =  -1;
 /* external NEURON variables */
 extern double celsius;
 /* declaration of user functions */
 static void _hoc_rates(void);
 static int _mechtype;
extern void _nrn_cacheloop_reg(int, int);
extern void hoc_register_prop_size(int, int, int);
extern void hoc_register_limits(int, HocParmLimits*);
extern void hoc_register_units(int, HocParmUnits*);
extern void nrn_promote(Prop*, int, int);
extern Memb_func* memb_func;
 extern void _nrn_setdata_reg(int, void(*)(Prop*));
 static void _setdata(Prop* _prop) {
 _p = _prop->param; _ppvar = _prop->dparam;
 }
 static void _hoc_setdata() {
 Prop *_prop, *hoc_getdata_range(int);
 _prop = hoc_getdata_range(_mechtype);
   _setdata(_prop);
 hoc_retpushx(1.);
}
 /* connect user functions to hoc names */
 static VoidFunc hoc_intfunc[] = {
 "setdata_NaV", _hoc_setdata,
 "rates_NaV", _hoc_rates,
 0, 0
};
 /* declare global and static user variables */
#define Coff Coff_NaV
 double Coff = 40;
#define Con Con_NaV
 double Con = 0.01;
#define Ooff Ooff_NaV
 double Ooff = 0.05;
#define Oon Oon_NaV
 double Oon = 8;
#define alfac alfac_NaV
 double alfac = 2.51;
#define alpha alpha_NaV
 double alpha = 400;
#define btfac btfac_NaV
 double btfac = 5.32;
#define beta beta_NaV
 double beta = 12;
#define delta delta_NaV
 double delta = 60;
#define gamma gamma_NaV
 double gamma = 250;
#define x2 x2_NaV
 double x2 = -24;
#define x1 x1_NaV
 double x1 = 24;
 /* some parameters have upper and lower limits */
 static HocParmLimits _hoc_parm_limits[] = {
 0,0,0
};
 static HocParmUnits _hoc_parm_units[] = {
 "Con_NaV", "/ms",
 "Coff_NaV", "/ms",
 "Oon_NaV", "/ms",
 "Ooff_NaV", "/ms",
 "alpha_NaV", "/ms",
 "beta_NaV", "/ms",
 "gamma_NaV", "/ms",
 "delta_NaV", "/ms",
 "x1_NaV", "mV",
 "x2_NaV", "mV",
 "gbar_NaV", "S/cm2",
 "g_NaV", "S/cm2",
 0,0
};
 static double C50 = 0;
 static double C40 = 0;
 static double C30 = 0;
 static double C20 = 0;
 static double C10 = 0;
 static double I60 = 0;
 static double I50 = 0;
 static double I40 = 0;
 static double I30 = 0;
 static double I20 = 0;
 static double I10 = 0;
 static double O0 = 0;
 static double delta_t = 0.01;
 static double v = 0;
 /* connect global user variables to hoc */
 static DoubScal hoc_scdoub[] = {
 "Con_NaV", &Con_NaV,
 "Coff_NaV", &Coff_NaV,
 "Oon_NaV", &Oon_NaV,
 "Ooff_NaV", &Ooff_NaV,
 "alpha_NaV", &alpha_NaV,
 "beta_NaV", &beta_NaV,
 "gamma_NaV", &gamma_NaV,
 "delta_NaV", &delta_NaV,
 "alfac_NaV", &alfac_NaV,
 "btfac_NaV", &btfac_NaV,
 "x1_NaV", &x1_NaV,
 "x2_NaV", &x2_NaV,
 0,0
};
 static DoubVec hoc_vdoub[] = {
 0,0,0
};
 static double _sav_indep;
 static void nrn_alloc(Prop*);
static void  nrn_init(_NrnThread*, _Memb_list*, int);
static void nrn_state(_NrnThread*, _Memb_list*, int);
 static void nrn_cur(_NrnThread*, _Memb_list*, int);
static void  nrn_jacob(_NrnThread*, _Memb_list*, int);
 
static int _ode_count(int);
static void _ode_map(int, double**, double**, double*, Datum*, double*, int);
static void _ode_spec(_NrnThread*, _Memb_list*, int);
static void _ode_matsol(_NrnThread*, _Memb_list*, int);
 
#define _cvode_ieq _ppvar[3]._i
 /* connect range variables in _p that hoc is supposed to know about */
 static const char *_mechanism[] = {
 "6.2.0",
"NaV",
 "gbar_NaV",
 0,
 "g_NaV",
 0,
 "C1_NaV",
 "C2_NaV",
 "C3_NaV",
 "C4_NaV",
 "C5_NaV",
 "I1_NaV",
 "I2_NaV",
 "I3_NaV",
 "I4_NaV",
 "I5_NaV",
 "O_NaV",
 "I6_NaV",
 0,
 0};
 static Symbol* _na_sym;
 
extern Prop* need_memb(Symbol*);

static void nrn_alloc(Prop* _prop) {
	Prop *prop_ion;
	double *_p; Datum *_ppvar;
 	_p = nrn_prop_data_alloc(_mechtype, 61, _prop);
 	/*initialize range parameters*/
 	gbar = 0.015;
 	_prop->param = _p;
 	_prop->param_size = 61;
 	_ppvar = nrn_prop_datum_alloc(_mechtype, 4, _prop);
 	_prop->dparam = _ppvar;
 	/*connect ionic variables to this model*/
 prop_ion = need_memb(_na_sym);
 nrn_promote(prop_ion, 0, 1);
 	_ppvar[0]._pval = &prop_ion->param[0]; /* ena */
 	_ppvar[1]._pval = &prop_ion->param[3]; /* ina */
 	_ppvar[2]._pval = &prop_ion->param[4]; /* _ion_dinadv */
 
}
 static void _initlists();
  /* some states have an absolute tolerance */
 static Symbol** _atollist;
 static HocStateTolerance _hoc_state_tol[] = {
 0,0
};
 static void _update_ion_pointer(Datum*);
 extern Symbol* hoc_lookup(const char*);
extern void _nrn_thread_reg(int, int, void(*f)(Datum*));
extern void _nrn_thread_table_reg(int, void(*)(double*, Datum*, Datum*, _NrnThread*, int));
extern void hoc_register_tolerance(int, HocStateTolerance*, Symbol***);
extern void _cvode_abstol( Symbol**, double*, int);

 void _NaV_reg() {
	int _vectorized = 0;
  _initlists();
 	ion_reg("na", -10000.);
 	_na_sym = hoc_lookup("na_ion");
 	register_mech(_mechanism, nrn_alloc,nrn_cur, nrn_jacob, nrn_state, nrn_init, hoc_nrnpointerindex, 0);
 _mechtype = nrn_get_mechtype(_mechanism[1]);
     _nrn_setdata_reg(_mechtype, _setdata);
     _nrn_thread_reg(_mechtype, 2, _update_ion_pointer);
  hoc_register_prop_size(_mechtype, 61, 4);
 	hoc_register_cvode(_mechtype, _ode_count, _ode_map, _ode_spec, _ode_matsol);
 	hoc_register_tolerance(_mechtype, _hoc_state_tol, &_atollist);
 	hoc_register_var(hoc_scdoub, hoc_vdoub, hoc_intfunc);
 	ivoc_help("help ?1 NaV /home/iavarone/BBP/fens2016/SimulationTutorials/FENS2016/exercise/x86_64/NaV.mod\n");
 hoc_register_limits(_mechtype, _hoc_parm_limits);
 hoc_register_units(_mechtype, _hoc_parm_units);
 }
static int _reset;
static char *modelname = "Mouse sodium current";

static int error;
static int _ninits = 0;
static int _match_recurse=1;
static void _modl_cleanup(){ _match_recurse=1;}
static int rates(double);
 extern double *_getelm();
 
#define _MATELM1(_row,_col)	*(_getelm(_row + 1, _col + 1))
 
#define _RHS1(_arg) _coef1[_arg + 1]
 static double *_coef1;
 
#define _linmat1  1
 static void* _sparseobj1;
 static void* _cvsparseobj1;
 
static int _ode_spec1(_threadargsproto_);
/*static int _ode_matsol1(_threadargsproto_);*/
 
#define _RHS2(arg) _coef2[arg][12]
 static int _slist2[12];static double **_coef2;
 static void seqinitial();
 static int _slist1[12], _dlist1[12]; static double *_temp1;
 static int activation();
 
static int activation ()
 {_reset=0;
 {
   double b_flux, f_flux, _term; int _i;
 {int _i; double _dt1 = 1.0/dt;
for(_i=1;_i<12;_i++){
  	_RHS1(_i) = -_dt1*(_p[_slist1[_i]] - _p[_dlist1[_i]]);
	_MATELM1(_i, _i) = _dt1;
      
} }
 rates ( _threadargscomma_ v ) ;
   /* ~ C1 <-> C2 ( f01 , b01 )*/
 f_flux =  f01 * C1 ;
 b_flux =  b01 * C2 ;
 _RHS1( 5) -= (f_flux - b_flux);
 _RHS1( 4) += (f_flux - b_flux);
 
 _term =  f01 ;
 _MATELM1( 5 ,5)  += _term;
 _MATELM1( 4 ,5)  -= _term;
 _term =  b01 ;
 _MATELM1( 5 ,4)  -= _term;
 _MATELM1( 4 ,4)  += _term;
 /*REACTION*/
  /* ~ C2 <-> C3 ( f02 , b02 )*/
 f_flux =  f02 * C2 ;
 b_flux =  b02 * C3 ;
 _RHS1( 4) -= (f_flux - b_flux);
 _RHS1( 3) += (f_flux - b_flux);
 
 _term =  f02 ;
 _MATELM1( 4 ,4)  += _term;
 _MATELM1( 3 ,4)  -= _term;
 _term =  b02 ;
 _MATELM1( 4 ,3)  -= _term;
 _MATELM1( 3 ,3)  += _term;
 /*REACTION*/
  /* ~ C3 <-> C4 ( f03 , b03 )*/
 f_flux =  f03 * C3 ;
 b_flux =  b03 * C4 ;
 _RHS1( 3) -= (f_flux - b_flux);
 _RHS1( 2) += (f_flux - b_flux);
 
 _term =  f03 ;
 _MATELM1( 3 ,3)  += _term;
 _MATELM1( 2 ,3)  -= _term;
 _term =  b03 ;
 _MATELM1( 3 ,2)  -= _term;
 _MATELM1( 2 ,2)  += _term;
 /*REACTION*/
  /* ~ C4 <-> C5 ( f04 , b04 )*/
 f_flux =  f04 * C4 ;
 b_flux =  b04 * C5 ;
 _RHS1( 2) -= (f_flux - b_flux);
 _RHS1( 1) += (f_flux - b_flux);
 
 _term =  f04 ;
 _MATELM1( 2 ,2)  += _term;
 _MATELM1( 1 ,2)  -= _term;
 _term =  b04 ;
 _MATELM1( 2 ,1)  -= _term;
 _MATELM1( 1 ,1)  += _term;
 /*REACTION*/
  /* ~ C5 <-> O ( f0O , b0O )*/
 f_flux =  f0O * C5 ;
 b_flux =  b0O * O ;
 _RHS1( 1) -= (f_flux - b_flux);
 _RHS1( 11) += (f_flux - b_flux);
 
 _term =  f0O ;
 _MATELM1( 1 ,1)  += _term;
 _MATELM1( 11 ,1)  -= _term;
 _term =  b0O ;
 _MATELM1( 1 ,11)  -= _term;
 _MATELM1( 11 ,11)  += _term;
 /*REACTION*/
  /* ~ O <-> I6 ( fin , bin )*/
 f_flux =  fin * O ;
 b_flux =  bin * I6 ;
 _RHS1( 11) -= (f_flux - b_flux);
 
 _term =  fin ;
 _MATELM1( 11 ,11)  += _term;
 _term =  bin ;
 _MATELM1( 11 ,0)  -= _term;
 /*REACTION*/
  /* ~ I1 <-> I2 ( f11 , b11 )*/
 f_flux =  f11 * I1 ;
 b_flux =  b11 * I2 ;
 _RHS1( 10) -= (f_flux - b_flux);
 _RHS1( 9) += (f_flux - b_flux);
 
 _term =  f11 ;
 _MATELM1( 10 ,10)  += _term;
 _MATELM1( 9 ,10)  -= _term;
 _term =  b11 ;
 _MATELM1( 10 ,9)  -= _term;
 _MATELM1( 9 ,9)  += _term;
 /*REACTION*/
  /* ~ I2 <-> I3 ( f12 , b12 )*/
 f_flux =  f12 * I2 ;
 b_flux =  b12 * I3 ;
 _RHS1( 9) -= (f_flux - b_flux);
 _RHS1( 8) += (f_flux - b_flux);
 
 _term =  f12 ;
 _MATELM1( 9 ,9)  += _term;
 _MATELM1( 8 ,9)  -= _term;
 _term =  b12 ;
 _MATELM1( 9 ,8)  -= _term;
 _MATELM1( 8 ,8)  += _term;
 /*REACTION*/
  /* ~ I3 <-> I4 ( f13 , b13 )*/
 f_flux =  f13 * I3 ;
 b_flux =  b13 * I4 ;
 _RHS1( 8) -= (f_flux - b_flux);
 _RHS1( 7) += (f_flux - b_flux);
 
 _term =  f13 ;
 _MATELM1( 8 ,8)  += _term;
 _MATELM1( 7 ,8)  -= _term;
 _term =  b13 ;
 _MATELM1( 8 ,7)  -= _term;
 _MATELM1( 7 ,7)  += _term;
 /*REACTION*/
  /* ~ I4 <-> I5 ( f14 , b14 )*/
 f_flux =  f14 * I4 ;
 b_flux =  b14 * I5 ;
 _RHS1( 7) -= (f_flux - b_flux);
 _RHS1( 6) += (f_flux - b_flux);
 
 _term =  f14 ;
 _MATELM1( 7 ,7)  += _term;
 _MATELM1( 6 ,7)  -= _term;
 _term =  b14 ;
 _MATELM1( 7 ,6)  -= _term;
 _MATELM1( 6 ,6)  += _term;
 /*REACTION*/
  /* ~ I5 <-> I6 ( f1n , b1n )*/
 f_flux =  f1n * I5 ;
 b_flux =  b1n * I6 ;
 _RHS1( 6) -= (f_flux - b_flux);
 
 _term =  f1n ;
 _MATELM1( 6 ,6)  += _term;
 _term =  b1n ;
 _MATELM1( 6 ,0)  -= _term;
 /*REACTION*/
  /* ~ C1 <-> I1 ( fi1 , bi1 )*/
 f_flux =  fi1 * C1 ;
 b_flux =  bi1 * I1 ;
 _RHS1( 5) -= (f_flux - b_flux);
 _RHS1( 10) += (f_flux - b_flux);
 
 _term =  fi1 ;
 _MATELM1( 5 ,5)  += _term;
 _MATELM1( 10 ,5)  -= _term;
 _term =  bi1 ;
 _MATELM1( 5 ,10)  -= _term;
 _MATELM1( 10 ,10)  += _term;
 /*REACTION*/
  /* ~ C2 <-> I2 ( fi2 , bi2 )*/
 f_flux =  fi2 * C2 ;
 b_flux =  bi2 * I2 ;
 _RHS1( 4) -= (f_flux - b_flux);
 _RHS1( 9) += (f_flux - b_flux);
 
 _term =  fi2 ;
 _MATELM1( 4 ,4)  += _term;
 _MATELM1( 9 ,4)  -= _term;
 _term =  bi2 ;
 _MATELM1( 4 ,9)  -= _term;
 _MATELM1( 9 ,9)  += _term;
 /*REACTION*/
  /* ~ C3 <-> I3 ( fi3 , bi3 )*/
 f_flux =  fi3 * C3 ;
 b_flux =  bi3 * I3 ;
 _RHS1( 3) -= (f_flux - b_flux);
 _RHS1( 8) += (f_flux - b_flux);
 
 _term =  fi3 ;
 _MATELM1( 3 ,3)  += _term;
 _MATELM1( 8 ,3)  -= _term;
 _term =  bi3 ;
 _MATELM1( 3 ,8)  -= _term;
 _MATELM1( 8 ,8)  += _term;
 /*REACTION*/
  /* ~ C4 <-> I4 ( fi4 , bi4 )*/
 f_flux =  fi4 * C4 ;
 b_flux =  bi4 * I4 ;
 _RHS1( 2) -= (f_flux - b_flux);
 _RHS1( 7) += (f_flux - b_flux);
 
 _term =  fi4 ;
 _MATELM1( 2 ,2)  += _term;
 _MATELM1( 7 ,2)  -= _term;
 _term =  bi4 ;
 _MATELM1( 2 ,7)  -= _term;
 _MATELM1( 7 ,7)  += _term;
 /*REACTION*/
  /* ~ C5 <-> I5 ( fi5 , bi5 )*/
 f_flux =  fi5 * C5 ;
 b_flux =  bi5 * I5 ;
 _RHS1( 1) -= (f_flux - b_flux);
 _RHS1( 6) += (f_flux - b_flux);
 
 _term =  fi5 ;
 _MATELM1( 1 ,1)  += _term;
 _MATELM1( 6 ,1)  -= _term;
 _term =  bi5 ;
 _MATELM1( 1 ,6)  -= _term;
 _MATELM1( 6 ,6)  += _term;
 /*REACTION*/
   /* C1 + C2 + C3 + C4 + C5 + O + I1 + I2 + I3 + I4 + I5 + I6 = 1.0 */
 _RHS1(0) =  1.0;
 _MATELM1(0, 0) = 1;
 _RHS1(0) -= I6 ;
 _MATELM1(0, 6) = 1;
 _RHS1(0) -= I5 ;
 _MATELM1(0, 7) = 1;
 _RHS1(0) -= I4 ;
 _MATELM1(0, 8) = 1;
 _RHS1(0) -= I3 ;
 _MATELM1(0, 9) = 1;
 _RHS1(0) -= I2 ;
 _MATELM1(0, 10) = 1;
 _RHS1(0) -= I1 ;
 _MATELM1(0, 11) = 1;
 _RHS1(0) -= O ;
 _MATELM1(0, 1) = 1;
 _RHS1(0) -= C5 ;
 _MATELM1(0, 2) = 1;
 _RHS1(0) -= C4 ;
 _MATELM1(0, 3) = 1;
 _RHS1(0) -= C3 ;
 _MATELM1(0, 4) = 1;
 _RHS1(0) -= C2 ;
 _MATELM1(0, 5) = 1;
 _RHS1(0) -= C1 ;
 /*CONSERVATION*/
   } return _reset;
 }
 
static void seqinitial ()
 {
   zero_matrix(_coef2, 12, 13);
{
  int _counte = -1;
  ++_counte;
 _coef2[_counte][0] -=  1.0 * bi1 ;
 _coef2[_counte][1] -=  1.0 * b01 ;
 _coef2[_counte][2] +=  1.0 * ( fi1 + f01 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][2] -=  1.0 * f01 ;
 _coef2[_counte][3] -=  1.0 * bi2 ;
 _coef2[_counte][4] -=  1.0 * b02 ;
 _coef2[_counte][1] +=  1.0 * ( b01 + fi2 + f02 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][1] -=  1.0 * f02 ;
 _coef2[_counte][5] -=  1.0 * bi3 ;
 _coef2[_counte][6] -=  1.0 * b03 ;
 _coef2[_counte][4] +=  1.0 * ( b02 + fi3 + f03 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][4] -=  1.0 * f03 ;
 _coef2[_counte][7] -=  1.0 * bi4 ;
 _coef2[_counte][8] -=  1.0 * b04 ;
 _coef2[_counte][6] +=  1.0 * ( b03 + fi4 + f04 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][6] -=  1.0 * f04 ;
 _coef2[_counte][9] -=  1.0 * bi5 ;
 _coef2[_counte][10] -=  1.0 * b0O ;
 _coef2[_counte][8] +=  1.0 * ( b04 + fi5 + f0O ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][8] -=  1.0 * f0O ;
 _coef2[_counte][11] -=  1.0 * bin ;
 _coef2[_counte][10] +=  1.0 * ( b0O + fin ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][2] -=  1.0 * fi1 ;
 _coef2[_counte][3] -=  1.0 * b11 ;
 _coef2[_counte][0] +=  1.0 * ( bi1 + f11 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][0] -=  1.0 * f11 ;
 _coef2[_counte][1] -=  1.0 * fi2 ;
 _coef2[_counte][5] -=  1.0 * b12 ;
 _coef2[_counte][3] +=  1.0 * ( b11 + bi2 + f12 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][3] -=  1.0 * f12 ;
 _coef2[_counte][4] -=  1.0 * fi3 ;
 _coef2[_counte][7] -=  1.0 * bi3 ;
 _coef2[_counte][5] +=  1.0 * ( b12 + bi3 + f13 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][5] -=  1.0 * f13 ;
 _coef2[_counte][6] -=  1.0 * fi4 ;
 _coef2[_counte][9] -=  1.0 * b14 ;
 _coef2[_counte][7] +=  1.0 * ( b13 + bi4 + f14 ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][7] -=  1.0 * f14 ;
 _coef2[_counte][8] -=  1.0 * fi5 ;
 _coef2[_counte][11] -=  1.0 * b1n ;
 _coef2[_counte][9] +=  1.0 * ( b14 + bi5 + f1n ) ;
 _RHS2(_counte) -=  0.0 ;
   ;
  ++_counte;
 _coef2[_counte][2] -=  1.0 ;
 _coef2[_counte][1] -=  1.0 ;
 _coef2[_counte][4] -=  1.0 ;
 _coef2[_counte][6] -=  1.0 ;
 _coef2[_counte][8] -=  1.0 ;
 _coef2[_counte][10] -=  1.0 ;
 _coef2[_counte][0] -=  1.0 ;
 _coef2[_counte][3] -=  1.0 ;
 _coef2[_counte][5] -=  1.0 ;
 _coef2[_counte][7] -=  1.0 ;
 _coef2[_counte][9] -=  1.0 ;
 _coef2[_counte][11] -=  1.0 ;
 _RHS2(_counte) -=  1.0 ;
   ;
 
}
 }
 
static int  rates (  double _lv ) {
   double _lqt ;
 _lqt = pow( 2.3 , ( ( celsius - 37.0 ) / 10.0 ) ) ;
   f01 = _lqt * 4.0 * alpha * exp ( _lv / x1 ) ;
   f02 = _lqt * 3.0 * alpha * exp ( _lv / x1 ) ;
   f03 = _lqt * 2.0 * alpha * exp ( _lv / x1 ) ;
   f04 = _lqt * 1.0 * alpha * exp ( _lv / x1 ) ;
   f0O = _lqt * gamma ;
   f11 = _lqt * 4.0 * alpha * alfac * exp ( _lv / x1 ) ;
   f12 = _lqt * 3.0 * alpha * alfac * exp ( _lv / x1 ) ;
   f13 = _lqt * 2.0 * alpha * alfac * exp ( _lv / x1 ) ;
   f14 = _lqt * 1.0 * alpha * alfac * exp ( _lv / x1 ) ;
   f1n = _lqt * gamma ;
   fi1 = _lqt * Con ;
   fi2 = _lqt * Con * alfac ;
   fi3 = _lqt * Con * pow( alfac , 2.0 ) ;
   fi4 = _lqt * Con * pow( alfac , 3.0 ) ;
   fi5 = _lqt * Con * pow( alfac , 4.0 ) ;
   fin = _lqt * Oon ;
   b01 = _lqt * 1.0 * beta * exp ( _lv / x2 ) ;
   b02 = _lqt * 2.0 * beta * exp ( _lv / x2 ) ;
   b03 = _lqt * 3.0 * beta * exp ( _lv / x2 ) ;
   b04 = _lqt * 4.0 * beta * exp ( _lv / x2 ) ;
   b0O = _lqt * delta ;
   b11 = _lqt * 1.0 * beta * exp ( _lv / x2 ) / btfac ;
   b12 = _lqt * 2.0 * beta * exp ( _lv / x2 ) / btfac ;
   b13 = _lqt * 3.0 * beta * exp ( _lv / x2 ) / btfac ;
   b14 = _lqt * 4.0 * beta * exp ( _lv / x2 ) / btfac ;
   b1n = _lqt * delta ;
   bi1 = _lqt * Coff ;
   bi2 = _lqt * Coff / ( btfac ) ;
   bi3 = _lqt * Coff / ( pow( btfac , 2.0 ) ) ;
   bi4 = _lqt * Coff / ( pow( btfac , 3.0 ) ) ;
   bi5 = _lqt * Coff / ( pow( btfac , 4.0 ) ) ;
   bin = _lqt * Ooff ;
    return 0; }
 
static void _hoc_rates(void) {
  double _r;
   _r = 1.;
 rates (  *getarg(1) );
 hoc_retpushx(_r);
}
 
/*CVODE ode begin*/
 static int _ode_spec1() {_reset=0;{
 double b_flux, f_flux, _term; int _i;
 {int _i; for(_i=0;_i<12;_i++) _p[_dlist1[_i]] = 0.0;}
 rates ( _threadargscomma_ v ) ;
 /* ~ C1 <-> C2 ( f01 , b01 )*/
 f_flux =  f01 * C1 ;
 b_flux =  b01 * C2 ;
 DC1 -= (f_flux - b_flux);
 DC2 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C2 <-> C3 ( f02 , b02 )*/
 f_flux =  f02 * C2 ;
 b_flux =  b02 * C3 ;
 DC2 -= (f_flux - b_flux);
 DC3 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C3 <-> C4 ( f03 , b03 )*/
 f_flux =  f03 * C3 ;
 b_flux =  b03 * C4 ;
 DC3 -= (f_flux - b_flux);
 DC4 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C4 <-> C5 ( f04 , b04 )*/
 f_flux =  f04 * C4 ;
 b_flux =  b04 * C5 ;
 DC4 -= (f_flux - b_flux);
 DC5 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C5 <-> O ( f0O , b0O )*/
 f_flux =  f0O * C5 ;
 b_flux =  b0O * O ;
 DC5 -= (f_flux - b_flux);
 DO += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ O <-> I6 ( fin , bin )*/
 f_flux =  fin * O ;
 b_flux =  bin * I6 ;
 DO -= (f_flux - b_flux);
 DI6 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ I1 <-> I2 ( f11 , b11 )*/
 f_flux =  f11 * I1 ;
 b_flux =  b11 * I2 ;
 DI1 -= (f_flux - b_flux);
 DI2 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ I2 <-> I3 ( f12 , b12 )*/
 f_flux =  f12 * I2 ;
 b_flux =  b12 * I3 ;
 DI2 -= (f_flux - b_flux);
 DI3 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ I3 <-> I4 ( f13 , b13 )*/
 f_flux =  f13 * I3 ;
 b_flux =  b13 * I4 ;
 DI3 -= (f_flux - b_flux);
 DI4 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ I4 <-> I5 ( f14 , b14 )*/
 f_flux =  f14 * I4 ;
 b_flux =  b14 * I5 ;
 DI4 -= (f_flux - b_flux);
 DI5 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ I5 <-> I6 ( f1n , b1n )*/
 f_flux =  f1n * I5 ;
 b_flux =  b1n * I6 ;
 DI5 -= (f_flux - b_flux);
 DI6 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C1 <-> I1 ( fi1 , bi1 )*/
 f_flux =  fi1 * C1 ;
 b_flux =  bi1 * I1 ;
 DC1 -= (f_flux - b_flux);
 DI1 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C2 <-> I2 ( fi2 , bi2 )*/
 f_flux =  fi2 * C2 ;
 b_flux =  bi2 * I2 ;
 DC2 -= (f_flux - b_flux);
 DI2 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C3 <-> I3 ( fi3 , bi3 )*/
 f_flux =  fi3 * C3 ;
 b_flux =  bi3 * I3 ;
 DC3 -= (f_flux - b_flux);
 DI3 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C4 <-> I4 ( fi4 , bi4 )*/
 f_flux =  fi4 * C4 ;
 b_flux =  bi4 * I4 ;
 DC4 -= (f_flux - b_flux);
 DI4 += (f_flux - b_flux);
 
 /*REACTION*/
  /* ~ C5 <-> I5 ( fi5 , bi5 )*/
 f_flux =  fi5 * C5 ;
 b_flux =  bi5 * I5 ;
 DC5 -= (f_flux - b_flux);
 DI5 += (f_flux - b_flux);
 
 /*REACTION*/
   /* C1 + C2 + C3 + C4 + C5 + O + I1 + I2 + I3 + I4 + I5 + I6 = 1.0 */
 /*CONSERVATION*/
   } return _reset;
 }
 
/*CVODE matsol*/
 static int _ode_matsol1() {_reset=0;{
 double b_flux, f_flux, _term; int _i;
   b_flux = f_flux = 0.;
 {int _i; double _dt1 = 1.0/dt;
for(_i=0;_i<12;_i++){
  	_RHS1(_i) = _dt1*(_p[_dlist1[_i]]);
	_MATELM1(_i, _i) = _dt1;
      
} }
 rates ( _threadargscomma_ v ) ;
 /* ~ C1 <-> C2 ( f01 , b01 )*/
 _term =  f01 ;
 _MATELM1( 5 ,5)  += _term;
 _MATELM1( 4 ,5)  -= _term;
 _term =  b01 ;
 _MATELM1( 5 ,4)  -= _term;
 _MATELM1( 4 ,4)  += _term;
 /*REACTION*/
  /* ~ C2 <-> C3 ( f02 , b02 )*/
 _term =  f02 ;
 _MATELM1( 4 ,4)  += _term;
 _MATELM1( 3 ,4)  -= _term;
 _term =  b02 ;
 _MATELM1( 4 ,3)  -= _term;
 _MATELM1( 3 ,3)  += _term;
 /*REACTION*/
  /* ~ C3 <-> C4 ( f03 , b03 )*/
 _term =  f03 ;
 _MATELM1( 3 ,3)  += _term;
 _MATELM1( 2 ,3)  -= _term;
 _term =  b03 ;
 _MATELM1( 3 ,2)  -= _term;
 _MATELM1( 2 ,2)  += _term;
 /*REACTION*/
  /* ~ C4 <-> C5 ( f04 , b04 )*/
 _term =  f04 ;
 _MATELM1( 2 ,2)  += _term;
 _MATELM1( 1 ,2)  -= _term;
 _term =  b04 ;
 _MATELM1( 2 ,1)  -= _term;
 _MATELM1( 1 ,1)  += _term;
 /*REACTION*/
  /* ~ C5 <-> O ( f0O , b0O )*/
 _term =  f0O ;
 _MATELM1( 1 ,1)  += _term;
 _MATELM1( 11 ,1)  -= _term;
 _term =  b0O ;
 _MATELM1( 1 ,11)  -= _term;
 _MATELM1( 11 ,11)  += _term;
 /*REACTION*/
  /* ~ O <-> I6 ( fin , bin )*/
 _term =  fin ;
 _MATELM1( 11 ,11)  += _term;
 _MATELM1( 0 ,11)  -= _term;
 _term =  bin ;
 _MATELM1( 11 ,0)  -= _term;
 _MATELM1( 0 ,0)  += _term;
 /*REACTION*/
  /* ~ I1 <-> I2 ( f11 , b11 )*/
 _term =  f11 ;
 _MATELM1( 10 ,10)  += _term;
 _MATELM1( 9 ,10)  -= _term;
 _term =  b11 ;
 _MATELM1( 10 ,9)  -= _term;
 _MATELM1( 9 ,9)  += _term;
 /*REACTION*/
  /* ~ I2 <-> I3 ( f12 , b12 )*/
 _term =  f12 ;
 _MATELM1( 9 ,9)  += _term;
 _MATELM1( 8 ,9)  -= _term;
 _term =  b12 ;
 _MATELM1( 9 ,8)  -= _term;
 _MATELM1( 8 ,8)  += _term;
 /*REACTION*/
  /* ~ I3 <-> I4 ( f13 , b13 )*/
 _term =  f13 ;
 _MATELM1( 8 ,8)  += _term;
 _MATELM1( 7 ,8)  -= _term;
 _term =  b13 ;
 _MATELM1( 8 ,7)  -= _term;
 _MATELM1( 7 ,7)  += _term;
 /*REACTION*/
  /* ~ I4 <-> I5 ( f14 , b14 )*/
 _term =  f14 ;
 _MATELM1( 7 ,7)  += _term;
 _MATELM1( 6 ,7)  -= _term;
 _term =  b14 ;
 _MATELM1( 7 ,6)  -= _term;
 _MATELM1( 6 ,6)  += _term;
 /*REACTION*/
  /* ~ I5 <-> I6 ( f1n , b1n )*/
 _term =  f1n ;
 _MATELM1( 6 ,6)  += _term;
 _MATELM1( 0 ,6)  -= _term;
 _term =  b1n ;
 _MATELM1( 6 ,0)  -= _term;
 _MATELM1( 0 ,0)  += _term;
 /*REACTION*/
  /* ~ C1 <-> I1 ( fi1 , bi1 )*/
 _term =  fi1 ;
 _MATELM1( 5 ,5)  += _term;
 _MATELM1( 10 ,5)  -= _term;
 _term =  bi1 ;
 _MATELM1( 5 ,10)  -= _term;
 _MATELM1( 10 ,10)  += _term;
 /*REACTION*/
  /* ~ C2 <-> I2 ( fi2 , bi2 )*/
 _term =  fi2 ;
 _MATELM1( 4 ,4)  += _term;
 _MATELM1( 9 ,4)  -= _term;
 _term =  bi2 ;
 _MATELM1( 4 ,9)  -= _term;
 _MATELM1( 9 ,9)  += _term;
 /*REACTION*/
  /* ~ C3 <-> I3 ( fi3 , bi3 )*/
 _term =  fi3 ;
 _MATELM1( 3 ,3)  += _term;
 _MATELM1( 8 ,3)  -= _term;
 _term =  bi3 ;
 _MATELM1( 3 ,8)  -= _term;
 _MATELM1( 8 ,8)  += _term;
 /*REACTION*/
  /* ~ C4 <-> I4 ( fi4 , bi4 )*/
 _term =  fi4 ;
 _MATELM1( 2 ,2)  += _term;
 _MATELM1( 7 ,2)  -= _term;
 _term =  bi4 ;
 _MATELM1( 2 ,7)  -= _term;
 _MATELM1( 7 ,7)  += _term;
 /*REACTION*/
  /* ~ C5 <-> I5 ( fi5 , bi5 )*/
 _term =  fi5 ;
 _MATELM1( 1 ,1)  += _term;
 _MATELM1( 6 ,1)  -= _term;
 _term =  bi5 ;
 _MATELM1( 1 ,6)  -= _term;
 _MATELM1( 6 ,6)  += _term;
 /*REACTION*/
   /* C1 + C2 + C3 + C4 + C5 + O + I1 + I2 + I3 + I4 + I5 + I6 = 1.0 */
 /*CONSERVATION*/
   } return _reset;
 }
 
/*CVODE end*/
 
static int _ode_count(int _type){ return 12;}
 
static void _ode_spec(_NrnThread* _nt, _Memb_list* _ml, int _type) {
   Datum* _thread;
   Node* _nd; double _v; int _iml, _cntml;
  _cntml = _ml->_nodecount;
  _thread = _ml->_thread;
  for (_iml = 0; _iml < _cntml; ++_iml) {
    _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
    _nd = _ml->_nodelist[_iml];
    v = NODEV(_nd);
  ena = _ion_ena;
     _ode_spec1 ();
  }}
 
static void _ode_map(int _ieq, double** _pv, double** _pvdot, double* _pp, Datum* _ppd, double* _atol, int _type) { 
 	int _i; _p = _pp; _ppvar = _ppd;
	_cvode_ieq = _ieq;
	for (_i=0; _i < 12; ++_i) {
		_pv[_i] = _pp + _slist1[_i];  _pvdot[_i] = _pp + _dlist1[_i];
		_cvode_abstol(_atollist, _atol, _i);
	}
 }
 
static void _ode_matsol(_NrnThread* _nt, _Memb_list* _ml, int _type) {
   Datum* _thread;
   Node* _nd; double _v; int _iml, _cntml;
  _cntml = _ml->_nodecount;
  _thread = _ml->_thread;
  for (_iml = 0; _iml < _cntml; ++_iml) {
    _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
    _nd = _ml->_nodelist[_iml];
    v = NODEV(_nd);
  ena = _ion_ena;
 _cvode_sparse(&_cvsparseobj1, 12, _dlist1, _p, _ode_matsol1, &_coef1);
 }}
 extern void nrn_update_ion_pointer(Symbol*, Datum*, int, int);
 static void _update_ion_pointer(Datum* _ppvar) {
   nrn_update_ion_pointer(_na_sym, _ppvar, 0, 0);
   nrn_update_ion_pointer(_na_sym, _ppvar, 1, 3);
   nrn_update_ion_pointer(_na_sym, _ppvar, 2, 4);
 }

static void initmodel() {
  int _i; double _save;_ninits++;
 _save = t;
 t = 0.0;
{
  C5 = C50;
  C4 = C40;
  C3 = C30;
  C2 = C20;
  C1 = C10;
  I6 = I60;
  I5 = I50;
  I4 = I40;
  I3 = I30;
  I2 = I20;
  I1 = I10;
  O = O0;
 {
   rates ( _threadargscomma_ v ) ;
   error =  0; seqinitial();
 error = simeq(12, _coef2, _p, _slist2);
 if(error){fprintf(stderr,"at line 104 in file NaV.mod:\n SOLVE seqinitial\n"); nrn_complain(_p); abort_run(error);}
 }
  _sav_indep = t; t = _save;

}
}

static void nrn_init(_NrnThread* _nt, _Memb_list* _ml, int _type){
Node *_nd; double _v; int* _ni; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
#if CACHEVEC
  if (use_cachevec) {
    _v = VEC_V(_ni[_iml]);
  }else
#endif
  {
    _nd = _ml->_nodelist[_iml];
    _v = NODEV(_nd);
  }
 v = _v;
  ena = _ion_ena;
 initmodel();
 }}

static double _nrn_current(double _v){double _current=0.;v=_v;{ {
   g = gbar * O ;
   ina = g * ( v - ena ) ;
   }
 _current += ina;

} return _current;
}

static void nrn_cur(_NrnThread* _nt, _Memb_list* _ml, int _type){
Node *_nd; int* _ni; double _rhs, _v; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
#if CACHEVEC
  if (use_cachevec) {
    _v = VEC_V(_ni[_iml]);
  }else
#endif
  {
    _nd = _ml->_nodelist[_iml];
    _v = NODEV(_nd);
  }
  ena = _ion_ena;
 _g = _nrn_current(_v + .001);
 	{ double _dina;
  _dina = ina;
 _rhs = _nrn_current(_v);
  _ion_dinadv += (_dina - ina)/.001 ;
 	}
 _g = (_g - _rhs)/.001;
  _ion_ina += ina ;
#if CACHEVEC
  if (use_cachevec) {
	VEC_RHS(_ni[_iml]) -= _rhs;
  }else
#endif
  {
	NODERHS(_nd) -= _rhs;
  }
 
}}

static void nrn_jacob(_NrnThread* _nt, _Memb_list* _ml, int _type){
Node *_nd; int* _ni; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml];
#if CACHEVEC
  if (use_cachevec) {
	VEC_D(_ni[_iml]) += _g;
  }else
#endif
  {
     _nd = _ml->_nodelist[_iml];
	NODED(_nd) += _g;
  }
 
}}

static void nrn_state(_NrnThread* _nt, _Memb_list* _ml, int _type){
 double _break, _save;
Node *_nd; double _v; int* _ni; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
 _nd = _ml->_nodelist[_iml];
#if CACHEVEC
  if (use_cachevec) {
    _v = VEC_V(_ni[_iml]);
  }else
#endif
  {
    _nd = _ml->_nodelist[_iml];
    _v = NODEV(_nd);
  }
 _break = t + .5*dt; _save = t;
 v=_v;
{
  ena = _ion_ena;
 { {
 for (; t < _break; t += dt) {
 error = sparse(&_sparseobj1, 12, _slist1, _dlist1, _p, &t, dt, activation,&_coef1, _linmat1);
 if(error){fprintf(stderr,"at line 97 in file NaV.mod:\n	SOLVE activation METHOD sparse\n"); nrn_complain(_p); abort_run(error);}
 
}}
 t = _save;
 } }}

}

static void terminal(){}

static void _initlists() {
 int _i; static int _first = 1;
  if (!_first) return;
 _slist2[0] = &(I1) - _p;
 _slist2[1] = &(C2) - _p;
 _slist2[2] = &(C1) - _p;
 _slist2[3] = &(I2) - _p;
 _slist2[4] = &(C3) - _p;
 _slist2[5] = &(I3) - _p;
 _slist2[6] = &(C4) - _p;
 _slist2[7] = &(I4) - _p;
 _slist2[8] = &(C5) - _p;
 _slist2[9] = &(I5) - _p;
 _slist2[10] = &(O) - _p;
 _slist2[11] = &(I6) - _p;
 if (_first) _coef2 = makematrix(12, 13);
 _slist1[0] = &(I6) - _p;  _dlist1[0] = &(DI6) - _p;
 _slist1[1] = &(C5) - _p;  _dlist1[1] = &(DC5) - _p;
 _slist1[2] = &(C4) - _p;  _dlist1[2] = &(DC4) - _p;
 _slist1[3] = &(C3) - _p;  _dlist1[3] = &(DC3) - _p;
 _slist1[4] = &(C2) - _p;  _dlist1[4] = &(DC2) - _p;
 _slist1[5] = &(C1) - _p;  _dlist1[5] = &(DC1) - _p;
 _slist1[6] = &(I5) - _p;  _dlist1[6] = &(DI5) - _p;
 _slist1[7] = &(I4) - _p;  _dlist1[7] = &(DI4) - _p;
 _slist1[8] = &(I3) - _p;  _dlist1[8] = &(DI3) - _p;
 _slist1[9] = &(I2) - _p;  _dlist1[9] = &(DI2) - _p;
 _slist1[10] = &(I1) - _p;  _dlist1[10] = &(DI1) - _p;
 _slist1[11] = &(O) - _p;  _dlist1[11] = &(DO) - _p;
_first = 0;
}
