#include "TwoFactorOptionData.h"



TwoFactorOptionData::TwoFactorOptionData()
{
	r = 0.01;
	D1 = D2 = 0.0;
	sig1 = 0.1;
	sig2 = 0.2;
	rho = 0.5;
	K = 40.0;
	T = 0.5;
	w1 = 1.0;
	w2 = 20.0;

	type = -1;

	pay = BasketStrategy(K, static_cast<double>(type), w1, w2);
}


TwoFactorOptionData::~TwoFactorOptionData()
{
}

double TwoFactorOptionData::payoff(double x, double y) const
{
	return pay.payoff(x, y);
}
