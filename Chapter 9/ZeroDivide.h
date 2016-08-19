#pragma once
#include "MathErr.h"
#include <string>
#include <vector>

class ZeroDivide :
	public MathErr
{
private:
	std::string mess;

public:
	ZeroDivide();
	ZeroDivide(const std::string& message, const std::string& method,
				const std::string& annotation);
	std::vector<std::string> MessageDump() const;
	virtual ~ZeroDivide();
};

