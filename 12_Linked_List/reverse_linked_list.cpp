#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	    : data(val), next(nullptr) {}
};

Node *reverse(Node *head)
{
	Node *prev = nullptr;
	Node *curr = head;
	while (curr)
	{
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
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
	head = reverse(head);
	printList(head);
	return 0;
}
// Output: 3 2 1
// Explanation:
// The reverse function reverses a singly linked list.
// It uses three pointers: prev, curr, and next. The prev pointer starts as nullptr, curr points to the head of the list, and next is used to store the next node.
// The function iterates through the list, reversing the next pointer of each node to point to the previous node.
// After the loop, prev points to the new head of the reversed list.
