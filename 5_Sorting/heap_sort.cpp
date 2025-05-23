// heap_sort.cpp
// Technique: Use max heap to extract maximum repeatedly
// Time Complexity: O(n log n), not stable

#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
	int largest = i, l = 2 * i + 1, r = 2 * i + 2;
	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(vector<int> &arr)
{
	int n = arr.size();
	for (int i = n / 2 - 1; i >= 0; --i)
		heapify(arr, n, i);
	for (int i = n - 1; i > 0; --i)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main()
{
	vector<int> arr = {4, 10, 3, 5, 1};
	heapSort(arr);
	for (int x : arr)
		cout << x << " ";
	return 0;
}
// Output: 1 3 4 5 10
// Explanation:
// The heapSort function sorts the array in ascending order using the heap sort algorithm.
// It first builds a max heap from the input array.
// Then it repeatedly extracts the maximum element from the heap and places it at the end of the array.
// The heapify function is used to maintain the heap property.
// The time complexity is O(n log n) and the space complexity is O(1) since it sorts the array in place.