#include<iostream>
#include<stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(') st.push(')');
            else if (s[i] == '[') st.push(']');
            else if (s[i] == '{') st.push('}');
            else if (st.empty() || s[i] != st.top()) return false;
            else st.pop();
        }
        return st.empty();
    }
};

int main()
{
    Solution *MySolution = new Solution();
    cout << MySolution->isValid("()[]{}");
    return 0;
}