// find_duplicate.cpp
// Problem: Find any duplicate number where 1 <= nums[i] <= n
// Technique: Floyd's Cycle Detection (O(n), O(1))

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
	int slow = nums[0], fast = nums[0];
	do
	{
		slow = nums[slow];
		fast = nums[nums[fast]];
	} while (slow != fast);

	slow = nums[0];
	while (slow != fast)
	{
		slow = nums[slow];
		fast = nums[fast];
	}
	return slow;
}

int main()
{
	vector<int> nums = {1, 4, 5, 2, 0, 5};

	cout << "Duplicate: " << findDuplicate(nums) << endl;
	return 0;
}
