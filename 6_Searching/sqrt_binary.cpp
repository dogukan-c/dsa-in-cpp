// sqrt_binary.cpp
// Find the floor of square root using binary search
// Example: sqrt(10) => 3
// Time Complexity: O(log n)

#include <iostream>
using namespace std;

int floorSqrt(int x)
{
	if (x == 0 || x == 1)
		return x;

	int l = 1, r = x, ans = 0;

	while (l <= r)
	{
		int mid = l + (r - l) / 2;

		if (mid <= x / mid)
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}

	return ans;
}

int main()
{
	int x = 17;

	cout << "Square root (floor) of " << x << ": " << floorSqrt(x) << endl;

	return 0;
}
// Output: Square root (floor) of 17: 4
// Explanation:
// The floorSqrt function uses binary search to find the largest integer whose square is less than or equal to x.
// It initializes the search range from 1 to x.
// The mid value is calculated, and if mid^2 is less than or equal to x, it updates the answer and moves the left pointer.
// If mid^2 is greater than x, it moves the right pointer.
// The process continues until the left pointer exceeds the right pointer.
