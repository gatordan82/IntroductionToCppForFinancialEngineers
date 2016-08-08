#include "Person.h"



Person::Person()
{
}

Person::Person(const std::string& name, const DatasimDate& dateOfBirth)
{
    nam = name;
    dob = dateOfBirth;
    createdD = DatasimDate();
    createdT = DatasimDateTime();
}

void Person::print() const
{
    using namespace std;
    cout << "\n** Person Data **\n";
    cout << "Name: " << nam << "Date of birth: " << dob
        << ", Age: " << age() << endl;
    cout << "Object created: " << createdD
        << " "; createdT.print(); cout << endl;
}

int Person::age() const
{
    return int(double(DatasimDate() - dob) / 365.0);
}


Person::~Person()
{
}
