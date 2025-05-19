// bit_difference.cpp
// Problem: Count number of bits to flip to convert a to b
// Technique: XOR and count set bits

#include <iostream>
using namespace std;

int bitDifference(int a, int b)
{
	int x = a ^ b;
	int count = 0;
	while (x)
	{
		x &= (x - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 29, b = 15;
	// 29  = 11101
	// 15  = 01111
	// XOR = 10010 (2 bits differ)
	cout << "Bit difference: " << bitDifference(a, b) << endl;
	return 0;
}
