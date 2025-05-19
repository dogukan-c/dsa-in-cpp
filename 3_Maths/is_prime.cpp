// is_prime.cpp
// Problem: Check if a number is prime
// Technique: Trial Division up to sqrt(n)

#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n = 15;
	cout << n << " is " << (isPrime(n) ? "prime" : "not prime") << endl;
	return 0;
}
// This code checks if a number is prime by testing divisibility from 2 up to the square root of n.
// It uses a simple loop and returns true if no divisors are found, otherwise false.