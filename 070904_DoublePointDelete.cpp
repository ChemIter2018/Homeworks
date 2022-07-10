#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int removeElement(vector<int> &nums, int val)
    {
        int slowPoint = 0;
        for (int fastPoint = 0; fastPoint < nums.size(); fastPoint++)
        {
            if (nums[fastPoint] != val) nums[slowPoint++] = nums[fastPoint];
        }
        return slowPoint;
    }
};

int main()
{
    Solution *MySolution = new Solution();
    vector<int> nums{1,2,3,4,2};
    int slowpoint = MySolution->removeElement(nums, 2);
    cout << slowpoint;
}