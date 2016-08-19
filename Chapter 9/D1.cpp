#include "D1.h"
#include <iostream>


D1::D1()
{
}


D1::~D1()
{
}

void D1::print() const
{
	std::cout << "I'm a D1\n";
}

double D1::calculate(double d) const
{
	return 1.0 * d;
}
