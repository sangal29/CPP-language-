//  write a program of factorial of number using function

#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for( int i = 1; i <= n; i++)
    {
       factorial *= i;
    }
    return factorial;
}
int main()
{
   cout << fact(5);
   return 0;
}