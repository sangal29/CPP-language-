
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>ans;
vector<int>nums = {1,2,3,4};
int size = nums.size();


for( int i = 0; i < size; i++ )
{
    int product = 1;
    for ( int j = 0; j < size; j++)
    {
        
        if( i != j)
        {
            product *= nums[j];
            
        }
    }
    ans.push_back(product);
    cout << ans[i] << " ";
}

return 0;
}
