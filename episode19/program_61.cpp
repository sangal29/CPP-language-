
// leet code problem 852 peak mountain elemnt.
//
//
//
//
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = { 0,3,8,9,5,2};
    int size = nums.size() -1;
    int st = 1;
    int end = size - 1;

    while ( st <= end)
    {
        int mid = st + ( end - st)/2;
        if(  nums[mid - 1] < nums[mid]  && nums[mid] > nums[mid + 1])
        {
            cout << " The peak element  = " <<mid;
            return 0;

        }
       else if( nums[mid - 1] < nums[mid])
       {
        st = mid + 1;
       }
       else 
       {
        end = mid - 1;
       }

    }
  return 0;
}
