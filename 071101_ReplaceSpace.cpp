#include<iostream>
using namespace std;

class Solution
{
    public:
    string replaceSpace(string s)
    {
        int count = 0;
        int sOldSize = s.size();
        for (int i = 0; i < sOldSize; i++)
        {
            if (s[i] == ' ') count++;
        }

        s.resize(s.size() + count * 2);
        int sNewsize = s.size();
        for (int i = sNewsize - 1, j = sOldSize - 1; j < i; i--, j--)
        {
            if (s[j] != ' ')
            {
                s[i] = s[j];
            }
            else
            {
                s[i] = '0';
                s[i - 1] = '2';
                s[i - 2] = '%';
                i -= 2;
            }
        }
        return s;
    }
};

int main()
{
    Solution *MySolution = new Solution();
    string s = "We are happy";
    s = MySolution->replaceSpace(s);
    cout << s;
}