#pragma once
#include <iostream>
#include<numeric>
#include<exception>

class Cfrac4
{
public:
	Cfrac4();
	Cfrac4(int p, int q);
	~Cfrac4();

	int getp();
	int getq();

	double innumber();

	void InputPQ();

	Cfrac4 operator +(const Cfrac4& other);
	Cfrac4 operator -(const Cfrac4& other);
	Cfrac4 operator *(const Cfrac4& other);
	Cfrac4 operator /(const Cfrac4& other);
private:
	int p;
	int q;
};
