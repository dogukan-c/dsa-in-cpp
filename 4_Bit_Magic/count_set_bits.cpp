// count_set_bits.cpp
// Problem: Count number of 1s in binary representation of n
// Technique: Brian Kernighan's Algorithm
//
// Idea: n & (n-1) removes the lowest set bit

#include <iostream>
using namespace std;

int countSetBits(int n)
{
	int count = 0;
	while (n)
	{
		n &= (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 29; // 11101
	cout << "Set bits: " << countSetBits(n) << endl;
	return 0;
}

// Output: Set bits: 4
// Explanation:
// The countSetBits function counts the number of set bits (1s) in the binary representation of an integer n.
// It uses Brian Kernighan's algorithm, which repeatedly clears the lowest set bit of n until n becomes 0.
// The count variable keeps track of the number of set bits encountered.