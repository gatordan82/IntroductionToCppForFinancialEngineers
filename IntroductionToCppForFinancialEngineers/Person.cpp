#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const string& name) : nam{ name }
{
}

void Person::print()
{
    cout << "My name is " << nam << endl;
    cin.clear();
    cin.ignore();
    cin.get();
}


Person::~Person()
{
}
