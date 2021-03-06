#include "pch.h"
#include "compl.h"

complex summ(complex a, complex b) {
	complex res;
	res.re = a.re + b.re;
	res.im = a.im + b.im;
	return res;
}

complex multi(complex a, complex b) {
	complex res;
	res.re = a.re*b.re - a.im*b.im;
	res.im = a.re * b.im + b.re * a.im;
	return res;
}

complex dif(complex a, complex b) {
	complex res;
	res.re = a.re - b.re;
	res.im = a.im - b.im;
	return res;
}

complex div(complex a, complex b) {
	complex res;
	res.re = (a.re * b.re + a.im * b.im) / (pow(b.re, 2) + pow(b.im, 2));
	res.im = (b.re * a.im - a.re * b.im) / (pow(b.re, 2) + pow(b.im, 2));
	return res;
}

double abs(complex a) {
	return sqrt(pow(a.re, 2) + pow(a.im, 2));
}