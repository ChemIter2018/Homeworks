#include<iostream>
#include<vector>
#include<unordered_map>
#include<cstring>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int record[26] = {0};
        if (ransomNote.size() > magazine.size()) return false;
        for (int i = 0; i < magazine.length(); i++)
        {
            record[magazine[i] - 'a']++;
        }
        for (int i = 0; i < ransomNote.length(); i++)
        {
            record[ransomNote[i] - 'a']--;
            if (record[ransomNote[i] - 'a'] < 0) return false;
        }
        return true;
    }
};

int main()
{
    Solution *MySolution = new Solution();
    bool result = MySolution->canConstruct("aa", "aab");
    cout << boolalpha << result;
}