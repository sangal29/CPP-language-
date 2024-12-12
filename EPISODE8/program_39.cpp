//  39.. write a program of finding min of the array list 

//  method 1 using implicit fuction 



#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int arr[] = { 1, 3, 5, 6, -9};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int size = sizeof(arr)/sizeof(int);
   
    for ( int i = 0; i < size; i++ )
    {
        smallest = min(arr[i] , INT_MAX);
    
    }

    //  method 2 using loop 


    {  for ( int i = 0; i < 5; i++ )
      if ( arr[i] < smallest)
        smallest = arr[i];


    }

    
        for (int i = 0; i< size; i++)
        {
            largest = max(arr[i], largest);  
        }
    
    cout << smallest <<endl;
    cout << smallest <<endl;
    cout << largest;
    return 0;
}



