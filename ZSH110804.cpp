#include <iostream>
using namespace std;
int main()
{
    int a, b, n_max, i_max;
    cin >> a >> b;
    i_max = a;
    n_max = 1;
    if(b > i_max)
    {
        i_max = b;
    }
    for(int i = 1; i <= i_max; i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            if(i > n_max)
            {
                n_max = i;
            }
        }
    }
    cout << "最大公约数为：" << n_max << endl;
    return 0;
}