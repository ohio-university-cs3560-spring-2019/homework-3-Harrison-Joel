/**\file*/
/*******************************
*	Joel Harrison	HW3
*	cs3560	Ohio University
*	Fixing standard deviation function
*	2/11/19
*******************************/


#include <iostream>
#include <vector>
#include <cmath>

/**
*
*	\breif Calculates and returns the standard deviation of an array
*	\param a  the pointer of an array of integers
*	\param n  the size of the array in the first parameter
*	\return int
*/



int deviation( int* a, int n )
{
	std::vector<int> v;
	for (size_t i = 0; i <= n; i++) {
		v.push_back(a[i]);
	}
	//read into vector

	double sum = 0;

	for(size_t i = 0; i <= v.size(); i++)
	{
		sum += v[i];
	} 
	double mean = sum /= v.size();
	double stddev = 0;
	for(size_t i = 0; i <= v.size() -1; i++)
	{
		stddev = stddev + (v[i] - mean) * (v[i] - mean); 
	}
	stddev /= v.size();
	if(stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
