#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> &nums, int l, vector<vector<int>> &res)
{
	if (l == nums.size())
	{
		res.push_back(nums);
		return;
	}
	for (int i = l; i < nums.size(); ++i)
	{
		swap(nums[i], nums[l]);
		backtrack(nums, l + 1, res);
		swap(nums[i], nums[l]);
	}
}

int main()
{
	vector<int> nums = {1, 2, 3};
	vector<vector<int>> res;
	backtrack(nums, 0, res);
	for (auto &p : res)
	{
		for (int x : p)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
