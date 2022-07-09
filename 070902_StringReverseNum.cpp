#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    string reverseLeftWords(string s, int n)
    {
        // [first, last) of any container
        reverse(s.begin(), s.begin() + n);
        reverse(s.begin() + n, s.end());
        reverse(s.begin(), s.end());
        return s;
    }
};

int main()
{
    Solution *MySolution = new Solution();
    string s = MySolution->reverseLeftWords("abcdefg", 2);
    cout << s;
    return 0;
}