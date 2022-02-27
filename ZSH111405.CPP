#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    for(a = 1; a <= 4 ; a++)
    {
        for(b = 1; b <= 4 ; b++)
        {
            for(c = 1; c <= 4 ; c++)
            {
                for(d = 1; d <= 4 ; d++)
                {
                    if(a != b && a != c && a != d && b != c && b != d && c != d)
                    {
                        if((c == 1) + (a == 3) == 1)
                        {
                            if((b == 1) + (d == 4) == 1)
                            {
                                if((d == 2) + (c == 3) == 1)
                                {
                                    cout << a << b << c << d << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}