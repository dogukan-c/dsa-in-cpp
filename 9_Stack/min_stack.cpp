// Stack that supports push, pop, top, and retrieving the min in O(1)
// Uses two stacks: main and minStack
// Time: O(1) for all ops

#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
	stack<int> st, minSt;

      public:
	void push(int x)
	{
		st.push(x);
		if (minSt.empty() || x <= minSt.top())
			minSt.push(x);
	}

	void pop()
	{
		if (st.top() == minSt.top())
			minSt.pop();
		st.pop();
	}

	int top()
	{
		return st.top();
	}

	int getMin()
	{
		return minSt.top();
	}
};

int main()
{
	MinStack ms;
	ms.push(3);
	ms.push(5);
	ms.push(2);
	cout << "Min: " << ms.getMin() << endl;
	ms.pop();
	cout << "Top: " << ms.top() << ", Min: " << ms.getMin() << endl;
	return 0;
}
// Output:
// Min: 2
// Top: 5, Min: 3
// Explanation:
// The MinStack class implements a stack that supports push, pop, top, and retrieving the minimum element in O(1) time.
// It uses two stacks: one for the main stack (st) and another for tracking the minimum elements (minSt).
// The push method adds an element to the main stack and updates the min stack if the new element is less than or equal to the current minimum.
// The pop method removes the top element from the main stack and also removes it from the min stack if it is the current minimum.
// The top method returns the top element of the main stack, and the getMin method returns the top element of the min stack, which is the minimum element in the stack.
// The time complexity for all operations (push, pop, top, and getMin) is O(1), making it efficient for stack operations.