#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    int num = strlen(a);
    string strName = "OK";
    if(num%2 != 0) strName = "Wrong";
    else
    {
        for (int i = 0; i < num/2; i++)
        {
            int value =  a[num - 1 - i] - a[i];
            if(value != 1 && value != 2 && value != -1 && value != -2) strName = "Wrong";
        }
    }
    cout << strName << endl;
    return 0;
}