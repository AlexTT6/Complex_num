#include "ComplexNum.h"
#include <cmath>
#include <iostream>

ComplexNum::ComplexNum() {};

ComplexNum::ComplexNum(const double& re)
	:mRe{re}
{}

ComplexNum::ComplexNum(const double& re, const double& im)
	: mRe{ re }
	, mIm{ im }
{}

double ComplexNum::getModulus(){
	return sqrt(mRe * mRe + mIm * mIm);
}

double ComplexNum::getRe() {
	return mRe;
}

double ComplexNum::getIm() {
	return mIm;
}
ComplexNum ComplexNum::operator+(ComplexNum other)
{
return ComplexNum (mRe + other.mRe, mIm + other.mIm ); 
}
ComplexNum ComplexNum::operator-(ComplexNum other)
{
return ComplexNum (mRe - other.mRe, mIm - other.mIm );
}
ComplexNum ComplexNum::operator*(double a)
{
return ComplexNum (mRe * a, mIm * a );
}
std::ostream& operator<<(std::ostream& ostream, ComplexNum complex) {
 return  ostream << complex.getRe() << " " << complex.getIm() << "i";
}
