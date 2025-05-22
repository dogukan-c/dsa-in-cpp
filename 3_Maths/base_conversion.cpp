// base_conversion.cpp
// Problem: Convert number from base 10 to base b
// Technique: Repeated division

#include <iostream>
#include <string>
using namespace std;

string toBase(int num, int base)
{
	if (num == 0)
		return "0";
	string digits = "0123456789ABCDEF";
	string res = "";

	while (num > 0)
	{
		res = digits[num % base] + res;
		num /= base;
	}
	return res;
}

int main()
{
	int num = 255;
	cout << "Decimal " << num << " in base 2: " << toBase(num, 2) << endl;
	cout << "Decimal " << num << " in base 8: " << toBase(num, 8) << endl;
	cout << "Decimal " << num << " in base 10: " << toBase(num, 10) << endl;
	cout << "Decimal " << num << " in base 16: " << toBase(num, 16) << endl;
	return 0;
}
// Output:
// Decimal 255 in base 2: 11111111
// Decimal 255 in base 8: 377
// Decimal 255 in base 10: 255
// Decimal 255 in base 16: FF
// Explanation:
// The toBase function converts a decimal number to a specified base (2, 8, 10, or 16).
// It uses repeated division to extract the digits of the number in the specified base.
// The digits are stored in a string and returned as the result.
// The main function demonstrates the usage of the toBase function by converting the decimal number 255 to different bases.
// The output shows the converted values in binary (base 2), octal (base 8), decimal (base 10), and hexadecimal (base 16).
// The time complexity is O(log n) for the conversion, where n is the number of digits in the base representation.
