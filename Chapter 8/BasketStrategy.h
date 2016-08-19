#pragma once
#include "MultiAssetPayoffStrategy.h"

class BasketStrategy : public MultiAssetPayoffStrategy
{
private:
	double K;
	double w;
	double w1, w2;

public:
	BasketStrategy();
	BasketStrategy(double strike, double cp,
		double weight1, double weight2);
	virtual ~BasketStrategy();

	double payoff(double S1, double S2) const;
};

