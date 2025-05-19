// longest_palindromic_substring.cpp
// Problem: Find the longest palindromic substring
// Technique: Expand Around Center (O(n^2))

#include <iostream>
#include <string>
using namespace std;

string expand(string &s, int l, int r)
{
	while ((l >= 0 && r < s.size()) && (s[l] == s[r]))
	{
		l--;
		r++;
	}
	return s.substr(l + 1, r - l - 1);
}

string longestPalindrome(string s)
{
	string res;
	for (int i = 0; i < s.size(); i++)
	{
		string odd = expand(s, i, i);
		string even = expand(s, i, i + 1);
		if (odd.size() > res.size())
			res = odd;
		if (even.size() > res.size())
			res = even;
	}
	return res;
}

int main()
{
	string s = "aabad";
	cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
	return 0;
}

// s = "babad"
//
// Center = 0 → "b"
// Center = 1 → "aba" ✅
// Center = 2 → "bab" ✅
// Center = 3 → "a"
// Max = "bab" or "aba"
