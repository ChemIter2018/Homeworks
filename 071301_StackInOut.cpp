#include<iostream>
#include<stack>
using namespace std;

class MyQueue
{
    public:
        stack<int> stIn;
        stack<int> stOut;
        MyQueue() {}
        void push(int x)
        {
            stIn.push(x);
        }

        int pop()
        {
            if (stOut.empty())
            {
                while (!stIn.empty())
                {
                    stOut.push(stIn.top());
                    stIn.pop();
                }
            }
            int result = stOut.top();
            stOut.pop();
            return result;
        }

        int peek()
        {
            int res = this->pop();
            stOut.push(res);
            return res;
        }

        bool empty()
        {
            return stIn.empty() && stOut.empty();
        }
};

int main()
{
    MyQueue *queue = new MyQueue();
    queue->push(1);
    queue->push(2);
    cout << queue->peek() << endl;
    cout << queue->pop() << endl;
    cout << queue->empty();
}