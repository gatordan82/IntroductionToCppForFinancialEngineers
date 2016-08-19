#pragma once
#ifndef NONLINEARSOLVER_H
#define NONLINEARSOLVER_H


class NonlinearSolver
{
public:
    double(*myF)(double x);
    double tol;

	NonlinearSolver() {};
    NonlinearSolver(double (*function)(double)) {};
    virtual double solve() = 0; 
};

#endif // !NONLINEARSOLVER_H

