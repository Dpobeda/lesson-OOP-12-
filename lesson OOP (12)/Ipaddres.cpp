#include <iostream>
#include "Ipaddres.h"

IpAddres::IpAddres(int first, int second, int third, int fourth) : first(first), second(second), third(third), fourth(fourth) {}

bool IpAddres::ipvalid()
{
	if (first <= 255 || first >= 0, second <= 255 || second >= 0, third <= 255 || third >= 0, fourth <= 255 || fourth >= 0)
		return true;
	return false;
}

void IpAddres::Getip(int size)
{

}

int& IpAddres::operator==(const IpAddres obj) const
{
	return;
}

int& IpAddres::operator<(const IpAddres obj) const
{
	return;
}


