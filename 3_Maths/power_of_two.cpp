// power_of_two.cpp
// Problem: Check if a number is a power of 2
// Technique: Bit manipulation
//
// Power of 2: only one bit is set → n & (n - 1) == 0

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
	return ((n > 0) && ((n & (n - 1)) == 0));
}

int main()
{
	int n = 64;
	cout << n << " is " << (isPowerOfTwo(n) ? "a power of 2" : "not a power of 2") << endl;
	return 0;
}
