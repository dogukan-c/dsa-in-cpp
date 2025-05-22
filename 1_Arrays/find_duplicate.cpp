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
// Output: Duplicate: 5
// Explanation:
// The findDuplicate function uses Floyd's Cycle Detection algorithm to find the duplicate number in the array.
// It initializes two pointers, slow and fast, both starting at the first element.
// The slow pointer moves one step at a time, while the fast pointer moves two steps at a time.
// When they meet, it indicates a cycle.
// To find the duplicate, it resets the slow pointer to the start and moves both pointers one step at a time until they meet again.
// The meeting point is the duplicate number.
// The time complexity is O(n) and the space complexity is O(1).
