#include <iostream>
using namespace std;
int main()
{
    char a;
    int b;
    float c;
    double d;
    int e[5] = {1, 2, 3};
    int f[2][3] = {0};
    char ch_a[10] = "Hello";
    char ch_b[] = "Hello";
    cout << sizeof(a) << " " << sizeof(b) << " ";
    cout << sizeof(c) << " " << sizeof(d) << " ";
    cout << sizeof(e) << " " << sizeof(f) << " ";
    cout << sizeof(ch_a) << " " << sizeof(ch_b) << " ";
    return 0;
}