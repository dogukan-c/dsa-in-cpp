// move_zeros.cpp
// Problem: Move all 0s to end without changing order of non-zero elements
// Technique: Two-pointer overwrite (O(n))

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums)
{
	int insertPos = 0;

	for (int num : nums)
	{
		if (num != 0)
			nums[insertPos++] = num;
	}

	while (insertPos < nums.size())
	{
		nums[insertPos++] = 0;
	}
}

int main()
{
	vector<int> nums = {0, 1, 0, 3, 12};

	moveZeroes(nums);

	for (int n : nums)
		cout << n << " ";

	cout << endl;

	return 0;
}

// Output: 1 3 12 0 0
// Explanation:
// The moveZeroes function iterates through the array and moves all non-zero elements to the front.
// It uses a variable insertPos to keep track of the position where the next non-zero element should be placed.
// After all non-zero elements are moved, it fills the remaining positions with zeros.
// The time complexity is O(n) and the space complexity is O(1).