// merge_sort.cpp
// Technique: Divide and Conquer
// Time Complexity: O(n log n)
// Stable sort

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
	vector<int> left(arr.begin() + l, arr.begin() + m + 1);
	vector<int> right(arr.begin() + m + 1, arr.begin() + r + 1);
	int i = 0, j = 0, k = l;

	while (i < left.size() && j < right.size())
		arr[k++] = (left[i] <= right[j]) ? left[i++] : right[j++];

	while (i < left.size())
		arr[k++] = left[i++];
	while (j < right.size())
		arr[k++] = right[j++];
}

void mergeSort(vector<int> &arr, int l, int r)
{
	if (l >= r)
		return;
	int m = (l + r) / 2;
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);
	merge(arr, l, m, r);
}

int main()
{
	vector<int> arr = {10, 7, 8, 9, 1, 5};
	mergeSort(arr, 0, arr.size() - 1);
	for (int x : arr)
		cout << x << " ";
	return 0;
}
// Output: 1 5 7 8 9 10
// Explanation:
// The mergeSort function sorts the array in ascending order using the merge sort algorithm.
// It divides the array into two halves, recursively sorts each half, and then merges the sorted halves.
// The merge function combines two sorted arrays into one sorted array.
// The time complexity is O(n log n) and the space complexity is O(n) due to the use of temporary arrays for merging.
// Note: Merge sort is a stable sorting algorithm, meaning that it preserves the relative order of equal elements.
