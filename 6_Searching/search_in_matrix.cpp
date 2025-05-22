// search_in_matrix.cpp
// Search in a sorted 2D matrix
// Rows and columns are sorted
// Time Complexity: O(m + n)

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(const vector<vector<int>> &matrix, int target)
{
	int rows = matrix.size();
	int cols = matrix[0].size();

	int r = 0, c = cols - 1;

	while (r < rows && c >= 0)
	{
		if (matrix[r][c] == target)
			return true;
		else if (matrix[r][c] > target)
			c--;
		else
			r++;
	}

	return false;
}

int main()
{
	vector<vector<int>> matrix = {
	    {1, 4, 7},
	    {8, 10, 12},
	    {13, 14, 17}};

	cout << "Search 10: " << (searchMatrix(matrix, 10) ? "Found" : "Not Found") << endl;
	return 0;
}
// Output: Search 10: Found
// Explanation:
// The searchMatrix function starts from the top-right corner of the matrix.
// If the current element is equal to the target, it returns true.
// If the current element is greater than the target, it moves left.
// If the current element is less than the target, it moves down.
// This process continues until the target is found or the search space is exhausted.
// The time complexity is O(m + n), where m is the number of rows and n is the number of columns.
