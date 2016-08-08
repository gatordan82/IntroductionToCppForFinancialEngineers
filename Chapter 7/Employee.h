#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>
#include <iostream>


class Employee : public Person
{
public:
    std::string fun;
    double sal;
    int rAge;

    Employee();
    virtual ~Employee();

    void print() const;
    int YearsToRetirement() const;

};

#endif

