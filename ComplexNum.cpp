#include "ComplexNum.h"
#include <cmath>

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
