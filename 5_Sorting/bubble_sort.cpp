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
