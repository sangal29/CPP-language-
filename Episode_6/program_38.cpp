//  38. write a program which reverse the number  
 
 
 #include<iostream>
using namespace std;
int main()
{
    int  n ;
    cout << " Enetr the number = ";
    cin >> n;
    
    while ( n >0 )
     {
      int  num =   n % 10;
       n /= 10;
       cout << num;
     }
     return 0;
    }