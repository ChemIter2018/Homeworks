#include<iostream>
#include<vector>
using namespace std;

int removeElement1(vector<int>& nums, int val)
{
    int size = nums.size();
    for(int i = 0; i < size; i++)
    {
        if(nums[i] == val)
        {
            for (int j = i + 1; j < size; j++)
            {
                nums[j - 1] = nums[j];
            }
            i--;
            size--;
        }
    }
    return size;
}

int removeElement2(vector<int>& nums, int val)
{
    int slowIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
    {
        if(val != nums[fastIndex])
        {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
}

int main()
{
    int temp[8] = {0,1,2,3,3,0,4,2};
    vector<int> nums(temp, temp+8);
    int val = 2;
    int result1 = removeElement1(nums, val);
    int result2 = removeElement2(nums, val);
    cout << result1 << " " << result2;
    return 0;
}