// brute force aproch to calculate the maximum of water
#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int width;
    int max_area = 0;
    int min_height = 0;
    int ans = 0;
    int size = sizeof(height) / sizeof(height[0]);
    int area;
 
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            min_height = min(height[i], height[j]);
            width = j - i;
            area = width * min_height;
        }
        max_area = max(area, ans);
        ans = max_area;
    }
    cout << ans;
    return 0;
}