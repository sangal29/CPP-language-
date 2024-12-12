//  moore voting algo for finding the n/2 maximum element 

#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>nums ={ 3,1,3,3,3,2};
    int freq = 0;
    int ans = 0;
    for ( int i = 0; i < nums.size();i++)
    {
        if ( freq == 0)
        {
         ans = nums[i];
        }
        if ( ans == nums[i])
        {
            freq ++;
        }
        else{
            freq--;
        }

    }
   cout << ans ;
    return 0; 
}