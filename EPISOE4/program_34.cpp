//  writa a program of prime  number using function.
#include<iostream>
using namespace std;
bool prime ( int n)
{
    bool  isprime = true;
    for( int i = 2; i <= n; i++)
    {
        if ( n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    
   
    
       return  true;
}
int main()
{
    int a;
    cout << " The number = ";
    cin >> a;
     if ( prime(a) )
       {
        cout << a <<   " The number is  prime " ;
       }
       else 
       {
        cout <<  a << " The number is not prime ";
       }
    return 0;
}