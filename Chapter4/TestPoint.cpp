#include "Point.h"
#include <iostream>
#include "LineSegment.h"

using namespace std;



int main()
{
    Point test = Point(1.0, 2.0);
    cout << "Point is " << test.toString() << endl;
    cout << "Midpoint between test and the origin: " << test.MidPoint(Point()).toString() << endl;

    Point a = Point(1.0, 1.0);
    Point b = Point(2.0, 3.0);
    Point c = Point(10.0, 10.0);

    LineSegment l1 = LineSegment(a, b);
    LineSegment l2 = LineSegment(b, c);
    LineSegment l3 = LineSegment(a, c);

    cout << "Midpoint of l1 is " << l1.midPoint().toString() << endl;
    cout << "Length of l3 is " << l3.length() << endl;
    cout << "Midpoint of l2 is " << l2.midPoint().toString() << endl;

    cin.clear();
    cin.ignore();
    cin.get();
}