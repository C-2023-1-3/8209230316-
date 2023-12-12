#include"q.h"

double celsius_to_fah(double cel)
{
	double a;
	a = cel * 1.8 + 32.0;
	return a;
}
double fahrenheit_to_cels(double fah)
{
	double a;
	a = (fah - 32) / 1.8;
	return a;
}