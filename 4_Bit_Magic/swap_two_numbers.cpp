// swap_two_numbers.cpp
// Problem: Swap two numbers without using temp variable
// Technique: XOR Swap

#include <iostream>
using namespace std;

int main()
{
	int a = 5, b = 7;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << "After swap: a = " << a << ", b = " << b << endl;
	return 0;
}
