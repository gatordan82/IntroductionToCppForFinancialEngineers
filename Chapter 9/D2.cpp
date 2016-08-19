#include "D2.h"
#include <iostream>


D2::D2()
{
}


D2::~D2()
{
}

void D2::print() const
{
	std::cout << "I'm a D2\n";
}

double D2::calculate(double d) const
{
	return 2.0 * d;
}
