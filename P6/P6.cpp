
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
    
#include <iostream>
#include <cmath>
using namespace std;

long sumofSquares(int limit)
{
    int sum = 0;
    for (int i = 1; i <= limit; i++)
    {
        sum += pow(i, 2);
    }
    return sum;
}

long squareofSum(int limit)
{
    int sum = 0;
    for (int i = 1; i <= limit; i++)
    {
        sum += i;
    }
    return pow(sum, 2);
}
int main()
{
    int n;
    cin >> n;
    int n1 = sumofSquares(n);
    int n2 = squareofSum(n);
    cout << "sum of squares - square of sums = " << n1 << " - " << n2 << " = " << sumofSquares(n) - squareofSum(n);
}
