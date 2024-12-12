//  write a program of binomial coofecent  using function 

#include <iostream>
using namespace std;
int factorial(int N)
{
    int fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
        
    }

    return fact;
}
int main()
{
    int n, r;
    cout << " Enter the value of n = ";
    cin >> n;
    cout << " Enter the value of r = ";
    cin >> r;

    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n - r);
    int bino_Coff = a / (b * c);
    cout << bino_Coff;
    return 0;
}