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
    for (int i = 1; i <= 5; i++) push(i);
    cout << top() << endl;
    cout << "Output:";
    while(!empty())
    {
        cout << top() << " ";
        pop();
    }   
    return 0;
}