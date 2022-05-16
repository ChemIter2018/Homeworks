#include<iostream>
using namespace std;
int main()
{
    char k; int i;
    for (int i = 1; i < 3; i++)
    {
        cin >> k;
        switch(k)
        {
            case '0': cout << "OK" << endl;
            case '1': cout << "BOOK" << endl;
        }
    }
    return 0;
}