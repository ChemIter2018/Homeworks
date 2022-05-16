#include<iostream>
using namespace std;
void f(int n)
{
    char c;
    if(n==0) return;
    f(n/16);
    c = n%16 + 55;
    if(n%16 < 10) cout << n%16;
    else cout << c;
}

int main()
{
    int a;
    cin >> a;
    f(a);
    return 0;
}