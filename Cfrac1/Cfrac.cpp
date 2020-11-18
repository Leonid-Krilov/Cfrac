#include "Cfrac.h"

Cfrac::Cfrac()
{
}

Cfrac::Cfrac(int p, int q)
{
	this->p = p;
	this->q = q;
}

Cfrac::~Cfrac()
{
}

void Cfrac::InputPQ()
{
	std::cout << "\nInput P ";
	std::cin >> this->p;

	std::cout << "\nInput Q ";
	std::cin >> this->q;
}

int Cfrac::getp()
{
	return p;
}

int Cfrac::getq()
{
	return q;
}

double Cfrac::innumber()
{
	return static_cast<double>(p) / q;
}

Cfrac Cfrac::Dshort()
{
	if (((q < 0) && (p > 0)) || ((q < 0) && (p < 0)))
	{
		p = -p;
		q = -q;
	}

	auto nod = std::gcd(p, q);
	return Cfrac((p / nod), (q / nod));
	
}