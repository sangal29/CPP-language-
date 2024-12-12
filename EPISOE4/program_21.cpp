//  write a program of min number using function.

#include <iostream>
using namespace std;
int minValue(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    cout << minValue(5, 7);
    return 0;
}