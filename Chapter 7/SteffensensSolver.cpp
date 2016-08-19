#include "SteffensensSolver.h"
#include <iostream>
#include <math.h>

SteffensensSolver::SteffensensSolver(double guess, double(*myFunc)(double x)) : x0{ guess }
{
	xPrevious = x0;
	myF = myFunc;
}

double SteffensensSolver::solve()
{
	double tmp;
	double hn;

	n = 1;
	xPrevious = x0;
L1:
	tmp = myF(xPrevious);
	hn = (myF(xPrevious + tmp) - tmp) / tmp;
	hn = tmp / hn;
	xCurrent = xPrevious - hn;
	xPrevious = xCurrent;

	n++;
	if (::fabs(hn) <= tol)
		return xCurrent;

	goto L1;
}

SteffensensSolver::~SteffensensSolver()
{
}

void SteffensensSolver::printStatistics() const
{
	using namespace std;

	cout << "\nData pertaining to Steffensen's method\n";
	cout << "Value: " << xCurrent << endl;
	cout << "Number of iterations (actual): " << n << endl;
}
