//  Rotted shorted array

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = {3,4,5,6,7,0,1,2};
    int size = nums.size() - 1;
    int st = 0;
    int end = size;
   
   int target;
   cout <<" Enter the target ";
   cin >> target;


    while ( st <= end)
     
    {
        int mid = st + (end - st)/2;
        if ( nums[mid] == target )
        {
            cout << " Traget value is found " << endl;
            cout << nums[mid];
            return 0;

        }
        if( nums[st] <= nums [mid])
        {
        if( target >= nums[st] &&  target <= nums[mid])
        {
         end = mid - 1;
          

        }
        } 
        else 
        {
            st = mid + 1;
        }

        if( target >= nums[mid] && target < nums[end])
        {
            st = mid + 1;

        }
        else 
        {
            end =  mid - 1;
        }
    }
    cout <<" target value is not in the scope ";
return 0;
}