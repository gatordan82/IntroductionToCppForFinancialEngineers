#pragma once
template <class Type = double> class Range
{
private:
	Type lo;
	Type hi;
	Range();

public:
	Range(const Type& low, const Type& high);
	Range(const Range<Type>& ran2);

	virtual ~Range();

	void low(const Type& t1);
	void high(const Type& t1);

	Type low() const;
	Type high() const;

	Type length() const;

	bool left(const Type& value) const;
	bool right(const Type& value) const;
	bool contains(const Type& value) const;

	Range<Type>& operator=(const Range<Type>& ran2);

};


