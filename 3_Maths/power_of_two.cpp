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
// Output: 64 is a power of 2
// Explanation:
// The isPowerOfTwo function checks if a number is a power of 2 using bit manipulation.
// It checks if the number is greater than 0 and if the bitwise AND of the number and the number minus 1 is equal to 0.
// This works because a power of 2 has only one bit set in its binary representation.
// The main function demonstrates the usage of the isPowerOfTwo function by checking if 64 is a power of 2.
// The time complexity is O(1) since it uses a constant number of operations.
