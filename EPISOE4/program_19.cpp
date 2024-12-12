// program to print th efloyd pattern triangle.
// output:
//     A 
//     B C 
//     D E F G 
//     H I J K L 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;
    int num = 1;
    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= i; j++ )
        {
            int alpha = 64 + num;
            char pattern = (char)alpha;
            cout << pattern <<" ";
            num++;

        }
        cout <<endl;
    }
    return 0;
}