#include<iostream>
#include<vector>
using namespace std;

int minSubArrayLen(int val, vector<int>& nums)
{
    int result = INT32_MAX;
    int sum = 0;
    int i = 0;
    int subLength = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        sum += nums[j];
        while (sum >= val)
        {
            subLength = j - i + 1;
            result = result < subLength ? result : subLength;
            sum -= nums[i++];
        }
    }
    return result == INT32_MAX ? 0 : result;
}

int main()
{
    int val = 7;
    int temp[6] = {2,3,1,2,4,3};
    vector<int> nums(temp, temp + 6);
    int result = minSubArrayLen(val, nums);
    cout << result;
    return 0;
}