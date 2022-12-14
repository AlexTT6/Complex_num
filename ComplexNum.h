#ifndef COMPLEX_NUM_H
#define COMPLEX_NUM_H
#include <iostream>
class ComplexNum {
private:
	double mRe = 0; // real parth
	double mIm = 0; // imaginary path 
public:
	ComplexNum();
	ComplexNum(const double& a); 
	ComplexNum(const double& a, const double& b);

	double getModulus();
 
	double getRe();

	double getIm();

	//// Overload operators:
	//  
	// ComplexNum + ComplexNum, 
	// ComplexNum - ComplexNum, 
	// ComplexNum * k, where k is a constant
	// and operator<<
	// 
	ComplexNum operator+(ComplexNum other);
	ComplexNum operator-(ComplexNum other);
	ComplexNum operator*(double a);
};
std::ostream& operator<<(std::ostream& ostream, ComplexNum complex);
#endif // COMPLEX_NUM_H
