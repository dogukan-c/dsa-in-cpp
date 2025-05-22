// remove_duplicates.cpp
// Remove duplicates from sorted array in-place
// Return new length
// Time: O(n)

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
	if (nums.empty())
		return 0;
	int j = 1;
	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i] != nums[i - 1])
			nums[j++] = nums[i];
	}
	return j;
}

int main()
{
	vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 4, 4, 0, 0};

	int len = removeDuplicates(nums);

	for (int i = 0; i < len; ++i)
		cout << nums[i] << " ";
	return 0;
}
