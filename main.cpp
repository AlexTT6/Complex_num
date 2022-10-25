#include"ComplexNum.h"
#include <iostream>
#include <vector>
#include <algorithm>

bool compare(ComplexNum left,ComplexNum  right)
{
	return left.getModulus() < right.getModulus();
}

int main(){
	// input N complex numbers, sort them by modulus
	// output a sorted sequence of complex numbers  
	int N;
	std::cin >> N;
	std::vector<ComplexNum> complex_numbers{}; 
	
	for(int i = 0; i<N; i++)
	{
	double a, b;
	std::cin >> a >> b;

	ComplexNum z (a, b);
	complex_numbers.push_back(z);
	
	
	}
	std::sort(complex_numbers.begin(),complex_numbers.end(),compare);
	for(int i = 0; i< complex_numbers.size(); i++ )
	{
		std::cout << complex_numbers[i]<<std::endl;
	}
	return 0;	
}
