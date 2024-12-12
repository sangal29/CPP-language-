#include <iostream>
using namespace std;
int ind ( int ar[] , int ta )
{   
    int size = sizeof(ar)/sizeof(int);
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
    int target = 8;

    int check = ind( arr, target) ;

     if( check == -1)
     {
        cout << " num is in scope ";

     }
     else
     cout << " num is not in scope ";
     return 0 ;
}