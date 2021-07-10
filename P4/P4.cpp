/*
 Solution to problem 4 -
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
using namespace std;

// function to check if number is palindrome or not

int palindrome_check(int num)
{
	int revnum = 0;
	int x = num;
	while (num != 0)
	{
		int digit = num % 10;
		num /= 10;
		revnum = revnum * 10 + digit;
	}
	if (revnum == x)
		return 1;
	else
	{
		return 0;
	}
}

int main()
{
	int largestPalindrome=0;
	for (int n1 = 100; n1 < 1000; n1++)
	{
		int num;
		for (int n2 = 100; n2 < 1000; n2++)
		{
			num = n1 * n2;
			if (palindrome_check(num)==1)
			{
				if (num > largestPalindrome)
					largestPalindrome = num;
			}
		}
	}
	cout << "The largest palindrome made from the product of two 2-digit numbers is " << largestPalindrome;
	
}