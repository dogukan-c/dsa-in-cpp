#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	    : data(val), next(nullptr) {}
};

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
	printList(head);
	return 0;
}
// // Output: 1 2 3
// // Explanation:
// // The code defines a simple singly linked list with a Node structure.
// // The Node structure contains an integer data field and a pointer to the next node.
// // The printList function takes the head of the linked list as an argument and prints the data of each node until it reaches the end of the list (nullptr).
