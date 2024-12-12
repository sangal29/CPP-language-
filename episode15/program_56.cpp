// program 56 second brurte force approchh using suffix and prefixx

#include<iostream>
#include<vector>
using namespace std;
int main()
{ vector<int>nums = { 1,2,3,4};
    int size = nums.size();
    vector<int>ans( size , 1 );
    vector<int>prefix(size , 1);
    vector<int>sufix(size ,1) ;
   

    for( int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];

    }
    for( int j = size - 2; j >= 0; j--)
    {
        sufix[j] = sufix[j + 1] * nums[ j + 1];
    }
    for( int k = 0; k < size; k++)
    {
        ans[k] = prefix[k] * sufix[k];
        cout << ans[k] << " ";
    

    }
    return 0;

}