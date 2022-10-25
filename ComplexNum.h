#ifndef COMPLEX_NUM_H
#define COMPLEX_NUM_H

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
	
};

#endif // COMPLEX_NUM_H
