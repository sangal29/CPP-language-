//   write a program of mamimum of subarray using brutforce 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{   int n = 7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    
    int maxSum = INT_MIN;
    for (int st = 0; st <= n; st++ )
    {
    int currsum = 0;
    for( int end = st; end <n; end++)
    {
        currsum += arr[end];
        maxSum= max(currsum, maxSum);
    }
    }
    cout <<maxSum<<endl;
    return 0; 
}