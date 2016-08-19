#pragma once
class MultiAssetPayoffStrategy
{
public:
	MultiAssetPayoffStrategy() {};
	virtual ~MultiAssetPayoffStrategy();

	virtual double payoff(double S1, double S2) const = 0;
};

