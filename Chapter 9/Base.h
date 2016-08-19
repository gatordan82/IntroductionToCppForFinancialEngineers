#pragma once
class Base
{
public:
	Base();
	virtual ~Base();

	virtual void print() const;
	virtual double calculate(double d) const = 0;
};

