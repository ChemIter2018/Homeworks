#include<iostream>
using namespace std;

int st[100], Top = 0;

void push(int x)
{
    ++Top;
    st[Top] = x;
}
void pop()
{
    --Top;
}
int top()
{
    return st[Top];
}
bool empty()
{
    return Top == 0;
}

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        push(n%8);
        n = n / 8;
    }
    while(!empty())
    {
        cout << top();
        pop();
    }   
    return 0;
}