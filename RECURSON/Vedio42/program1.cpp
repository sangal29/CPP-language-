// write a program in which we print the number for n to 1 using recusrion.

#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 1)
    {
        cout << 1 << " ,";
        return;
    }
    cout << n << " ,";
    print(n - 1);
}
int main()
{
    int number;
    cout << " Eneter the number = ";
    cin >> number;
    print(number);
    return 0;
}