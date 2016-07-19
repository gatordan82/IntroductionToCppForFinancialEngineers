#include "LineSegment.h"



LineSegment::LineSegment()
{
}

LineSegment::LineSegment(const Point & p1, const Point & p2)
{
    e1 = p1;
    e2 = p2;
}

LineSegment::LineSegment(const LineSegment & l)
{
    e1 = l.e1;
    e2 = l.e2;
}


LineSegment::~LineSegment()
{
}

Point LineSegment::start() const
{
    return e1;
}

Point LineSegment::end() const
{
    return e2;
}

void LineSegment::start(const Point& pt)
{
    e1 = pt;
}

void LineSegment::end(const Point& pt)
{
    e2 = pt;
}

double LineSegment::length() const
{
    double dX = e1.X() - e2.X();
    double dY = e1.Y() - e2.Y();

    return sqrt(dX * dX + dY * dY);
}

Point LineSegment::midPoint() const
{
    return e1.MidPoint(e2);
}

void LineSegment::print()
{
    std::cout << e1.toString() << ", " << e2.toString() << std::endl;
}
