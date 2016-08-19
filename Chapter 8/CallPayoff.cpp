#include "CallPayoff.h"



CallPayoff::CallPayoff()
{
}

CallPayoff::CallPayoff(double strike) : K{ strike }
{
}


CallPayoff::CallPayoff(const CallPayoff & source) : Payoff(source)
{
	K = source.K;
}

CallPayoff::~CallPayoff()
{
}

double CallPayoff::Strike() const
{
	return K;
}

void CallPayoff::Strike(double NewStrike)
{
	K = NewStrike;
}

CallPayoff& CallPayoff::operator=(const CallPayoff & source)
{
	if (this == &source) return *this;

	Payoff::operator=(source);

	K = source.K;

	return *this;
}

double CallPayoff::payoff(double S) const
{
	if (S > K) return (S - K);
	else return 0.0;
}
