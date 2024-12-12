#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;

    for ( int i = 0; i <= n; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            cout << "x";
        }
        for ( int k = 1; k <= n*2-2*i; k++)
          {
            cout <<" ";
          }
         for ( int l = 1; l<= i; l++)
         {
          cout << "x";
         }

        cout << endl;
    }
    for( int m = 0; m <= n; m++)
    {
      for( int p = 1; p<= n-m; p++)
      {
        cout << "x";
      }
      for ( int q= 1;q <= 2*n-2*(n-m); q++ )
      {
        cout <<" ";
      }
      for ( int r  = 1 ; r <= n-m ; r++ )
      {
      cout <<"x";
      }
      cout <<endl;
    }
    

   return 0;
}