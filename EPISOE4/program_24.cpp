// Explain the concept of Pass by value in function.

#include <iostream>
using namespace std;
int sumN ( int a , int b)
{
    a = a + 10;
    b = b + 24;
    return a + b;
}

int main()
{
    int x = 4;
    int y = 6;
    cout << x << " "<< y << endl;
    cout << sumN ( x ,y);
    return 0;
}