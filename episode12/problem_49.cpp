// //  This program tell us how to sole major < n/2

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 2, 1, 1, 1,1,  2, 2};
    int size = nums.size();
    for (int i : nums)
    {
        int freq = 0;

        for (int j : nums)
        {
            if (i == j)
            {
                freq++;
            }
        }

        if (freq > size / 2)
        {
            cout << i;
            break;
        }
        else 
        cout << " no major element ";
        break;
    }
    return 0;
}

