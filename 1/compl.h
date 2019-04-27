#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class complex {
public:
	float re;
	float im;
};

complex summ(complex a, complex b);
complex dif(complex a, complex b);
complex multi(complex a, complex b);
complex div(complex a, complex b);
float abs(complex a);

#endif