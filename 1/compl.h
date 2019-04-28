#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class complex {
public:
	double re;
	double im;
};

complex summ(complex a, complex b);
complex multi(complex a, complex b);
complex dif(complex a, complex b);
complex div(complex a, complex b);
double abs(complex a);

#endif