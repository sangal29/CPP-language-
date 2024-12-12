#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 1, 2,2, 3, 3, 4,  5, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int st = 0;
    int end = size - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == st && nums[0] != nums[1])
        {
            cout << " The single element is found " << nums[mid] << " =" << mid;
            return 0;
        }
        if (mid == end && nums[size - 1] != nums[size])
        {
            cout << " The single element is found " << nums[mid] << "=" << mid;
            return 0;
        }
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        {
            cout << " The single element is found " << nums[mid] << "= " << mid;
            return 0;
        }
        if (mid % 2 == 0)
        {

            if (nums[mid - 1] == nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (nums[mid - 1] == nums[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid + 1;
            }
        }
    }
    return 0;
}