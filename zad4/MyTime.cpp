#include "MyTime.h"
#include <iostream>

Time::Time()
{
	hour = minute = 0;
}
Time::Time(int h, int m)
{
	hour = h + m / 60;
	minute = m % 60;
}
void Time::AddMin(int m)
{
	minute += m;
	hour += minute / 60;
	minute % 60;
}
void Time::AddHr(int h)
{
	hour += h;
}

void Time::Reset(int h, int m)
{
	hour = h + m / 60;
	minute = m % 60;

}

Time Time::Sum(const Time& t) const
{
	Time sum;
	sum.minute = this->minute + t.minute;
	sum.hour = this->hour + t.hour + sum.minute/60;
	sum.minute %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << hour << " godzin " << minute << " minut" << std::endl;
}
/*
Time Time::operator+(const Time& t)const
{
	Time sum;
	sum.minute = this->minute + t.minute;
	sum.hour = this->hour + t.hour + sum.minute / 60;
	sum.minute %= 60;
	return sum;
}

Time Time::operator-(const Time& t) const
{
	Time sum;
	sum.minute = this->minute - t.minute + this->hour * 60 - t.hour * 60;
	sum.hour = sum.minute / 60;
	sum.minute %= 60;
	return sum;
}

Time Time::operator*(double n) const
{
	Time temp;
	temp.minute = this->minute * n;
	temp.hour = this->hour * n;
	
	temp.hour = temp.hour + temp.minute/60;
	temp.minute %= 60;
	return temp;
	
}
*/
std::ostream & operator<<(std::ostream & os, const Time& t)
{
	os << t.minute << " minut " << t.hour << " godzin" << std::endl;
	return os;
}

Time operator+(const Time& s1, const Time& s2)
{
	Time sum;
	sum.minute = s1.minute +s2.minute;
	sum.hour = s1.hour + s2.hour + sum.minute / 60;
	sum.minute %= 60;
	return sum;
}
Time operator-(const Time& s1, const Time& s2)
{
	Time sum;
	sum.minute = s1.minute - s2.minute + s1.hour * 60 - s2.hour * 60;
	sum.hour = sum.minute / 60;
	sum.minute %= 60;
	return sum;
}

Time operator*(const Time& s1, double n)
{
	Time temp;
	temp.minute = s1.minute * n;
	temp.hour =s1.hour * n;

	temp.hour = temp.hour + temp.minute / 60;
	temp.minute %= 60;
	return temp;
}
