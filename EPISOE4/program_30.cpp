// // write a pattern
//     outoput 
//                  1
//              1   2   1
//         1    2    3   2  1 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;

    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 0; j <= n- i; j++ )
        {
            cout << " " ;
        }
        for ( int k = 1;  k<= i; k++)
         {
            cout << k;
         }
       for( int l = i - 1; l > 0; l--)
       {
        cout << l;
       }
      cout << endl;
    }
    return 0;
}
