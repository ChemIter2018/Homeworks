#include<iostream>
using namespace std;
int a[10000];
void f(int t)
{
    if(t==4)
    {
        cout << a[1] << " " << a[2] << " " << a[3] << endl;
        return;
    }
    for(int i=1;i<=3;i++)
    {
        a[t]=i;
        f(t+1);
    }
}

int main()
{
    f(1);
    return 0;
}