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
// Output: After swap: a = 7, b = 5
// Explanation:
// The XOR swap algorithm uses the properties of XOR to swap two numbers without using a temporary variable.
// It works by performing XOR operations on the two numbers in a specific order.
// The first XOR operation stores the result in a, the second XOR operation stores the result in b, and the third XOR operation completes the swap.
// The time complexity is O(1) since it uses a constant number of operations, and the space complexity is also O(1) since no extra space is used.
