#pragma once
#include <iostream>

class IpAddres
{
public:
	int first;
	int second;
	int third;
	int fourth;

	friend std::ifstream& operator>>(std::ifstream& out, const IpAddres& ob);

	IpAddres(int first, int second, int third, int fourth) : first(first), second(second), third(third), fourth(fourth) {};

	bool ipvalid();

	void Getip(int size);

	int &operator==(const IpAddres obj)const;

	int &operator<(const IpAddres obj)const;

	std::ifstream& operator>>(std::ifstream& out, const IpAddres& ob);
};
