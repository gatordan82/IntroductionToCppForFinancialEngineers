#pragma once
#include "TwoFactorInstrument.h"
#include "BasketStrategy.h"


class TwoFactorOptionData :
	public TwoFactorInstrument
{
public:
	BasketStrategy pay;

	double r;
	double D1, D2;
	double sig1, sig2;
	double rho;
	double K;
	double T;
	double SMax1, SMax2;
	double w1, w2;
	int type;

public:
	TwoFactorOptionData();
	virtual ~TwoFactorOptionData();

	double payoff(double x, double y) const;
};

