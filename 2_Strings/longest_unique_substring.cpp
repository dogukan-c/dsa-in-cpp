// longest_unique_substring.cpp
// Problem: Length of longest substring without repeating characters
// Technique: Sliding Window + Set (O(n))

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s)
{
	unordered_set<char> seen; // Set to store characters in the current substring

	int l = 0, maxLen = 0;

	for (int r = 0; r < s.size(); r++)
	{
		while (seen.count(s[r]))
		{
			seen.erase(s[l++]);
		}
		seen.insert(s[r]);
		maxLen = max(maxLen, r - l + 1);
	}

	return maxLen;
}

int main()
{
	string s = "abcabcbb";
	cout << "Longest unique substring length: " << lengthOfLongestSubstring(s) << endl;
	return 0;
}

// s = "abcabcbb"
//
// i = 0 -> "a"  ✅
// i = 1 -> "ab" ✅
// i = 2 -> "abc" ✅
// i = 3 -> "abca" ❌ -> 'a' repeated -> slide window : "bca"
// i = 4 -> "bcab" ❌ → repeats again -> slide window : "cab"
// ...
// Max: 3
// Output: Longest unique substring length: 3
// Explanation: The function uses a sliding window approach with a set to keep track of characters in the current substring.
// It expands the right pointer and shrinks the left pointer when a duplicate is found, ensuring that the substring remains unique.