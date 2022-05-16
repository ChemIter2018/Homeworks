#include<iostream>
using namespace std;
int main()
{
    int n,k = 0;
    int m[100];
    cin >> n;
    for (int i = 0; n > 0; i++)
    {
        m[i] = n % 2;
        n = n / 2;
        if(m[i] == 1) k++;
    }
    cout << k;
    return 0;
}