// two_sum.cpp
// Problem: Find indices of 2 elements that sum up to target
// Technique: Hashing (O(n))

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
	unordered_map<int, int> mp;

	for (int i = 0; i < nums.size(); i++)
	{
		int rem = target - nums[i];

		if (mp.count(rem))
			return {mp[rem], i};

		mp[nums[i]] = i;
	}

	return {};
}

int main()
{
	vector<int> nums = {3, 11, 6, 15};

	int target = 9;

	vector<int> res = twoSum(nums, target);

	cout << res[0] << " " << res[1] << endl;

	return 0;
}
// Output: 0 2
// Explanation:
// The twoSum function uses a hash map to store the indices of the elements.
// For each element in the array, it calculates the complement (target - current element).
// If the complement is found in the hash map, it returns the indices of the current element and its complement.
// The time complexity is O(n) and the space complexity is O(n).
// Note: The function returns the first pair of indices found. If no such pair exists, it returns an empty vector.
