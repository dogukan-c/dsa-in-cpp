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
