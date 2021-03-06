/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

// class declaration include file below retrieved from workspace code storage
#include "Pol3.h"
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(Pol3) 

Pol3::Pol3(const char *name, const char *title, 
	   RooAbsReal& x,RooAbsReal& p0,RooAbsReal& p1,RooAbsReal& p2,
	   RooAbsReal& p3):
  RooAbsReal(name,title), 
  x_("x","",this,x),
  p0_("p0","",this,p0),
  p1_("p1","",this,p1), 
  p2_("p2","",this,p2),
  p3_("p3","",this,p3)
{ 
} 


 Pol3::Pol3(const Pol3& other, const char* name) :  
   RooAbsReal(other,name), 
   x_("x",this,other.x_),
   p0_("p0",this,other.p0_),
   p1_("p1",this,other.p1_), 
   p2_("p2",this,other.p2_),
   p3_("p3",this,other.p3_)
 { 
 } 



 Double_t Pol3::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   return p0_+ p1_*x_+ p2_*x_*x_ + p3_*x_*x_*x_;
 } 



