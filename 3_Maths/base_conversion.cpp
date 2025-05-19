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
