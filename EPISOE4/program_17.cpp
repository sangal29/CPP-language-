// program to print the program
// output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number = ";
    cin >> n;

    
    for (int i = 1; i <= n; i++)
    {
        // int num = 1;
        for (int j = i;  j >=1; j--)
        {
            cout << j ;
        
        }
        cout << endl;
    }
    return 0;
}
