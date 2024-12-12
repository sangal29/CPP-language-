// print the patterr of reverse
// output:
// 1 1 1 1 
//   2 2 2
//     3 3
//       1 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enetr the number = ";
    cin >> n;
    int num = 1;
    for ( int i = 0; i<= n; i++)
    {
         for  ( int j = 0; j <= i; j++)
        {
            cout <<" ";
        }
        for ( int k = 1; k <= n - i ; k++)
         { 
            cout << num ;
         }
         num++;
         cout << endl; 
    }
    return 0;
}