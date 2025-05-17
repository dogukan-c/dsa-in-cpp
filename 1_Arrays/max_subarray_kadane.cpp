// max_subarray_kadane.cpp
// Problem: Find the maximum subarray sum
// Technique: Kadane's Algorithm (O(n))
// Key idea: Track local max and update global max

#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
	int maxSum = nums[0];
	int currSum = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		currSum = max(nums[i], currSum + nums[i]);
		maxSum = max(maxSum, currSum);
	}

	return maxSum;
}

int main()
{
	vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

	cout << "Max Subarray Sum: " << maxSubArray(nums) << endl;

	return 0;
}
// Output: Max Subarray Sum: 6
// Explanation: The maximum subarray is [4, -1, 2, 1] with sum 6
// Time Complexity: O(n)
// Space Complexity: O(1)
// Note: This code uses Kadane's algorithm to find the maximum sum of a contiguous subarray.
// It initializes the maximum sum and current sum with the first element of the array.
// It then iterates through the array, updating the current sum to be the maximum of the current element
// and the sum of the current element and the previous current sum.
// The maximum sum is updated whenever the current sum exceeds the previous maximum sum.