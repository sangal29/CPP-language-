//  41 write a program which tell the target value is in the scope using function 

#include <iostream>
using namespace std;
int ind ( int ar[] , int ta ,int size )
{   
    
    for ( int i = 0; i < size; i++ )
    {
        if ( ar[i] == ta)
         {
            return i;
         }

    }
    return  -1;
}
int main()
{
    int arr[] = { 1,3,4,5,6,7,8};
    int target = 4 ;
    int size = sizeof(arr)/sizeof(int);

    int check = ind( arr, target,size) ;

     if( check != -1)
     {
        cout << " num is in scope ";
        cout << check;
     }
     else
     cout << " num is not in scope ";
     return 0 ;
}