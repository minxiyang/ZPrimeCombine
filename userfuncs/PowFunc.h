/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef POWFUNC_H
#define POWFUNC_H

#include "RooAbsReal.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class PowFunc : public RooAbsReal {
public:
  PowFunc() {} ; 
  PowFunc(const char *name, const char *title,
	  RooAbsReal& x,
	  RooAbsReal& y);
  PowFunc(const PowFunc& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new PowFunc(*this,newname); }
  inline virtual ~PowFunc() { }

protected:

  RooRealProxy x_;
  RooRealProxy y_;

  Double_t evaluate() const ;

private:

  ClassDef(PowFunc,1) // Your description goes here...
};
 
#endif
