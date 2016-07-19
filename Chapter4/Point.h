#pragma once

#ifndef POINT_H
#define POINT_H

#include <string>

class Point
{
private:
    double x;
    double y;

    static Point originPoint;

public:
    Point();
    Point(double xs, double ys);
    Point(const Point& source);

    static Point& GetOriginPoint();
    virtual ~Point();

    double X() const;
    double Y() const;

    void X(double newX);
    void Y(double newY);

    Point MidPoint(const Point& p2) const;
    std::string toString() const;

    double WrongFunction();

};

#endif // !POINT_H

