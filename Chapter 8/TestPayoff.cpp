#include <iostream>
#include "CallPayoff.h"

int main()
{
	CallPayoff call(20.0);

	using namespace std;

	cout << "Give a stock price (plain call): ";
	double S;
	cin >> S;

	cout << "Call Payoff is: " << call.payoff(S) << endl;

	cin.ignore();
	cin.get();

	return 0;
}