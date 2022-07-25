#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[1000] = {0};
    int n, op, x, y, index = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == 0)
        {
            cin >> x >> y;
            if (a[x] == 0)
            {
                a[x] = y;
            }
            else
            {
                for (int i = index + 1; i > x; i--)
                {
                    a[i] = a[i -  1];
                }
                a[x] = y;
            }
            index++;
        }
        else if (op == 1)
        {
            cin >> x;
            cout << a[x] << endl;
        }
    }
    return 0;
}