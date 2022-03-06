#include <iostream>
using namespace std;
void change(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int n = 3, m = 4;
    change(n, m);
    cout << n << " " << m;
    return 0;
}