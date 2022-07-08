#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class Solution
{
public:
    void reserseString(vector<char>& s)
    {
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {
            swap(s[i], s[j]);
        }
    }
};

int main()
{
    Solution *MySolution = new Solution();
    vector <char> s{'h','e','l','l','o'};
    MySolution->reserseString(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}