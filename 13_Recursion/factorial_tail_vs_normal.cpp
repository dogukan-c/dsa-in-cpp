#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int tail_factorial(int n, int acc = 1)
{
	if (n == 0)
		return acc;
	return tail_factorial(n - 1, n * acc);
}

int main()
{
	cout << factorial(5) << endl;
	cout << tail_factorial(5) << endl;
	return 0;
}
// Output:
// 120
// 120
// Explanation:
// The code defines two functions to calculate the factorial of a number: factorial and tail_factorial.
// The factorial function uses a standard recursive approach, while the tail_factorial function uses tail recursion.
// Tail recursion is a form of recursion where the recursive call is the last operation in the function.
// This allows for optimization by the compiler or interpreter, potentially reducing the risk of stack overflow for large inputs.
