
// 36. Write a preogram of series 1 to n of decimal to binary 


#include<iostream>
using namespace std;
int decToBin ( int n)
{
    int pow = 1;
    int sum = 0;

    while( n > 0)
    {
        int rem = n % 2;
        n /= 2;
        sum += rem * pow;
        pow *= 10;
    }

    return sum;
}
int main()
{
    int a; 
    cout << " Enter the number = ";
    cin >> a;
    cout << " The serries of binary to deci from 1 to " << a << endl;
    for ( int i = 1; i <=  a; i++ )
    {
        cout << decToBin(i)<<endl;
    }
    return 0;
}
