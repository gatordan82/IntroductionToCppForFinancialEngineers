#include "EuropeanOption.h"
#include <iostream>

//int main()
//{
//    using namespace std;
//
//    EuropeanOption callOption;
//    cout << "Call option on a stock: " << callOption.Price() << endl;
//
//    EuropeanOption indexOption;
//    indexOption.optType = "P";
//    indexOption.U = 100.0;
//    indexOption.K = 95.0;
//    indexOption.T = 0.5;
//    indexOption.r = 0.10;
//    indexOption.sig = 0.20;
//    double q{ 0.05 };
//    indexOption.b = indexOption.r - q;
//
//    cout << "Put option on index: " << indexOption.Price() << endl;
//
//    EuropeanOption futureOption;
//    futureOption.optType = "P";
//    futureOption.U = 19.0;
//    futureOption.K = 19.0;
//    futureOption.T = 0.75;
//    futureOption.r = 0.10;
//    futureOption.sig = 0.28;
//    futureOption.b = 0.0;
//
//    cout << "Put option on future: " << futureOption.Price() << endl;
//
//    futureOption.toggle();
//    cout << "Call on future: " << futureOption.Price() << endl;
//
//    cin.clear();
//    cin.ignore();
//    cin.get();
//
//    return 0;
//}