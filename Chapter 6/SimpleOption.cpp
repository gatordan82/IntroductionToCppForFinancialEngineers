#include <iostream>

class SimpleOption
{
public:
    double T;
    double K;

    SimpleOption() : T{ 1.0 }, K{ 100.0 } {}
    SimpleOption(double _T, double _K) : T{ _T }, K{ _K } {}
    void print() const
    {
        std::cout << "Expiry: " << T << ", " << "Strike: " << K;
    }


};

//int main()
//{
//
//
//    SimpleOption* opt = new SimpleOption;
//    opt->print();
//
//    SimpleOption* opt2 = new SimpleOption(0.25, 90.0);
//    opt2->print();
//
//    delete opt;
//    delete opt2;
//
//    opt->print();
//
//    std::cin.get();
//}