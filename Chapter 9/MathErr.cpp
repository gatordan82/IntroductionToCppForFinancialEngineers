#include "MathErr.h"
#include <iostream>


MathErr::MathErr()
{
	mess = meth = std::string();
}

MathErr::MathErr(const std::string & message, const std::string & method)
	: mess{ message }, meth{ method }
{
}

std::string MathErr::Message() const
{
	return mess;
}

std::string MathErr::Method() const
{
	return meth;
}

void MathErr::print() const
{
	std::vector<std::string> r = MessageDump();
	for (int j = 0; j < r.size(); j++)
		std::cout << r[j] << std::endl;
}


MathErr::~MathErr()
{
}
