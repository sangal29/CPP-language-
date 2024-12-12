// write a program to sum 1 to n using function.

#include <iostream>
using namespace std;
int  sum( int n)
{
    int sumStart = 0;
    for ( int i = 1; i <= n; i++)
    {
        sumStart += i;
    
    } 
    return sumStart;
}
int main()
{
   cout << sum(7);
   return 0;
}