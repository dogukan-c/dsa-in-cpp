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
// Output: Valid Palindrome
// Explanation:
// The isPalindrome function checks if the input string is a palindrome by using two pointers.
// It ignores non-alphanumeric characters and is case-insensitive.
// The function iterates through the string, moving the left pointer to the right and the right pointer to the left.
// If the characters at both pointers are not equal, it returns false.
// If the loop completes without finding any mismatches, it returns true.
// The time complexity is O(n) and the space complexity is O(1).
// Note: The function uses the isalnum function to check if a character is alphanumeric and the tolower function to convert characters to lowercase.
