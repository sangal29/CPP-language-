
//  Program to print the alphabat square
//  output :
//     A B C D
//     A B C D
//     A B C D
//     A B C D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the alphabat  = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int print = 65 + j;
            char pattern = char(print);
            cout << pattern << " ";
             
        }
        cout << endl;
    }
    return 0;
}
