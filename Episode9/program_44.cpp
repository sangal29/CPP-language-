// This is 136 leetcode problem 136 of single number  using vector 

#include <iostream>
#include <vector>
using  namespace std;
int main()
{
    vector<int>arr ={1,2,1,2,4};
    int sum = 0;
    for ( int i : arr)
    {
         sum ^=i;
      
    }
      cout << sum;
    return 0;
}