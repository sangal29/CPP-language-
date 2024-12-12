//  write a program of sum of digit ussing function
#include <iostream>
using namespace std;
int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        sum += lastDigit;
    }
    return sum;
}
int main()
{
    int number;
    cout << " enter the value ";
    cin >> number;
    int sum = digitSum(number);
    cout <<" the sum of digite is = "<< sum;
    return 0 ;
}