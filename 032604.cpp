#include <iostream>
#include "sort.h"
using namespace std;
int main()
{
    int num[100];
    int even[100];
    int odd[100];
    int e = 0, o = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if(num[i] % 2 == 0)
        {
            e++;
            even[e - 1] = num[i];
        }
        else
        {
            o++;
            odd[o - 1] = num[i];
        }
    }

    InsertSort(even, e);
    ReInsertSort(odd, o);

    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << " ";
    }

    for (int i = 0; i < e; i++)
    {
        cout << even[i] << " ";
    }

    return 0;
}