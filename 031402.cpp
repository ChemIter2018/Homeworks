#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 1, b = 16;
    swap(a, b);
    cout << pow(sqrt(a) - sqrt(b), sqrt(a) + sqrt(b));
    return 0;
}