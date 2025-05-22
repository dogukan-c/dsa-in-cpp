#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int val)
	    : data(val), next(nullptr) {}
};

int getLength(Node *head)
{
	int len = 0;
	while (head)
	{
		++len;
		head = head->next;
	}
	return len;
}

Node *getIntersection(Node *a, Node *b)
{
	int lenA = getLength(a), lenB = getLength(b);
	while (lenA > lenB)
	{
		a = a->next;
		--lenA;
	}
	while (lenB > lenA)
	{
		b = b->next;
		--lenB;
	}
	while (a && b)
	{
		if (a == b)
			return a;
		a = a->next;
		b = b->next;
	}
	return nullptr;
}

int main()
{
	Node *common = new Node(8);
	common->next = new Node(10);
	Node *a = new Node(3);
	a->next = new Node(7);
	a->next->next = common;
	Node *b = new Node(99);
	b->next = common;
	Node *inter = getIntersection(a, b);
	if (inter)
		cout << inter->data << endl;
	return 0;
}
// Output: 8
// Explanation:
// The getIntersection function finds the intersection point of two linked lists.
// It first calculates the lengths of both lists and aligns them by moving the longer list's pointer forward.
// Then it traverses both lists simultaneously until it finds the intersection point or reaches the end.
// The time complexity is O(n + m), where n and m are the lengths of the two lists, and the space complexity is O(1) since it uses only a few pointers.
// The main function creates two linked lists with a common intersection point and calls getIntersection to find the intersection node.
// If an intersection is found, it prints the data of the intersection node.
