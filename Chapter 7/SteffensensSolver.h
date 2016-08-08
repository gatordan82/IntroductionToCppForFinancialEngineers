#pragma once
#ifndef STEFFENSENSSOLVER_H
#define STEFFENSENSSOLVER_H

#include "NonlinearSolver.h"

class SteffensensSolver : public NonlinearSolver
{
private:
    double x0;
    double xPrevious, xCurrent;
    long n;

public:
    SteffensensSolver(double guess, double (*myFunc)(double x));
    virtual ~SteffensensSolver();
};

#endif // !STEFFENSENSSOLVER_H

