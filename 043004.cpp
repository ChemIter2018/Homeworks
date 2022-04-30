#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i] == 'A') b[i] = 'T';
        if(a[i] == 'T') b[i] = 'A';
        if(a[i] == 'C') b[i] = 'G';
        if(a[i] == 'G') b[i] = 'C';
    }

    for (int i = 0; i < a.length(); i++)
    {
        cout << b[i];
    }

    return 0;
}