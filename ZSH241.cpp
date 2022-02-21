#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int a[100];
    while(true)
    {
        cin >> a[i];
        if(a[i] == 0) break;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j] << " ";
    }

    return 0;
}