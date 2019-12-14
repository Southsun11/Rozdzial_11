#include "Stonewt.h"
#include <iostream>

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{}
void Stonewt::show_stn()const
{
	std::cout << stone << " kamieni " << pds_left << " funtow " << std::endl;
}
void Stonewt::show_lbs() const
{
	std::cout << pounds << " funtow" << std::endl;
}

Stonewt::operator double() const
{
	return pounds;
}

Stonewt::operator int() const
{
	return int(pounds + 0.5);
}