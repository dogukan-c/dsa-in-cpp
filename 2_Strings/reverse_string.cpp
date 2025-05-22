// reverse_string.cpp
// Problem: Reverse a string in-place
// Technique: Two-pointer approach (O(n))

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
	int l = 0, r = s.size() - 1;
	while (l < r)
		swap(s[l++], s[r--]);
}

int main()
{
	vector<char> s = {'h', 'e', 'l', 'l', 'o'};

	reverseString(s);

	for (char c : s)
		cout << c;

	cout << endl;
	// Output: "olleh"
	return 0;
}
// Explanation:
// The reverseString function takes a vector of characters and reverses it in-place using a two-pointer approach.
// It initializes two pointers, l and r, at the start and end of the vector, respectively.
// It swaps the characters at these pointers and moves the pointers towards the center until they meet.
// The time complexity is O(n) and the space complexity is O(1).
// Note: The function modifies the input vector directly, so no return value is needed.
// The main function demonstrates the usage of the reverseString function by reversing the string "hello" and printing the result.
// The output is "olleh", which is the reversed string.
// The time complexity is O(n) because we traverse the string once, and the space complexity is O(1) since we use only a constant amount of extra space for the pointers.
