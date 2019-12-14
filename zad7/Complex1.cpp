#include "Complex1.h"
Complex1 Complex1:: operator+(const Complex1& c)const
{
	return Complex1(this->real + c.real, this->imaginary + c.imaginary);
}
Complex1 Complex1::operator-(const Complex1& c)const
{
	return Complex1(this->real - c.real, this->imaginary - c.imaginary);
}
Complex1 Complex1::operator*(const Complex1& c)const
{
	return Complex1(this->real * c.real - this->imaginary * c.imaginary, this->real * c.imaginary + c.real * this->imaginary);
}
Complex1 Complex1::operator*(double n)const
{
	return Complex1(this->real * n, this->imaginary * n);
}
Complex1 Complex1::operator~()const
{
	return Complex1(this->real, -(this->imaginary));
}
Complex1 operator*(double n, const Complex1& c)
{
	return c * n;
}

std::ostream& operator<<(std::ostream& os, const Complex1& c)
{
	os << "(" << c.real << "," << c.imaginary << ")";
	return os;
}
std::istream& operator>>(std::istream & os, Complex1 & c)
{
	std::cout << "skladowa rzeczywista: ";
	os >> c.real;
	std::cout << "skladowa urojona: ";
	os >> c.imaginary;
	return os;
}