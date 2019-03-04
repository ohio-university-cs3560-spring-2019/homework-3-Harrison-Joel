/*******************************
*	Joel Harrison	HW7
*	cs3560	Ohio University
*	standard deviation using a variadic function
*	03/03/19
*******************************/
#include "hw7.h"

#include <iostream>
#include <cmath>
#include <cstdarg>

using namespace std;

double stddev(int n, ...) {
	va_list args;	// list of arguments
	va_start(args, n);
	double sum = 0;

	int tmpint;
	//add up list of arguments into sum
	for (int i = 0; i < n; ++i) {
		tmpint = va_arg(args, int);
		sum += tmpint;
	}
	



	double mean = sum /= n; //find mean
	double stddev = 0;//stddev variable

	va_end(args);
	va_start(args, n);
	for (int i = 0; i < n; ++i) {
		int tmpArg = va_arg(args, int);
		stddev += (tmpArg - mean) * (tmpArg - mean);
	}

	stddev /= n;

	va_end(args);
	if (stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);//return square root
}