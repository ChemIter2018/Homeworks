#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    while (true)
    {
        if (i*n%2 == 0)
        {
            cout << i*n;
            break;
        }
        i++;
    }
    return 0;
}