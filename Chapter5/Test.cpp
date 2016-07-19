#include <iostream>
#include "DateAndTime\DatasimDate.hpp"

using namespace std;

int main()
{
    DatasimDate fixed(1, 1, 94);
    DatasimDate current(1, 1, 94);
    int interval = 30;

    for (int j = 0; j < 12; j++)
    {
        current = fixed - (j * interval);
        cout << current << endl;
    }

    cout << "Offset stuff\n";

    DatasimDate today;
    DatasimDate d3 = today.add_quarter();
    DatasimDate d4 = today.add_halfyear();

    cout << d3 << endl;
    cout << d4 << endl;

    d3 = d3.sub_quarter();
    d4 = d4.sub_halfyear();

    cout << d3 << endl;
    cout << d4 << endl;


    cin.get();
}