#pragma once
#include <iostream>
class Complex1
{
private:
	double real;
	double imaginary;
public:
	//Complex1() { real = 0; imaginary = 0; }
	Complex1(double r = 0, double i = 0) { real = r; imaginary = i; }
	Complex1 operator+(const Complex1& c)const;
	Complex1 operator-(const Complex1& c)const;
	Complex1 operator*(const Complex1& c)const;
	Complex1 operator*(double n)const;
	Complex1 operator~()const;
	friend Complex1 operator*(double n, const Complex1& c);
	friend std::ostream & operator<<(std::ostream & os, const Complex1 & c);
	friend std::istream& operator>>(std::istream& os,  Complex1& c);
};

