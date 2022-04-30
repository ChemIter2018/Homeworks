#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, k = 0,a[10000];
    int b[10] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if(b[i] > 0)
        {
            k++;
            if(k == m)
            {
                cout << i;
                break;
            }
        }
    }

    if(k < m) cout << "No result!";
    return 0;
}

