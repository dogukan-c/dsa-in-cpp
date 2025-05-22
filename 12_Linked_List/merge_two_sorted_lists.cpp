#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	    : data(val), next(nullptr) {}
};

Node *merge(Node *l1, Node *l2)
{
	Node dummy(0);
	Node *tail = &dummy;
	while (l1 && l2)
	{
		if (l1->data < l2->data)
		{
			tail->next = l1;
			l1 = l1->next;
		}
		else
		{
			tail->next = l2;
			l2 = l2->next;
		}
		tail = tail->next;
	}
	tail->next = l1 ? l1 : l2;
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
	Node *l1 = new Node(1);
	l1->next = new Node(3);
	Node *l2 = new Node(2);
	l2->next = new Node(4);
	Node *merged = merge(l1, l2);
	printList(merged);
	return 0;
}
// Output: 1 2 3 4
// Explanation:
// The merge function takes two sorted linked lists (l1 and l2) and merges them into a single sorted linked list.
// It uses a dummy node to simplify the merging process. The function iterates through both lists, comparing the current nodes and appending the smaller one to the merged list.
// After one of the lists is exhausted, it appends the remaining nodes from the other list.
// The printList function is a utility to print the elements of the linked list.
// The main function creates two sorted linked lists, merges them using the merge function, and prints the merged list.
