/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

// class declaration include file below retrieved from workspace code storage
#include "Pol9.h"
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(Pol9) 

Pol9::Pol9(const char *name, const char *title, 
	   RooAbsReal& x,RooAbsReal& p0,RooAbsReal& p1,RooAbsReal& p2,
	   RooAbsReal& p3,RooAbsReal& p4,RooAbsReal& p5,RooAbsReal& p6,
	   RooAbsReal& p7,RooAbsReal& p8,RooAbsReal& p9):
  RooAbsReal(name,title), 
  x_("x","",this,x),
  p0_("p0","",this,p0),
  p1_("p1","",this,p1), 
  p2_("p2","",this,p2),
  p3_("p3","",this,p3),
  p4_("p4","",this,p4),
  p5_("p5","",this,p5),
  p6_("p6","",this,p6),
  p7_("p7","",this,p7),
  p8_("p8","",this,p8),
  p9_("p9","",this,p9)
{ 
} 


 Pol9::Pol9(const Pol9& other, const char* name) :  
   RooAbsReal(other,name), 
   x_("x",this,other.x_),
   p0_("p0",this,other.p0_),
   p1_("p1",this,other.p1_), 
   p2_("p2",this,other.p2_),
   p3_("p3",this,other.p3_),
   p4_("p4",this,other.p4_),
   p5_("p5",this,other.p5_), 
   p6_("p6",this,other.p6_),
   p7_("p7",this,other.p7_),
   p8_("p8",this,other.p8_),
   p9_("p9",this,other.p9_)
 { 
 } 



 Double_t Pol9::evaluate() const 
 { 
   const double x2 = x_*x_;
   const double x3 = x2*x_;
   const double x4 = x3*x_;
   const double x5 = x4*x_;
   const double x6 = x5*x_;
   const double x7 = x6*x_;
   const double x8 = x7*x_;
   const double x9 = x8*x_;

   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   return p0_+ p1_*x_+ p2_*x2 + p3_*x3
     + p4_*x4 + p5_*x5+ p6_*x6
     + p7_*x7 + p8_*x8 + p9_*x9;
 } 



