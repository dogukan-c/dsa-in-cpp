// fixed_window_max_sum.cpp
// Given an array and integer k, find the maximum sum of a subarray of size k
// Fixed-size sliding window
// Time: O(n)

#include <iostream>
#include <vector>
using namespace std;

int maxSumKWindow(const vector<int> &arr, int k)
{
	int n = arr.size();
	int sum = 0, maxSum = 0;

	for (int i = 0; i < k; ++i)
		sum += arr[i];
	maxSum = sum;

	for (int i = k; i < n; ++i)
	{
		sum += arr[i] - arr[i - k];
		maxSum = max(maxSum, sum);
	}

	return maxSum;
}

int main()
{
	vector<int> arr = {2, 1, 5, 1, 4, 3, 2};
	int k = 3;
	cout << "Max sum of window size " << k << ": " << maxSumKWindow(arr, k) << endl;

	return 0;
}
// Output: Max sum of window size 3: 10
// Explanation:
// The maxSumKWindow function calculates the maximum sum of a subarray of size k in the given array.
// It initializes the sum of the first k elements and then iterates through the array, updating the sum by adding the next element and subtracting the first element of the previous window.
// The maximum sum is updated at each step.
// The time complexity is O(n) since it iterates through the array once, and the space complexity is O(1) since it uses a constant amount of extra space.
// Note: This approach is efficient for fixed-size sliding window problems where the size of the window is known in advance.
// It can be adapted for variable-size sliding window problems by using a different approach, such as two pointers or a deque.
// This code is a simple implementation of the fixed-size sliding window maximum sum problem.
// It can be further optimized or modified to handle different variations of the problem, such as finding the maximum sum of a variable-size window or handling edge cases like empty arrays or invalid k values.
