#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int b[26] = {0}, max = 0, maxIndex = 0;
    cin >> a;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        b[a[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(b[i] > max)
        {
            max = b[i];
            maxIndex = i;
        }
    }

    a = maxIndex + 97;
    cout << a << " " << max;

    return 0;
}

