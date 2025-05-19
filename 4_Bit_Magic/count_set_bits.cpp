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
