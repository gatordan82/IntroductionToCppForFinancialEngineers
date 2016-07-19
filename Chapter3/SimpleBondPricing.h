#pragma once

#ifndef SIMPLEBONDPRICING_H
#define SIMPLEBONDPRICING_H

#include <vector>

using namespace std;

namespace Chapter3CPPBook
{
    typedef vector<double> Vector;

    double power(double d, long n);
    double FutureValue(double P0, long nPeriods, double r);
    double FutureValue(double P0, long nPeriods, double r, long m);
    double FutureValueContinuous(double P0, long nPeriods, double r);
    double OrdinaryAnnuity(double A, long nPeriods, double r);
    double PresentValue(double Pn, long nPeriods, double r);
    double PresentValue(const Vector& prices, long nPeriods, double r);
    double PresentValueOrdinaryAnnuity(double A, long nPeriods, double r);
}


#endif // !SIMPLEBONDPRICING_H
