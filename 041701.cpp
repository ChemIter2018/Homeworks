#include <iostream>
using namespace std;
int a[105], to[1005];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        to[a[i]]++;
    }
    for (int i = 0; i < 1004; i++)
    {
        for (int j = 0; j < to[i]; j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}