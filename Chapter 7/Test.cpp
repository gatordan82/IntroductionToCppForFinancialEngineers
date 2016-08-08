#include <iostream>
#include "Person.h"
#include "Employee.h"

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

int main()
{
    double x{ 3.0 };
    double y{ 2.0 };

    genericFunction(x, y, add);
    genericFunction(x, y, multiply);
    genericFunction(x, y, subtract);

    DatasimDate myBirthday(29, 8, 1952);
    string myName("Daniel J. Duffy");
    Person dd(myName, myBirthday);
    dd.print();

    DatasimDate bBirthday(06, 8, 1994);
    string bName("Brendan Duffy");
    Person bd(bName, bBirthday);
    bd.print();

    Employee dde(myName, myBirthday, string("Cuchulainn Chief"), 0.01, 65);


    cin.get();

    return 0;
}