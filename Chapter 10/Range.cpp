#include "Range.h"



template <class Type> 
Range::Range()
{
}

template<class Type>
Range<Type>::Range(const Type & low, const Type & high)
{
	if (low < high)
	{
		lo = low;
		hi = high;
	}
	else
	{
		lo = high;
		hi = low;
	}
}


template<class Type>
Range::~Range()
{
}

template<class Type>
inline bool Range<Type>::contains(const Type & value) const
{
	if ((lo <= t) && (hi >= t))
		return true;

	return false;
}