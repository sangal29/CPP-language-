#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << " Enter the Number = ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= n - i; j++)
    {
      cout << " ";
    }
    cout << "*";
    if (i != 1)
    {
      for (int k = 0; k <= 2 * i - 3; k++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
  for ( int l = 1; l<=n-1; l++)
     {
      for ( int m = 1; m <= l +1; m++)
        {
          cout << " ";
        }
        cout <<"*"; 
        if( l != n-1 )
        {
          for ( int p = 1; p<= 2*(n- l-1); p++)
          {
          cout <<" ";
          } 
            cout <<"*";
        }
        cout <<endl;
      
     }
  return 0;
}
