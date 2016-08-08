#include "Stack.h"
#include <iostream>


Stack& Stack::operator=(const Stack& source)
{
    stack = source.stack;
    return *this;
}

Stack::Stack()
{
    top = -1;
    capacity = 0;
    stack = new double[capacity];
}

Stack::Stack(int newSize)
{
    top = -1;
    capacity = newSize;
    stack = new double[capacity];
}


Stack::~Stack()
{
    delete[] stack;
}

void Stack::Push(double newItem)
{
    if (top + 1 >= capacity)
    {
        std::cout << "Stack is already at capacity!" << std::endl;
        return;
    }
        
    top += 1;
    stack[top] = newItem;
}

double Stack::Pop()
{
    if (top <= -1)
    {
        std::cout << "Stack is empty!" << std::endl;
        return -1;
    }
        
    top -= 1;
    return stack[top + 1];
}
