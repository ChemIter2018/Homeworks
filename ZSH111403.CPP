#include<iostream>
using namespace std;
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
    }
    else
    {
        ch = ch - 'a' + 'A';
    }
    cout << ch << endl;
    return 0;
}