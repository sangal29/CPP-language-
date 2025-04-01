//  Program to print number is prime or not 


#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << " Enter the number = ";
    cin >> n;
    bool isprime = true;

    for (int i = 2; i <= n / 2  ; i++)
    {

        if (n % i == 0)
        {
            isprime = false;
            // break;
        }
    }
    if (isprime == true)
    {
        cout << " Enter numer is a prime ";
    
    }
    else
        cout << " Enter number is not a prime number ";

    return 0;
}
