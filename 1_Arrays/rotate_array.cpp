// rotate_array.cpp
// Problem: Rotate array right by k steps
// Technique: Reverse parts (O(n))

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int l, int r)
{
	while (l < r)
		swap(nums[l++], nums[r--]);
}

void rotate(vector<int> &nums, int k)
{
	int n = nums.size();
	k %= n;
	reverse(nums, 0, n - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, n - 1);
}

int main()
{
	vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

	int k = 3;
	rotate(nums, k);

	for (int num : nums)
		cout << num << " ";

	cout << endl;

	return 0;
}
// Output: 5 6 7 1 2 3 4
// Explanation: The array is rotated right by 3 steps. The first 3 elements (1,
// 2, 3) are moved to the end of the array, and the last 4 elements (4, 5, 6, 7)
// are moved to the front. The reverse function reverses the elements in the
// specified range of the array. The rotate function first reverses the entire
// array, then reverses the first k elements, and finally reverses the remaining
// n-k elements. This effectively rotates the array to the right by k steps. The
// time complexity of this algorithm is O(n), where n is the size of the array,
// and the space complexity is O(1) since we are modifying the array in place.