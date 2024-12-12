//  program for print  the sum of  n numer using for loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;
    int sum = 0;

    //  for loop

    // for( int i = 1; i <=n; i++ )
    // {
    //     sum = sum + i;
    // }

    //  while loop

    int i = 1; while (i <= n)
    {
         
        sum = sum + i;
        
     i++;
      
    }

    cout << sum;

    return 0;
}
