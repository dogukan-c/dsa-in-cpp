// Deque using doubly linked list
// Supports push/pop front and back in O(1)

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *prev, *next;
	Node(int d)
	    : data(d), prev(NULL), next(NULL) {}
};

class Deque
{
	Node *front, *rear;

      public:
	Deque()
	    : front(NULL), rear(NULL) {}

	void push_front(int x)
	{
		Node *node = new Node(x);
		node->next = front;
		if (front)
			front->prev = node;
		front = node;
		if (!rear)
			rear = node;
	}

	void push_back(int x)
	{
		Node *node = new Node(x);
		node->prev = rear;
		if (rear)
			rear->next = node;
		rear = node;
		if (!front)
			front = node;
	}

	void pop_front()
	{
		if (!front)
			return;
		Node *temp = front;
		front = front->next;
		if (front)
			front->prev = NULL;
		else
			rear = NULL;
		delete temp;
	}

	void pop_back()
	{
		if (!rear)
			return;
		Node *temp = rear;
		rear = rear->prev;
		if (rear)
			rear->next = NULL;
		else
			front = NULL;
		delete temp;
	}

	int get_front()
	{
		return front ? front->data : -1;
	}

	int get_back()
	{
		return rear ? rear->data : -1;
	}
};

int main()
{
	Deque dq;
	dq.push_front(10);
	dq.push_back(20);
	cout << dq.get_front() << " " << dq.get_back() << endl; // 10 20
	dq.pop_front();
	cout << dq.get_front() << endl; // 20
	return 0;
}
// Output:
// 10
// 20
// Explanation:
// The Deque class implements a double-ended queue using a doubly linked list.
// It supports push and pop operations at both ends (front and back) in O(1) time.
// The push_front method adds an element to the front of the deque, while the push_back method adds an element to the back.
// The pop_front method removes an element from the front, and the pop_back method removes an element from the back.
// The get_front method returns the front element, and the get_back method returns the back element.
// The main function demonstrates the usage of the Deque class by adding and removing elements and printing the front and back elements.
// The time complexity for all operations (push, pop, and get) is O(1), making it efficient for deque operations.
