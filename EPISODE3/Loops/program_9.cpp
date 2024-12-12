//  sum of all umber from 1 to n which is divisble y 3;

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;
    int sum = 0;

    for ( int i = 1; i <= n; i++)
    {
        if( i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << " The sum of n number which is ivisble by 3 are = " << sum ;
    return 0;
}