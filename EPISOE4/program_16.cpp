// print the triangle pattern 
//     output:
//     1
//     12
//     123
//     1234  

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;

    
    for (int i = 1; i <= n; i++)
{
        for (int j = 1; j <= i; j++)
        {
            cout << j  ;

        }
        cout << endl;
    }
    return 0;
}
