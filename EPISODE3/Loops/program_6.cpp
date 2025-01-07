//  Program to print the sum of odd number......

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;
    int sum = 0;

    //  for loop 

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum = sum + i;
    //     }
    // }


    //  while loop 

    int i = 1;
    while ( i <= n)
    {
        if ( i % 2 != 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum;
    return 0;
}
