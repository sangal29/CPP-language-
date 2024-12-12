//  this program tell the pair sum is equal to target value 
//  this is  brute force approch to solve the probelem
  
#include <iostream>
#include <vector>
using namespace std;

  vector<int>pairsum( vector<int>nums, int target)
{
    vector<int>ans;
    int size = nums.size();
    for ( int i = 0;  i < size; i++)
    {
        for( int j = i + 1; j < size; j++)
        {
            if( nums[i]+nums[j] == target)
            {
            ans.push_back(i);
            ans.push_back(j);
            
            }
        }
    }
    return ans;
}
int main()

{
vector<int>nums = { 2, 7, 11 ,15};
int target = 13;
vector<int>result = pairsum( nums, target);
cout << result[0] << " ," << result[1];
  
  return 0;
}