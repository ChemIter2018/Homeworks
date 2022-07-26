#include<iostream>
using namespace std;

class Solution {
public:
    int num(char s)
    {
        int num = 0;
        switch(s)
        {
            case 'I':
                num = 1;
                break;
            case 'V':
                num = 5;
                break;
            case 'X':
                num = 10;
                break;
            case 'L':
                num = 50;
                break;
            case 'C':
                num = 100;
                break;
            case 'D':
                num = 500;
                break;
            case 'M':
                num = 1000;
                break;
        }
        return num;

    }
    int romanToInt(string s)
    {
        int currentNum = 0;
        int preNum = 0;
        int sum = 0;
        for (int i = s.length() - 1; i >= 0 ; i--)
        {
            
            currentNum = num(s[i]);          
            if (currentNum < preNum) sum -= currentNum;
            else sum += currentNum; 
            preNum = currentNum;
        }
        return sum;
    }
};

int main()
{
    string s = "LVIII";
    Solution sol;
    int sum = sol.romanToInt(s);
    cout << sum;
    return 0;
}