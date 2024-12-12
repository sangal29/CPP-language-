// leetcode problm 540 single element in the shorted array  this is brute force approch for the problem 

#include<iostream>
using namespace std;
int main()
{
    int nums[] = { 1,1,2,2,3,3,4,4,5,6,6,7,7,8,8};
    int size = sizeof(nums)/sizeof(nums[0]) ;
    
    for ( int i = 0; i < size; i++)
    {
         if( nums[i] == 0 && i != nums[i+1])
         {
            cout <<" The single elemnt is found " << nums[i] << " = " << i;
            return 0;
         }

         else if (nums[i] == size &&  nums[i] != nums[size - 1])
         {
            cout << " single element is found " << nums[i]<< " = "<< i;
            return 0;
         }
         else if ( nums[i] != nums[i -1] && nums[i] != nums[i + 1] )
         { 
            cout << " single elemnt is found " << nums[i] << "=" << i;
            return 0;  
         }
    }

    return 0;
}