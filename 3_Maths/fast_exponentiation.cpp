// fast_exponentiation.cpp
// Problem: Compute a^b in O(log b) time
// Technique: Binary Exponentiation
//
// Example: 3^5 = 3 * 3^4 = 3 * (3^2)^2

#include <iostream>
using namespace std;

long long fastExp(long long a, long long b)
{
	long long res = 1;
	while (b > 0)
	{
		if (b & 1)
			res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

int main()
{
	cout << "3^13 = " << fastExp(3, 13) << endl;
	return 0;
}
// This code computes a^b using binary exponentiation, which reduces the time complexity to O(log b).
// It uses bitwise operations to efficiently calculate the result by squaring the base and halving the exponent.