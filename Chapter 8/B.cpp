#include "B.h"
#include <iostream>


B::B()
{
	d = new double{ 1.0 };
}


B::~B()
{
	using namespace std;

	cout << "Base destructor\n";
	delete d;
}
