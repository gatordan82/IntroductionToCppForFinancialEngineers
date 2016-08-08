#include "Employee.h"



Employee::Employee()
{
}


Employee::~Employee()
{
}

void Employee::print() const
{
    std::cout << "\n**Employee Data **\n";
    Person::print();
    std::cout << "\nFunction: " << fun << ", Salary: "
        << sal << ", Retires at: " << rAge << std::endl
        << YearsToRetirement() << " years to retirement.\n";
}

int Employee::YearsToRetirement() const
{
    return rAge - age();
}
