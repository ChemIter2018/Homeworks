#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int> nums)
{
    int k = nums.size() - 1;
    vector<int> result(nums.size(), 0);
    for (int i = 0, j = nums.size() - 1; i <= j;)
    {
        if(nums[i] * nums[i] < nums[j] * nums[j])
        {
            result[k--] = nums[j] * nums[j];
            j--;
        }
        else
        {
            result[k--] = nums[i] * nums[i];
            i++;
        }
    }
    return result;
}

int main()
{
    int temp[5] = {-4,-1,0,3,10};
    vector<int> nums(temp, temp + 5);
    vector<int> result = sortedSquares(nums);
    for (int i = 0; i < 5; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}