#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    double a = 10.0, b = 3.0;
    cout << a/b << " ";
    cout << setprecision(4) << a/b << " ";
    cout << fixed << setprecision(4) << a/b << " ";
    return 0;
}
