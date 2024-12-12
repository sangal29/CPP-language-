#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = { 1,2,3,4};
    vector<int>ans(nums.size(),1);
    for( int i = 1; i < nums.size(); i++)
    {
        ans[i] = ans[i-1] * nums[i-1]; 
       
    }
     int suffix =1;
    for( int j = nums.size()- 1 ; j > 0; j-- )
    {
      suffix *= nums[j];
       ans[j] *= suffix;
        
          
    }
    for( int i = 0; i < nums.size(); i++)
    {
        cout << ans[i]<<" ";
    }
  
    return 0;
}