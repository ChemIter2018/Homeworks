#include<iostream>
#include<unistd.h>

using namespace std;

int main()
{
    for (size_t i = 1; i < 5; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "*";
            usleep(2000);
        }
        cout << endl;
    }
    return 0;
}