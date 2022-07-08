#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0) return result;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;
            while (right > left)
            {
                if (nums[i] + nums[left] + nums[right] > 0)
                {
                    right--;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if (nums[i] + nums[left] + nums[right] < 0)
                {
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                }
                else
                {
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;
                    right--;
                    left++;
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    Solution *MySolution = new Solution();
    vector<vector<int>> result = MySolution->threeSum(nums);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}