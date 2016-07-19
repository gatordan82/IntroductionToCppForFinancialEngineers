#include "SimpleBondPricing.h"
#include <iostream>

using namespace Chapter3CPPBook;
using namespace std;

int main()
{
    Vector futureValues(5);

    for (long j = 0; j < 4; j++)
        futureValues[j] = 100.0;

    futureValues[4] = 1100.0;

    int nPeriods = 5;
    double r = 0.0625;
    cout << "**Present value, series: " << PresentValue(futureValues, nPeriods, r) << endl;

    cin.clear();
    cin.ignore();
    cin.get();
}