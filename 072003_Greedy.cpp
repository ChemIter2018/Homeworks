#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
private:
    /* data */
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        int n = s.size() - 1;
        int result = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = g.size() - 1; i >= 0; i--)
        {
            if (n >= 0 && s[n] >= g[i])
            {
                result++;
                n--;
            }
        }
        return result;
    }
};

int main(int argc, char* argv[])
{
    vector<int> g{1, 2, 7, 10};
    vector<int> s{1, 3, 5, 9};
    Solution sol;
    int result = sol.findContentChildren(g, s);
    cout << result << endl;
    return 0;
}

