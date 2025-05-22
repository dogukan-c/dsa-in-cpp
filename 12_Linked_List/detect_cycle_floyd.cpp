#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	    : data(val), next(nullptr) {}
};

bool hasCycle(Node *head)
{
	Node *slow = head, *fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return true;
	}
	return false;
}

int main()
{
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = head->next;
	cout << hasCycle(head) << endl;
	return 0;
}
// Output: 1
// Explanation:
// The hasCycle function checks if a linked list has a cycle using Floyd's Tortoise and Hare algorithm.
// It uses two pointers: slow and fast. The slow pointer moves one step at a time, while the fast pointer moves two steps at a time.
// If there is a cycle, the fast pointer will eventually meet the slow pointer.
// If the fast pointer reaches the end of the list (nullptr), there is no cycle.
// The time complexity is O(n) since it traverses the list at most twice, and the space complexity is O(1) since it uses only two pointers.
