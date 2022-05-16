#include<iostream>
using namespace std;
void f(int t)
{
    if(t==4)
    {
        cout << "进入4号空间" << endl;
        cout << "发现并拿走宝石" << endl;
        cout << "离开4号房间" << endl;
        return;
    }
    cout << "进入" << t << "号房间" << endl;
    f(t+1);
    cout << "离开" << t << "号房间" << endl;
}

int main()
{
    f(1);
    return 0;
}