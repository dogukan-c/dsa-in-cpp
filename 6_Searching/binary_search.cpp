// binary_search.cpp
// Classic binary search on sorted array
// Time Complexity: O(log n)

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &arr, int target)
{
	int l = 0, r = arr.size() - 1;
	while (l <= r)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}

int main()
{
	vector<int> arr = {1, 3, 5, 7, 9, 11};

	int idx = binarySearch(arr, 7);
	cout << "Index of 7: " << idx << endl;
	return 0;
}
// Output: Index of 7: 3
// Explanation:
// The binary search algorithm works by repeatedly dividing the search interval in half.
// If the value of the search key is less than the item in the middle of the interval,
// narrow the interval to the lower half. Otherwise, narrow it to the upper half.
// Repeatedly check until the value is found or the interval is empty.
