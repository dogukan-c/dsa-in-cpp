// quick_sort.cpp
// Technique: Partition array around pivot, sort subarrays
// Time Complexity: O(n log n) average, O(n^2) worst
// In-place, not stable

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; ++j)
		if (arr[j] < pivot)
			swap(arr[++i], arr[j]);
	swap(arr[i + 1], arr[high]);
	return i + 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
	if (low < high)
	{
		int p = partition(arr, low, high);
		quickSort(arr, low, p - 1);
		quickSort(arr, p + 1, high);
	}
}

int main()
{
	vector<int> arr = {10, 80, 30, 90, 40, 50, 70};
	quickSort(arr, 0, arr.size() - 1);
	for (int x : arr)
		cout << x << " ";
	return 0;
}
// Output: 10 30 40 50 70 80 90
// Time Complexity: O(n log n) on average, O(n^2) in the worst case