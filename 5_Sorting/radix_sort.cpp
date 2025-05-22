// radix_sort.cpp
// Technique: Sort numbers digit by digit (LSD → MSD)
// Time Complexity: O(n * k), where k = number of digits
// Only works for integers, stable

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int getMax(const vector<int> &arr)
{
	return *max_element(arr.begin(), arr.end());
}

void countSort(vector<int> &arr, int exp)
{
	int n = arr.size();
	vector<int> output(n), count(10, 0);

	for (int i = 0; i < n; ++i)
		count[(arr[i] / exp) % 10]++;

	for (int i = 1; i < 10; ++i)
		count[i] += count[i - 1];

	for (int i = n - 1; i >= 0; --i)
	{
		int digit = (arr[i] / exp) % 10;
		output[--count[digit]] = arr[i];
	}

	arr = output;
}

void radixSort(vector<int> &arr)
{
	int maxVal = getMax(arr);
	for (int exp = 1; maxVal / exp > 0; exp *= 10)
		countSort(arr, exp);
}

int main()
{
	vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

	radixSort(arr);

	for (int x : arr)
		cout << x << " ";
	return 0;
}
// Output: 2 24 45 66 75 90 170 802
// Explanation:
// The radixSort function sorts the array in ascending order using the radix sort algorithm.
// It first finds the maximum value in the array to determine the number of digits.
// It then sorts the array digit by digit using counting sort as a subroutine.
// The countSort function sorts the array based on the current digit (exp).
// The time complexity is O(n * k), where n is the number of elements in the array and k is the number of digits in the maximum element.
