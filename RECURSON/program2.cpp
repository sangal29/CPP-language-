// write a program in which we print factorial of n using recursion.
#include<iostream>
using namespace std;
void factorial_num(int n)
{
     if(n == 0)
     {
         cout <<1;
         return;
     }
     cout << n * factorial_num(n-1);

}
int main()
{
    int number;
    cout << " Enter the number =";
    cin >> number;
    factorial_num(number);
    return 0;
}