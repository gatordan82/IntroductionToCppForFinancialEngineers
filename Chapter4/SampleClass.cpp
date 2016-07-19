#include "SampleClass.h"
#include <iostream>

using namespace std;


SampleClass::SampleClass()
{
}

SampleClass::SampleClass(double d)
{
    for (int i = 0; i < 1000; i++)
        contents[i] = d;
}

SampleClass::~SampleClass()
{
    cout << "SampleClass instance being deleted\n";
}

double Sum(SampleClass myClass)
{
    double result = myClass.contents[0];
    for (int i = 1; i < 1000; i++)
        result += myClass.contents[i];

    return result;
}

double Sum2(SampleClass& myClass)
{
    double result = myClass.contents[0];
    for (int i = 1; i < 1000; i++)
        result += myClass.contents[0];

    return result;
}

//int main()
//{
//    SampleClass sc(1.0);
//    cout << "Sum of elements is: " << Sum(sc) << endl;
//    cout << "Sum of elements is: " << Sum2(sc) << endl;
//
//    cin.clear();
//    cin.ignore();
//    cin.get();
//}