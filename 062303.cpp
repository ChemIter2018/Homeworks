#include<iostream>
#include <cstring>
using namespace std;

char st[100];
int Top = 0;

void push(char x)
{
    ++Top;
    st[Top] = x;
}
void pop()
{
    --Top;
}
char top()
{
    return st[Top];
}
bool empty()
{
    return Top == 0;
}

int main()
{
    int count = 0, num = 0;
    char a[100], b[100];
    cin.getline(a, 100);
    for(int i = 0; i < strlen(a); i++) push(a[i]);
    while(!empty())
    {
        if(top() == '@') break;
        while(top() == '#')
        {
            pop();
            count++;
        }
        while(count > 0)
        {
            pop();
            count--;
        }
        if(Top == 0) break;        
        b[num] = top();
        num++;      
        pop();
    }
    
    while(num > 0)
    {
        cout << b[num-1];
        num--;
    }    
    return 0;
}