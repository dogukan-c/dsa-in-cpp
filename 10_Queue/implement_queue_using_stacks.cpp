// Implement queue using two stacks
// push: O(1), pop: amortized O(1)

#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
	stack<int> s1, s2;

      public:
	void push(int x)
	{
		s1.push(x);
	}

	int pop()
	{
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int front = s2.top();
		s2.pop();
		return front;
	}

	int peek()
	{
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		return s2.top();
	}

	bool empty()
	{
		return s1.empty() && s2.empty();
	}
};

int main()
{
	MyQueue q;
	q.push(10);
	q.push(20);
	cout << q.pop() << endl;  // 10
	cout << q.peek() << endl; // 20
	return 0;
}
// Output:
// 10
// 20
// Explanation:
// The MyQueue class implements a queue using two stacks (s1 and s2).
// The push method adds an element to the first stack (s1).
// The pop method checks if the second stack (s2) is empty; if it is, it transfers all elements from s1 to s2, effectively reversing the order.
// Then it pops the top element from s2, which is the front of the queue.
// The peek method does the same transfer if s2 is empty and returns the top element of s2 without removing it.
// The empty method checks if both stacks are empty.
// The main function demonstrates the usage of the MyQueue class by pushing elements into the queue, popping an element, and peeking at the front element.
// The time complexity for push is O(1), and for pop and peek, it is amortized O(1) since each element is moved between stacks at most once.
