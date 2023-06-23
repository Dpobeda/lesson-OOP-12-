#pragma once
#include <iostream>
#include "Ipaddres.h"

class Maskip : IpAddres
{
public:
	int first;
	int last;
	int third;
	int fourth;
	friend std::ifstream& operator>>(std::ifstream& out, const Maskip& ob);

	std::ifstream& operator>>(std::ifstream& out, const Maskip& ob);

	bool realmask(int first, int second, int third, int fourth);

	void Calculated();

};
