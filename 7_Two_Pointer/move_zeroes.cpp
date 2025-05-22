// move_zeroes.cpp
// Move all 0s to the end of array while maintaining order of non-zero elements
// Time: O(n)

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
	int lastNonZero = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != 0)
			swap(nums[i], nums[lastNonZero++]);
	}
}

int main()
{
	vector<int> nums = {0, 1, 0, 3, 12};

	moveZeroes(nums);

	for (int x : nums)
		cout << x << " ";

	return 0;
}
// Output: 1 3 12 0 0
// Explanation:
// The moveZeroes function moves all zero elements to the end of the array while maintaining the order of non-zero elements.
// It uses a two-pointer approach: one pointer (lastNonZero) keeps track of the position to place the next non-zero element, and the other pointer (i) iterates through the array.
// When a non-zero element is found, it is swapped with the element at the lastNonZero position, and lastNonZero is incremented.
// The time complexity is O(n) since it iterates through the array once, and the space complexity is O(1) since it modifies the array in place.
