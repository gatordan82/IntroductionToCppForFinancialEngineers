#include "Payoff.h"



Payoff::Payoff()
{
}


Payoff::~Payoff()
{
}

Payoff& Payoff::operator=(const Payoff& source)
{
	if (this == &source) return *this;

	return *this;
}
