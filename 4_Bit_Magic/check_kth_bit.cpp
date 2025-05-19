// check_kth_bit.cpp
// Problem: Check if the k-th bit of number n is set (1)
// Technique: Bitmasking with left shift

#include <iostream>
using namespace std;

bool isKthBitSet(int n, int k)
{
	return n & (1 << k);
}

int main()
{
	int n = 10; // 1010
	int k = 0;
	cout << "Is " << k << "-th bit set in " << n << "? " << (isKthBitSet(n, k) ? "Yes" : "No") << endl;
	return 0;
}
// Output: Is 1-th bit set in 10? Yes