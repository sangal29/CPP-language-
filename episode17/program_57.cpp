\\
\\
#include<iostream>
using namespace std;
int main()
{
    int array[] = {-1,2,3,4,5,9,11,12};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 12;
    int start = 0;
    int end = size - 1;
   

    while( start  <= end)
    {
     int mid = (start + end)/ 2;
    if ( array[mid] < target  )
     {
         start = mid + 1;
     }
     else if ( array[mid] > target )
     {
       
        end = mid - 1;

     }
     else  
    {
        cout<< " target value is found " << mid;
        return 0;
    }

   
    }

    cout <<  "target value is not in the scope" << " "<< -1;  
    return 0; 
}
