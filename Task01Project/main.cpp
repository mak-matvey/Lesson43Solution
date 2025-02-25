#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{

	int a = 1;
	int b = 2;

	cout << "Before: a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "After: a = " << a << ", b = " << b << endl;

	return 0;
}