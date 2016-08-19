#include "ZeroDivide.h"



ZeroDivide::ZeroDivide()
{
}

ZeroDivide::ZeroDivide(const std::string & message, const std::string & method, const std::string & annotation)
	: MathErr(message, method)
{
	mess = annotation;
}

std::vector<std::string> ZeroDivide::MessageDump() const
{
	std::vector<std::string> result(3);
	result[0] = Message();
	result[1] = Method();
	result[2] = mess;

	return result;
}


ZeroDivide::~ZeroDivide()
{
}
