#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int b[26] = {0};
    cin >> a;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        b[a[i] - 97]++;
    }

    for (int i = 0; i < n; i++)
    {
        if(b[a[i] - 97] == 1)
        {
            cout << a[i];
            return 0;
        }
    }
    cout << "no";
    return 0;
}