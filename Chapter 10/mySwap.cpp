#include <iostream>


template <class V> void mySwap(V& v1, V& v2)
{
	V tmp = v2;
	v2 = v1;
	v1 = tmp;
}

//int main()
//{
//	int j{ 10 };
//	int k{ 20 };
//	mySwap(j, k);
//}