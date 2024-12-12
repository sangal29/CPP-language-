#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int st = 0;
    int end = nums.size() - 1;
    int target;

    cout << "Enter the target: ";
    cin >> target;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Check if the middle element is the target
        if (nums[mid] == target) {
            cout << "Target value found at index " << mid << endl;
            return 0;
        }

        // Check if the left half is sorted
        if (nums[st] <= nums[mid]) {
            // Check if the target lies within the sorted left half
            if (target >= nums[st] && target < nums[mid]) {
                end = mid - 1; // Target is in the left half
            } else {
                st = mid + 1; // Target is in the right half
            }
        }
        // Otherwise, the right half is sorted
        else {
            // Check if the target lies within the sorted right half
            if (target > nums[mid] && target <= nums[end]) {
                st = mid + 1; // Target is in the right half
            } else {
                end = mid - 1; // Target is in the left half
            }
        }
    }

    // If the target is not found
    cout << "Target value is not in the scope -1" << endl;
    return 0;
}
