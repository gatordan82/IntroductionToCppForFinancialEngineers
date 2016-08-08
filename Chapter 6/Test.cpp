#include <iostream>
#include "..\Book Files\Chapter06\Complex.hpp"
#include "Stack.h"

using namespace std;

Complex myFunc(const Complex& z)
{
    return z * z;
}

Complex ComplexProduct(Complex* carr, int n)
{
    Complex product = carr[0];

    for (int j = 1; j < n; j++)
        product *= carr[j];

    return product;
}

Complex ComplexSum(Complex* carr, int n)
{
    Complex sum = carr[0];

    for (int j = 1; j < n; j++)
        sum += carr[j];

    return sum;
}

int main()
{
    Complex z1(1.0, 1.0);
    Complex z2(2.0, 3.0);
    Complex z3 = z1 * z2;
    Complex z4 = 2.0 * z3;
    Complex z5 = -z3;

    int Size = 5;
    Complex* cpArray = new Complex[Size];
    cpArray[0] = z1;
    cpArray[1] = z2;
    cpArray[2] = z3;
    cpArray[3] = z4;
    cpArray[4] = z5;

    for (int j = 0; j < Size; j++)
        cout << myFunc(cpArray[j]) << ", ";

    delete[] cpArray;

    cout << endl;

    const int N = 5;
    Complex fixedArray[N];
    for (int i = 0; i < Size; i++)
        fixedArray[i] = Complex((double)i, 0.0);

    Complex product = ComplexProduct(fixedArray, Size);
    cout << "Product: " << product << endl;

    Complex sum = ComplexSum(fixedArray, Size);
    cout << "Sum: " << sum << endl;

    Stack st(4);
    st.Push(1.0);
    st.Push(2.0);
    st.Push(3.0);
    st.Push(4.0);
    st.Push(5.0);
    cout << "Top of stack is " << st.Pop() << endl;



    cin.get();
}