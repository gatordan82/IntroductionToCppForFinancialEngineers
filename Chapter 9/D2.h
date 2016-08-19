#pragma once
#include "Base.h"
class D2 :
	public Base
{
public:
	D2();
	virtual ~D2();

	virtual void print() const;
	virtual double calculate(double d) const;
};

