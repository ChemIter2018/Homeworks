#include<iostream>
#include<cstring>
using namespace std;
void spilt(char s1[], char s2[]){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i=0;i<len2;i++){
        s1[len1+i] = s2[len2-1-i];
    }
    cout<<s1;
}

int main()
{
    char s1[100],s2[100];
    cin>>s1>>s2;
    spilt(s1,s2);
    return 0;
}