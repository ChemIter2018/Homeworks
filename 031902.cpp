#include <iostream>
using namespace std;
int main()
{
    int boy[1000];
    int girl[1000];
    int id, high, g = 0, b = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> high;
        if(id == 0)
        {
            girl[g] = high;
            g++;
        }
        else if(id == 1)
        {
            boy[b] = high;
            b++;
        }
    }

    for (int i = 0; i < b - 1; i++)
    {
        for (int j = 0; j < b - 1 - i; j++)
        {
            if(boy[j]>boy[j+1]) swap(boy[j], boy[j+1]);
        }
    }


    for (int i = 0; i < g - 1; i++)
    {
        for (int j = 0; j < g - 1 - i; j++)
        {
            if(girl[j]<girl[j+1]) swap(girl[j], girl[j+1]);
        }
    }


    for (int i = 0; i < g; i++)
    {
        cout << girl[i] << " ";
    }

    for (int i = 0; i < b; i++)
    {
        cout << boy[i] << " ";
    }

    return 0;
}