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
