#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, c, d, e;
    d = a++;
    e = --b;
    c = d*e;
    cout << c << " " << d << " " << e;
    return 0;
}