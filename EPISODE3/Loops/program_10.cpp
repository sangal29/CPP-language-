




//  print the factorial of n numberr

#include<iostream>
using namespace std;
int main()
{
 int n ;
 cout << " Enter the Number = ";
 cin >> n;
 int product = 1;

 for ( int i = 1; i <= n; i++)
 {
        product = product * i;
     
 }
cout << product;
return 0;

}
