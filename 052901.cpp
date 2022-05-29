#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char str1[11] = "HELLO, ", str2[10] = "world";
    cout << strlen(strcpy(str1,str2));
}