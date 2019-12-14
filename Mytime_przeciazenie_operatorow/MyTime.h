#pragma once
#include<iostream>
class Time
{
private:
	int hour;
	int minute;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time& t) const;
	void Show() const;
	Time operator+(const Time&) const;
	Time operator-(const Time&) const;
	Time operator*(double n) const;
	friend Time operator*(const double& n, const Time& t) { return t * n; }
	friend std::ostream & operator<<(std::ostream & os, const Time&);

};

