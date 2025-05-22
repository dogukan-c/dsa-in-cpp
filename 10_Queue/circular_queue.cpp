// Circular Queue implementation using array
// Time: O(1) for all operations

#include <iostream>
using namespace std;

class CircularQueue
{
	int *arr, front, rear, size, capacity;

      public:
	CircularQueue(int cap)
	{
		capacity = cap;
		arr = new int[cap];
		front = rear = -1;
		size = 0;
	}

	bool enqueue(int x)
	{
		if (size == capacity)
			return false;
		if (front == -1)
			front = 0;
		rear = (rear + 1) % capacity;
		arr[rear] = x;
		size++;
		return true;
	}

	bool dequeue()
	{
		if (size == 0)
			return false;
		front = (front + 1) % capacity;
		size--;
		return true;
	}

	int peek()
	{
		if (size == 0)
			return -1;
		return arr[front];
	}
};

int main()
{
	CircularQueue cq(5);
	cq.enqueue(1);
	cq.enqueue(2);
	cout << cq.peek() << endl; // 1
	cq.dequeue();
	cout << cq.peek() << endl; // 2
	return 0;
}
// Output:
// 1
// 2
// Explanation:
// The CircularQueue class implements a circular queue using an array.
// It has methods for enqueueing, dequeueing, and peeking at the front element.
// The constructor initializes the queue with a given capacity.
// The enqueue method adds an element to the rear of the queue, and if the queue is full, it returns false.
// The dequeue method removes an element from the front of the queue, and if the queue is empty, it returns false.
// The peek method returns the front element without removing it, and if the queue is empty, it returns -1.
// The main function demonstrates the usage of the CircularQueue class by enqueueing and dequeueing elements and printing the front element.
// The time complexity for all operations (enqueue, dequeue, and peek) is O(1), making it efficient for queue operations.
