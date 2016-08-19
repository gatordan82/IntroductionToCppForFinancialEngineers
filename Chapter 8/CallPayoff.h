#pragma once
#include "Payoff.h"
class CallPayoff :
	public Payoff
{
private: 
	double K;

public:
	CallPayoff();
	CallPayoff(double strike);
	CallPayoff(const CallPayoff& source);
	virtual ~CallPayoff();

	double Strike() const;
	void Strike(double NewStrike);

	CallPayoff& operator=(const CallPayoff& source);

	double payoff(double S) const;
};

