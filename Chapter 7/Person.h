#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "..\Book Files\Utilities\DateAndTime\DatasimDate.hpp"
#include "..\Book Files\Utilities\DateAndTime\DateTime.hpp"

class Person
{
public:
    std::string nam;
    DatasimDate dob;
    DatasimDate createdD;
    DatasimDateTime createdT;
    
    
    Person();
    Person(const std::string& name, const DatasimDate& dateOfBirth);
    void print() const;
    int age() const;
    virtual ~Person();
};

#endif

