// kmp_prefix_function.cpp
// Problem: Build prefix table for KMP (Knuth-Morris-Pratt) algorithm
// Technique: Preprocessing pattern string (O(n))

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> buildPrefix(string &pattern)
{
	int n = pattern.size();
	vector<int> lps(n, 0);
	int len = 0;

	for (int i = 1; i < n;)
	{
		if (pattern[i] == pattern[len])
		{
			lps[i++] = ++len;
		}
		else
		{
			if (len > 0)
				len = lps[len - 1];
			else
				lps[i++] = 0;
		}
	}
	return lps;
}

int main()
{
	string pat = "ababcab";
	vector<int> lps = buildPrefix(pat);
	for (int len : lps)
		cout << len << " ";
	cout << endl;
	return 0;
}
// Logic:
// - lps[i] stores the length of the longest proper prefix which is also a suffix for pattern[0..i].
// - We use a pointer 'len' to track the current longest matching prefix-suffix.
// - If pattern[i] == pattern[len], we extend the match.
// - If mismatch occurs and len > 0, we fallback using lps[len - 1].
// - This avoids unnecessary re-comparison in KMP string matching.
//
// Time Complexity: O(n) - every character is processed at most twice.
// Space Complexity: O(n) - output LPS array.

// Index: 0 1 2 3 4 5
// Char:  a b a b c a
// LPS:   0 0 1 2 0 1

// string pat = "ababcab";
// i = 1 → b != a → lps[1] = 0
// i = 2 → a == a → lps[2] = 1
// i = 3 → b == b → lps[3] = 2
// i = 4 → c != a → fallback to lps[1] = 0 → lps[4] = 0
// i = 5 → a == a → lps[5] = 1
// i = 6 → b == b → lps[6] = 2
