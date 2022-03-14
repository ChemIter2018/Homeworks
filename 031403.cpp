#include <iostream>
using namespace std;
int main()
{
    int num[10001];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if(num[j]>num[j+1]) swap(num[j], num[j+1]);
        }
        for (int i = 1; i <= n; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }
    return 0;
}