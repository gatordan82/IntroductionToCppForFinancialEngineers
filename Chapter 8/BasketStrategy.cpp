#include "BasketStrategy.h"



BasketStrategy::BasketStrategy() : MultiAssetPayoffStrategy()
{
	K = 95.0;
	w = 1.0;
	w1 = 0.5;
	w2 = 0.5;
}

BasketStrategy::BasketStrategy(double strike, double cp, 
	                           double weight1, double weight2)
				: MultiAssetPayoffStrategy()
{
	K = strike;
	w = cp;
	w1 = weight1;
	w2 = weight2;
}



BasketStrategy::~BasketStrategy()
{
}

double BasketStrategy::payoff(double S1, double S2) const
{
	double sum = w1 * S1 + w2 * S2;

	if (w * (sum - K) > 0)
		return w * (sum - K);
	else
		return 0.0 ;
}
