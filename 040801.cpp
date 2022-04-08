#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            if(i+j == 30 && 2*i+4*j == 88)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}