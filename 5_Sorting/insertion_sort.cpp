// insertion_sort.cpp
// Technique: Build sorted array by inserting each element in the right place
// Time Complexity: O(n^2) worst case, O(n) best case (already sorted)

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
	for (int i = 1; i < arr.size(); ++i)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

int main()
{
	vector<int> arr = {9, 3, 1, 5, 4};

	insertionSort(arr);

	for (int x : arr)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
// Output: 1 3 4 5 9
// Explanation:
// The insertionSort function sorts the array in ascending order using the insertion sort algorithm.
// It iterates through the array, and for each element, it finds the correct position in the sorted part of the array.
// It shifts larger elements to the right and inserts the current element in its correct position.
// The time complexity is O(n^2) in the worst case (when the array is sorted in reverse order) and O(n) in the best case (when the array is already sorted).
// The space complexity is O(1) since it sorts the array in place.
