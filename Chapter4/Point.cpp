#include "Point.h"

Point Point::originPoint = Point(0.0, 0.0);

Point::Point()
{
    x = 0.0;
    y = 0.0;
}

Point::Point(double xs, double ys) : x{ xs }, y{ ys }
{
}

Point::Point(const Point& source)
{
    x = source.x;
    y = source.y;
}


Point& Point::GetOriginPoint()
{
    return originPoint;
}

Point::~Point()
{
}

double Point::X() const
{
    return x;
}

double Point::Y() const
{
    return y;
}

void Point::X(double newX)
{
    x = newX;
}

void Point::Y(double newY)
{
    y = newY;
}

Point Point::MidPoint(const Point & p2) const
{
    return Point((x + p2.x) * 0.5, (y + p2.y) * 0.5);
}

std::string Point::toString() const
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}


