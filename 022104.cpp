#include<iostream>
using namespace std;
bool check(int m){
    int a=m%10,b=m/10;
    if(m%a==0 && m%b==0) return true;
    return false;
}
int main()
{
    for (int i = 10; i <=40; i++)
    {
        if(i%10==0) continue;
        if(check(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}