// 37 . write a program of binary to deci for a number 

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << " Enter the number = ";
    cin >> a;
    int sum = 0;
    int pow = 1;
    cout << " The Binary to decimal form of " << a << " is = ";

    while ( a > 0)
    {
         int rem = a % 10;
         sum += rem * pow;
         a /= 10;
         pow *= 2;

    }
    cout << sum ;
    return 0;
}