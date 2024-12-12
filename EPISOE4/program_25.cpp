// write a program the sum of digits.

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<< " Enter the number = ";
    cin >> number;
    int sum = 0;
    while( number > 0 )
     {
        int lastdigit = number % 10;
        number /= 10;
        sum += lastdigit;
     }
    cout << sum ;
    return 0;
 
}