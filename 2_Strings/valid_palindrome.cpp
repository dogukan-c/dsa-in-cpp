// valid_palindrome.cpp
// Problem: Check if a string is a palindrome (ignore non-alphanum,
// case-insensitive) Technique: Two-pointer with cleanup (O(n))

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
	int l = 0, r = s.size() - 1;
	while (l < r)
	{
		while (
		    l < r &&
		    !isalnum(s[l])) // to check if the character is alphanumeric
			l++;

		while (l < r && !isalnum(s[r]))
			r--;

		if (tolower(s[l]) != tolower(s[r])) // to check if the characters are equal on both sides
			return false;
		l++;
		r--;
	}
	return true;
}

int main()
{
	string s = "A man, a plan, a canal: Panama";
	cout << (isPalindrome(s) ? "Valid Palindrome" : "Not Palindrome")
	     << endl;
	return 0;
}
