#pragma once
#ifndef GENERICINEQUALITIES_H
#define GENERICINEQUALITIES_H

template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y);

template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y);

template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z);

template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z);

#endif // !GENERICINEQUALITIES_H
