#pragma once
#include <string>
using namespace std;

class EuropeanOption
{
private:
    void init();
    void copy(const EuropeanOption& o2);

    double CallPrice() const;
    double PutPrice() const;
    double CallDelta() const;
    double PutDelta() const;

public:
    // Public member data
    double r;
    double sig;
    double K;
    double T;
    double U;
    double b;
    string optType;

    // Constructors
    EuropeanOption();
    EuropeanOption(const EuropeanOption& option2);
    EuropeanOption(const string& optionType);

    // Destructor
    virtual ~EuropeanOption();

    // Assignment operator
    EuropeanOption& operator=(const EuropeanOption& option2);

    // Functions to calculate option price and (some) sensitivites
    double Price() const;
    double Delta() const;

    // Modifier functions
    void toggle();
};

