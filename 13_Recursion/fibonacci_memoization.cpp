#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &memo)
{
	if (n <= 1)
		return n;
	if (memo[n] != -1)
		return memo[n];
	return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
}

int main()
{
	int n = 10;
	vector<int> memo(n + 1, -1);
	cout << fib(n, memo) << endl;
	return 0;
}
// Output: 55
// Explanation:
// The code defines a function to calculate the nth Fibonacci number using memoization.
// The fib function takes an integer n and a vector memo as arguments. It checks if the Fibonacci number for n is already computed (memo[n] != -1).
// If it is, it returns the stored value. Otherwise, it computes the Fibonacci number recursively and stores the result in memo[n].
// The main function initializes the memo vector with -1 (indicating uncomputed values) and calls the fib function with n = 10.
// The time complexity of this approach is O(n), and the space complexity is O(n) due to the memoization vector.
