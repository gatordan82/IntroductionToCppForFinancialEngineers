#pragma once

#ifndef LINESEGMENT_H
#define LINESEGMENT_H

#include "Point.h"
#include <cmath>
#include <iostream>


class LineSegment
{
private:
    Point e1; // Start endpoint
    Point e2; // End endpoint

public:
    // Constructors
    LineSegment();
    LineSegment(const Point& p1, const Point& p2);
    LineSegment(const LineSegment& l);

    // Destructor
    virtual ~LineSegment();

    // Accessing functions
    Point start() const;
    Point end() const;

    // Modifiers
    void start(const Point& pt);
    void end(const Point& pt);

    // Arithmetic
    double length() const;

    // Interaction with Points
    Point midPoint() const;

    // Print a line
    void print();
};

#endif // !LINESEGMENT_H