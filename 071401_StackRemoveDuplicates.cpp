#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string S)
    {
        stack<char> st;
        for (char s : S)
        {
            if (st.empty() || s != st.top())
            {
                st.push(s);
            }
            else
            {
                st.pop();
            }
        }
        string result = "";
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

int main()
{
    Solution *MySolution = new Solution();
    string result = MySolution->removeDuplicates("abbacaff");
    cout << result;
    return 0;
}