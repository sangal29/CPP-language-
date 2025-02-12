//  to find the target value using binary search algorth using function 
#include<iostream>
#include<vector>
using namespace std;

int binaryresult( vector<int>arr,int  target)
{
    int size = arr.size();
    int start = 0;
    int end = size -  1;

    while( start <= end)
    {
        int mid = start + ( start - end)/2; 
        //  this is best approch to find the mid value and it reduce the over flow condition
        if( arr[mid] < target)
        {
            start = mid + 1;
        }
       else if( arr[mid] > target )
       {
         end = mid - 1;
       }
       else
       {
        
        return mid;
         
       }
    } 
    return  -1;
}

int main()
{
    vector<int>array_1 = { 1,2,3,4,5,6,78,99};
    int target_1 = 781;

    int result = binaryresult(array_1,target_1);

    if ( result != -1)
    {
        
         cout << " target value is in the scope" << result; 
    }
    else
    {
       cout << " Target value is not in the scope ";
    }

   
    return 0;
}
