//  PRogram to check the prime number from 1 to n;

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Eneter the nummber = ";
    cin >> n;
    cout << " The prime number are = ";
    

    for ( int i = 2; i <= n; i++)
    {
        bool isprime = true;
    for  ( int j = 2; j < i ; j++)
    {
        if ( i % j == 0)
        {
            isprime = false;
            break;
        }
    }
        if ( isprime == true )
        {
            cout << i << " " ;
        }

    }
    return 0;
    
}