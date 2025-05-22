// lower_upper_bound.cpp
// Find first position >= target (lower_bound) or > target (upper_bound) on a sorted array.
// This is useful for finding the range of a target value in a sorted array.
// Time Complexity: O(log n)

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(const vector<int> &arr, int target)
{
	int l = 0, r = arr.size();

	while (l < r)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] < target)
			l = mid + 1;
		else
			r = mid;
	}
	return l;
}

int upperBound(const vector<int> &arr, int target)
{
	int l = 0, r = arr.size();

	while (l < r)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] <= target)
			l = mid + 1;
		else
			r = mid;
	}
	return l;
}

int main()
{
	vector<int> arr = {0, 1, 2, 2, 2, 3, 4, 5};

	cout << "Lower bound of 2: " << lowerBound(arr, 2) << endl;
	cout << "Upper bound of 2: " << upperBound(arr, 2) << endl;

	return 0;
}
// Output:
// Lower bound of 2: 2
// Upper bound of 2: 5
// Explanation:
// The lower_bound function returns the index of the first element that is not less than the target.
// The upper_bound function returns the index of the first element that is greater than the target.
