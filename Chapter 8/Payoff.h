#pragma once
class Payoff
{
public:
	Payoff();
	Payoff(const Payoff& source) {};
	virtual ~Payoff();

	Payoff& operator=(const Payoff& source);

	virtual double payoff(double S) const = 0;

};

