
// is_anagram.cpp
// Problem: Check if two strings are anagrams
// Technique: Frequency count (O(n))

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s, string t)
{
	if (s.size() != t.size())
		return false;

	vector<int> freq(26, 0);

	for (char c : s)
		freq[c - 'a']++;

	for (char c : t)
		freq[c - 'a']--;

	for (int count : freq)
	{
		if (count != 0)
			return false;
	}
	return true;
}

int main()
{
	string s = "listen", t = "silent";
	cout << (isAnagram(s, t) ? "Anagram" : "Not Anagram") << endl;
	return 0;
}
// Output: Anagram
// Explanation: The function checks if two strings are anagrams by counting the
// frequency of each character in both strings and comparing the counts. If all
// counts are zero, the strings are anagrams. Time Complexity: O(n), where n is
// the length of the strings Space Complexity: O(1), since the frequency array
// has a fixed size of 26 (for lowercase letters) Note: The code assumes that
// the input strings contain only lowercase letters. If the strings can contain
// uppercase letters or other characters, the frequency array size and character
// mapping would need to be adjusted accordingly.
