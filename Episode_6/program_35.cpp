
// 35. write a code to convert decimal to binary 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;
    int sum = 0;
    int pow = 1;
    cout << " The conversion of "<< n << " decimal to binary is = ";

    while( n > 0)
    {
        int deci = n % 2;
        n  = n / 2;
        sum += deci * pow;
        pow *= 10;
    }
    cout << sum;
    return 0;
}