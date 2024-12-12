//  max sum of the pair usning kadarin algorithim

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
     vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        // vector<int>nums = {-2,-4};
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i : nums)
    {
        currSum += i;
    maxSum = max(currSum, maxSum);
    if (currSum < 0)
    {
        currSum = 0;
    }
    }
    cout << " max sum = " << maxSum;
    return 0;
}
