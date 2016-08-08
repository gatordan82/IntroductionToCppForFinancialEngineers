#pragma once

#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    int top;
    int capacity;
    double* stack;

    Stack(const Stack& source);
    Stack& operator=(const Stack& source);

public:
    Stack();
    Stack(int newSize);
    virtual ~Stack();

    void Push(double newItem);
    double Pop();
};

#endif // !STACK_H

