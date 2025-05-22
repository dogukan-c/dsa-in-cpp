// gcd_lcm.cpp
// Problem: Compute GCD and LCM of two integers
// Technique: Euclidean Algorithm for GCD
//
// GCD(a, b): Largest number that divides both a and b
// LCM(a, b): Smallest common multiple
// Relationship: a * b = GCD(a, b) * LCM(a, b)
// Turkish: EBOB, EKOK.
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
	int a = 36, b = 60;
	cout << "GCD: " << gcd(a, b) << endl;
	cout << "LCM: " << lcm(a, b) << endl;
	return 0;
}
// Output:
// GCD: 12
// LCM: 180
// Explanation:
// The gcd function computes the greatest common divisor of two integers using the Euclidean algorithm.
// The lcm function computes the least common multiple using the relationship between GCD and LCM.
// The main function demonstrates the usage of these functions by calculating the GCD and LCM of 36 and 60.
// The output shows the GCD as 12 and the LCM as 180.
// The time complexity for both GCD and LCM functions is O(log(min(a, b))) due to the Euclidean algorithm.
