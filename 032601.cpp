#include <iostream>
#include "sort.h"
using namespace std;

int main()
{
    int num[10001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    //BubbleSort(num, n);
    //InsertSort(num, n);
    SelectSort(num, n);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}