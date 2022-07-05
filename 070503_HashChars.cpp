#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string>& A)
    {
        vector<string> result;
        if (A.size() == 0) return result;
        int hash[26] = {0};
        for (int i = 0; i < A[0].size(); i++)
        {
            hash[A[0][i] - 'a']++;
        }

        int hashOtherStr[26] = {0};
        for (int i = 1; i < A.size(); i++)
        {
            memset(hashOtherStr, 0, 26 * sizeof(int));
            for (int j = 0; j < A[i].size(); j++) {
                hashOtherStr[A[i][j] - 'a']++;
            }
            // 更新hash，保证hash里统计26个字符在所有字符串里出现的最小次数
            for (int k = 0; k < 26; k++) {
                hash[k] = min(hash[k], hashOtherStr[k]);
            }
        }
        // 将hash统计的字符次数，转成输出形式
        for (int i = 0; i < 26; i++) {
            while (hash[i] != 0) { // 注意这里是while，多个重复的字符
                string s(1, i + 'a'); // char -> string
                result.push_back(s);
                hash[i]--;
            }
        }
        return result;
    }
};

int main()
{
    vector<string> strA, result;
    Solution *MySolution = new Solution();
    strA.push_back("bella");
    strA.push_back("label");
    strA.push_back("roller");
    result = MySolution->commonChars(strA);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
