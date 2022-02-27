#include<iostream>
using namespace std;
bool huiwen(int m){
    int temp=m,sum=0;
    while(m){
        sum=sum*10+m%10;
        m/=10;
    }
    return temp==sum;
}
int main()
{
    for(int i=1;i<=20;i++){
        if(huiwen(i)&&huiwen(i*i)){
            cout<<i<<" ";
        }
    }
    return 0;
}