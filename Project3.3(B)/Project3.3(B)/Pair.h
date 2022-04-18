#pragma once
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Pair
{
	double x, y;

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double x) { this->x = x; }
	void SetY(double y) { this->y = y; }

	Pair();
	Pair(const double, const double);
	Pair(const Pair&);
	~Pair();

	Pair& operator = (const Pair& p);
	operator string() const;

	friend ostream& operator <<(ostream&, const Pair&);
	friend istream& operator >>(istream&, Pair&);

	friend bool operator == (const Pair& p1, const Pair& p2);
	friend bool operator != (const Pair& p1, const Pair& p2);
	friend bool operator > (const Pair& p1, const Pair& p2);
	friend bool operator < (const Pair& p1, const Pair& p2);
	friend bool operator >= (const Pair& p1, const Pair& p2);
	friend bool operator <= (const Pair& p1, const Pair& p2);
};

