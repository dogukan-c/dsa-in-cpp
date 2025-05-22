// bubble_sort.cpp
// Technique: Repeatedly swap adjacent elements if they're in the wrong order
// Time Complexity: O(n^2) worst case

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
	int n = arr.size();

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

int main()
{
	vector<int> arr = {5, 1, 4, 2, 8};
	bubbleSort(arr);
	for (int x : arr)
		cout << x << " ";
	return 0;
}
// Output: 1 2 4 5 8
// Explanation:
// The bubbleSort function sorts the array in ascending order using the bubble sort algorithm.
// It repeatedly compares adjacent elements and swaps them if they are in the wrong order.
// The outer loop runs n-1 times, and the inner loop runs n-i-1 times, where i is the current iteration of the outer loop.
// The time complexity is O(n^2) in the worst case, and the space complexity is O(1) since it sorts the array in place.
// Note: Bubble sort is not the most efficient sorting algorithm for large datasets, but it is simple and easy to understand.
