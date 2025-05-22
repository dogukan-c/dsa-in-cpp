// variable_window_min_len.cpp
// Smallest subarray with sum >= target
// Variable size window
// Time: O(n)

#include <cinttypes>
#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, const vector<int> &nums)
{
	int l = 0, sum = 0;
	int res = INT32_MAX;

	for (int r = 0; r < nums.size(); ++r)
	{
		sum += nums[r];

		while (sum >= target)
		{
			res = min(res, r - l + 1);
			sum -= nums[l++];
		}
	}

	return res == INT32_MAX ? 0 : res;
}

int main()
{
	vector<int> nums = {2, 3, 1, 2, 4, 1};
	int target = 7;

	cout << "Min length of subarray with sum >= " << target << ": " << minSubArrayLen(target, nums) << endl;

	return 0;
}
