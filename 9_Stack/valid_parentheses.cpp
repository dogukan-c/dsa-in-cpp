// Check if the input string has valid open/close brackets
// Uses stack to match brackets
// Time: O(n), Space: O(n)

#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{
	stack<char> st;
	unordered_map<char, char> match = {{')', '('}, {']', '['}, {'}', '{'}};

	for (char c : s)
	{
		if (match.count(c))
		{
			if (st.empty() || st.top() != match[c])
				return false;
			st.pop();
		}
		else
		{
			st.push(c);
		}
	}
	return st.empty();
}

int main()
{
	string s = "{[()]}";
	cout << (isValid(s) ? "Valid" : "Invalid") << endl;
	return 0;
}
// Output: Valid
// Explanation:
// The isValid function checks if the input string has valid open/close brackets.
// It uses a stack to keep track of the opening brackets and a hash map to match closing brackets with their corresponding opening brackets.
// The function iterates through the string, pushing opening brackets onto the stack and checking if closing brackets match the top of the stack.
// If a mismatch is found or if there are unmatched opening brackets left in the stack at the end, the function returns false.
// The time complexity is O(n) since it iterates through the string once, and the space complexity is O(n) for the stack in the worst case when all characters are opening brackets.