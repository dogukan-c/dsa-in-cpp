// 04_sliding_maximum.cpp
// Maximum of all subarrays of size k
// Use deque to track max efficiently
// Time: O(n)

#include <deque>
#include <iostream>
#include <vector>
using namespace std;

vector<int> slidingMaximum(const vector<int> &nums, int k)
{
	deque<int> dq;
	vector<int> res;

	for (int i = 0; i < nums.size(); ++i)
	{
		// Remove out of window
		if (!dq.empty() && dq.front() <= i - k)
			dq.pop_front();

		// Remove smaller than current
		while (!dq.empty() && nums[dq.back()] < nums[i])
			dq.pop_back();

		dq.push_back(i);

		if (i >= k - 1)
			res.push_back(nums[dq.front()]);
	}

	return res;
}

int main()
{
	vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
	int k = 3;
	vector<int> res = slidingMaximum(nums, k);

	for (int x : res)
		cout << x << " ";
	cout << endl;

	return 0;
}
// Output: 3 3 5 5 6 7
// Explanation:
// The slidingMaximum function calculates the maximum of all subarrays of size k in the given array.
// It uses a deque to efficiently track the maximum elements in the current window of size k.
// The deque stores indices of the elements in the current window, and it maintains the order of elements such that the maximum element is always at the front.
// The function iterates through the array, removing elements that are out of the current window and smaller elements that cannot be maximum in the current window.
// When the current index is greater than or equal to k - 1, it adds the maximum element (at the front of the deque) to the result vector.
// The time complexity is O(n) since each element is added and removed from the deque at most once, and the space complexity is O(k) for the deque.
