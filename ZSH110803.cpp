#include <iostream>
#include <string>
using namespace std;
int main()
{
    char c[] = "", c_min, c_max;
    cin >> c;
    int c_len = strlen(c);
    c_min = c[0];
    c_max = c[0];
    for(int i = 0; i <= c_len - 1; i++)
    {
        if(c[i] > c_max)
        {
            c_max = c[i];
        }
        if(c[i] < c_min)
        {
            c_min = c[i];
        }

    }
    cout << "ASCII码值最小字符：" << c_min << endl;
    cout << "ASCII码值最大字符：" << c_max << endl;
    return 0;
}