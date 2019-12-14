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
std::ostream & operator<<(std::ostream & os, const Time& t)
{
	os << t.minute << " minut " << t.hour << " godzin" << std::endl;
	return os;
}