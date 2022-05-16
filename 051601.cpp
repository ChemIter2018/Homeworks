#include<iostream>
using namespace std;
void f(int n)
{
    cout << n%2;
    if(n==0) return;
    f(n/2);
    //cout << n%2;
}

int main()
{
    f(13);
    return 0;
}