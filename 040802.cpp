#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for (int i = k + 1; i < 2*k; i++)
    {
        int p1 = i * k;
        int p2 = i - k;
        if(p1%p2==0) cout << i << " " << p1/p2 << endl;
    }
    return 0;
}