#include <iostream>
#include <string>
using namespace std;
int main()
{
    string c = "", c_min, c_max;
    cin >> c;
    int c_len = c.length();
    c_min[0] = c[0];
    c_max[0] = c[0];
    for(int i = 0; i <= c_len - 1; i++)
    {
        if(c[i] > c_max[0])
        {
            c_max = c[i];
        }
        if(c[i] < c_min[0])
        {
            c_min = c[i];
        }

    }
    cout << "ASCII码值最小字符：" << c_min[0] << endl;
    cout << "ASCII码值最大字符：" << c_max[0] << endl;
    return 0;
}