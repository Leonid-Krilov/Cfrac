#include "Cfrac4.h"

Cfrac4::Cfrac4()
{
	this->p = 1;
	this->q = 0;
}

Cfrac4::Cfrac4(int p, int q)
{
	this->p = p;
	this->q = q;
}

Cfrac4::~Cfrac4()
{
}

int Cfrac4::getp()
{
	return p;
}

int Cfrac4::getq()
{
	return q;
}

double Cfrac4::innumber()
{
	return static_cast<double>(p) / q;;
}

void Cfrac4::InputPQ()
{
	std::cout << "\nInput P->";
	std::cin >> this->p;
	while (true)
	{
		std::cout << "\nInput Q->";
		std::cin >> this->q;
		if (this->q != 0)
			break;
	}
}

Cfrac4 Cfrac4::operator+(const Cfrac4& other)
{
	int  Nok = this->q * other.q / std::gcd(this->q, other.q);

	return Cfrac4(((this->p * (Nok / this->q)) + (other.p * (Nok / other.q))), Nok);
}

Cfrac4 Cfrac4::operator-(const Cfrac4& other)
{
	int  Nok = this->q * other.q / std::gcd(this->q, other.q);

	return Cfrac4(((this->p * (Nok / this->q)) - (other.p * (Nok / other.q))), Nok);
}

Cfrac4 Cfrac4::operator*(const Cfrac4& other)
{
	return Cfrac4((this->p * other.p), (this->q * other.q));
}

Cfrac4 Cfrac4::operator/(const Cfrac4& other)
{
	if (other.p == 0)
		std::cout << "Error! ";

	return Cfrac4((this->p * other.q), (this->q * other.p));
}