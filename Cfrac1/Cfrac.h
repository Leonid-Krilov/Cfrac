#pragma once
#include<iostream>
#include<numeric>


class Cfrac
{
public:
	Cfrac();
	Cfrac(int p, int q);

	~Cfrac();

	void InputPQ();

	int getp();
	int getq();

	double innumber();

	Cfrac Dshort();

private:
	int p;
	int q;
};
