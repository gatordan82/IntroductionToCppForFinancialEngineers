#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "..\Book Files\Chapter03\EuropeanOption.hpp"
#include "SteffensensSolver.h"

using namespace std;

void genericFunction(double myX, double myY,
                     double(*f)(double x, double y))
{
    double result = (*f)(myX, myY);

    cout << "Result is: " << result << endl;
}

double add(double x, double y)
{
    cout << "** Adding two numbers: " << x << ", " << y << endl;
    return x + y;
}

double multiply(double x, double y)
{
    cout << "** Multiplying two numbers: " << x << ", " << y << endl;
    return x * y;
}

double subtract(double x, double y)
{
    cout << "** Subtracting two numbers: " << x << ", " << y << endl;
    return x - y;
}

double n(double x)
{

	double A = 1.0 / sqrt(2.0 * 3.1415);
	return A * exp(-x*x*0.5);

}

double N(double x)
{ // The approximation to the cumulative normal distribution


	double a1 = 0.4361836;
	double a2 = -0.1201676;
	double a3 = 0.9372980;

	double k = 1.0 / (1.0 + (0.33267 * x));

	if (x >= 0.0)
	{
		return 1.0 - n(x)* (a1*k + (a2*k*k) + (a3*k*k*k));
	}
	else
	{
		return 1.0 - N(-x);
	}

}

double CallPrice(double sig)
{
	double S = 59.0;
	double K = 60.0;
	double r = 0.067;
	double marketPrice = 2.82;
	double b = r;
	double T = 0.25;

	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	double d2 = d1 - tmp;

	double calculatedValue =
		(S * exp((b - r) * T) * N(d1)) - (K * exp(-r * T) * N(d2));

	return marketPrice - calculatedValue;
}

int main()
{
    //double x{ 3.0 };
    //double y{ 2.0 };

    //genericFunction(x, y, add);
    //genericFunction(x, y, multiply);
    //genericFunction(x, y, subtract);

    //DatasimDate myBirthday(29, 8, 1952);
    //string myName("Daniel J. Duffy");
    //Person dd(myName, myBirthday);
    //dd.print();

    //DatasimDate bBirthday(06, 8, 1994);
    //string bName("Brendan Duffy");
    //Person bd(bName, bBirthday);
    //bd.print();

    //Employee dde(myName, myBirthday, string("Cuchulainn Chief"), 0.01, 65);
	double guess = 0.2;
	SteffensensSolver steff(guess, CallPrice);
	steff.tol = 0.0001;

	double resultST = steff.solve();
	cout << "Steffensen's Method: " << resultST << endl;
	steff.printStatistics();



    cin.get();

    return 0;
}