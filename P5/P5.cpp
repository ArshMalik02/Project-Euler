/*
* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

bool nullRemainder(int num)
{
	for (int i = 1; i < 21; i++)
	{
		if (num % i != 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int number = 21;
	while (true)
	{
		if (nullRemainder(number))
		{
			cout << number;
			break;
		}
		number++;
	}
}