#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int middle = left + ((right - left) / 2);
        if (nums[middle] > target)
        {
            right = middle - 1;
        }
        else if(nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}

int main()
{
    int temp[6] = {-1, 0, 3, 5, 9, 12};
    vector<int> nums(temp, temp + 6);
    int target = 9;
    int result = search(nums, target);
    cout << result;
    return 0;
}