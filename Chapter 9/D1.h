#pragma once
#include "Base.h"
class D1 :
	public Base
{
public:
	D1();
	virtual ~D1();

	virtual void print() const;
	virtual double calculate(double d) const;
};

