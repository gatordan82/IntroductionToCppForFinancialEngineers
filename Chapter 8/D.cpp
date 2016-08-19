#include "D.h"
#include <iostream>


D::D(int N)
{
	iarr = new int[N];
}


D::~D()
{
	using namespace std;

	cout << "Derived destructor\n";
	delete[] iarr;
}
