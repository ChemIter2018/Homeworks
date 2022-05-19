#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    for(int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "X" << i << "=";
            if(i*j>=1&&i*j<=9)
            {
                printf("%1d ",i*j);
            }
            else
            {
                cout << i*j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}