#include "SimpleBondPricing.h"
#include <assert.h>

double Chapter3CPPBook::power(double d, long n)
{
    if (n == 0) return 1.0;
    if (n == 1) return d;

    double result = d;
    for (long j = 1; j < n; j++)
        result *= d;

    return result;
}

double Chapter3CPPBook::FutureValue(double P0, long nPeriods, double r)
{
    double factor = 1.0 + r;
    return P0 * power(factor, nPeriods);
}

double Chapter3CPPBook::PresentValue(const Vector & prices, long nPeriods, double r)
{
    assert(nPeriods == prices.size());

    double factor = 1.0 + r;
    double PV = 0.0;

    for (long t = 0; t < nPeriods; t++)
        PV += prices[t] / power(factor, t + 1);

    return PV;
}
