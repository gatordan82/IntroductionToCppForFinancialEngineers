#include "Base.h"
#include "D1.h"
#include "D2.h"
#include <iostream>
#include <vector>
#include "ZeroDivide.h"

//int main()
//{
//	D1 d1, d11;
//	D2 d2;
//
//	const type_info& myRef = typeid(d1);
//
//	using namespace std;
//
//	cout << "Human-readable name: " << myRef.name() << endl;
//
//	if (typeid(d1) == typeid(d11))
//		cout << "Types are the same\n";
//
//	if (typeid(d1) != typeid(d2))
//		cout << "Types are NOT the same\n";
//
//	Base* b = &d1;
//
//	const type_info& myRef2 = typeid(*b);
//	cout << "Human-readable name: " << myRef2.name() << endl;
//
//	const int size{ 10 };
//
//	Base* myArr[size];
//
//	for (int j = 0; j < 6; j++)
//		myArr[j] = &d1;
//
//	for (int k = 6; k < size; k++)
//		myArr[k] = &d2;
//
//	int counterD1{ 0 };
//	int counterD2{ 0 };
//
//	for (int i = 0; i < size; i++)
//	{
//		if (typeid(*myArr[i]) == typeid(D1))
//		{
//			cout << "We have a D1\n";
//			counterD1++;
//		}
//
//		if (typeid(*myArr[i]) == typeid(D2))
//		{
//			cout << "We have a D2\n";
//			counterD2++;
//		}
//	}
//
//	cout << "Number of D1s: " << counterD1 << endl;
//	cout << "Number of D2s: " << counterD2 << endl;
//
//	D1 d1A;
//	Base* base2 = &d1A;
//
//	D1* d1Cast = dynamic_cast<D1*> (base2);
//
//	if (d1Cast == 0)
//		cout << "Case not possible:\n";
//	else
//	{
//		cout << "Cast is possible:\n";
//		d1Cast->print();
//	}
//	
//	D1* dd = new D1;
//	Base* b3 = dynamic_cast<Base*> (dd);
//
//	if (b3 == 0)
//		cout << "Cast not possible:\n";
//	else
//	{
//		cout << "Cast is possible:\n";
//		b3->print();
//	}
//
//	Base* bA = &d1;
//	Base* bB = &d2;
//
//	D1* dA = static_cast<D1*> (bA);
//
//	delete dd;
//
//


template <class V> V sumReciprocals(const std::vector<V>& array)
{
	V ans = V(0.0);
	for (int j = 0; j < array.size(); j++)
	{
		if (fabs(array[j] < 0.001))
			throw ZeroDivide("Divide by zero", "sumReciprocals", std::string());
		ans += 1.0 / array[j];
	}

	return ans;
}

int main()
{
	using namespace std;
	int size{ 10 };
	double elementValue{ 3.1415 };

	vector<double> myArray(size, elementValue);
	myArray[5] = 0.0;
	try
	{
		double answer = sumReciprocals(myArray);
		cout << answer << endl;
	}
	catch (ZeroDivide& exception)
	{
		exception.print();
	}	

	cin.get();

	return 0;

}