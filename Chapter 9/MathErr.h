#pragma once
#include <string>
#include <vector>

class MathErr
{
private:
	std::string mess;
	std::string meth;

public:
	MathErr();
	MathErr(const std::string& message, const std::string& method);
	std::string Message() const;
	std::string Method() const;
	virtual std::vector<std::string> MessageDump() const = 0;
	virtual void print() const;

	virtual ~MathErr();
};

