#include<iostream>
using namespace std;
int main()
{
    int n=4,i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            cout << " ";
        }
        for(j=1;j<=7-2*(i-1);j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}