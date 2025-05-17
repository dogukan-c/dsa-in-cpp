// reverse_inplace.cpp
// Problem: Reverse an array in-place
// Technique: Two-pointer approach (O(n))

#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &arr)
{
	int itr = 0;
	int len = arr.size() - 1;

	while (itr < len)
	{
		swap(arr[itr++], arr[len--]);
	}
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	reverse(arr);

	for (int val : arr)
		cout << val << " ";

	cout << endl;

	return 0;
}

// Output: 5 4 3 2 1
// Explanation: The array is reversed in-place using a two-pointer approach.
// Time Complexity: O(n)
// Space Complexity: O(1)