#include "Complex.h"

Complex::Complex()
	:Pair(0, 0)
{}

Complex::Complex(double x, double y)
	: Pair(x, y)
{}

Complex::Complex(const Complex& c)
	: Pair(c)
{}

Complex::~Complex()
{ }

Complex operator + (const Complex& a, const Complex& b)
{
	return Complex(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

Complex operator * (const Complex& a, const Complex& b)
{
	return Complex(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}

bool operator == (const Complex& a, const Complex& b)
{
	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}
