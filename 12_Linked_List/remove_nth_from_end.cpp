#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	    : data(val), next(nullptr) {}
};

Node *removeNth(Node *head, int n)
{
	Node dummy(0);
	dummy.next = head;
	Node *first = &dummy, *second = &dummy;
	for (int i = 0; i <= n; ++i)
		first = first->next;
	while (first)
	{
		first = first->next;
		second = second->next;
	}
	second->next = second->next->next;
	return dummy.next;
}

void printList(Node *head)
{
	while (head)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head = removeNth(head, 2);
	printList(head);
	return 0;
}
// Output: 1 3
// Explanation:
// The removeNth function removes the nth node from the end of a linked list.
// It uses a two-pointer approach: one pointer (first) is moved n+1 steps ahead, and then both pointers are moved until the first pointer reaches the end.
// The second pointer will then be at the node just before the one to be removed.
// The function updates the next pointer of the second pointer to skip the node to be removed.
