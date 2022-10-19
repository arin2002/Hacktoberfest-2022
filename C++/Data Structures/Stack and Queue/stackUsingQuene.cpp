#include <bits/stdc++.h>
using namespace std;

//Stack 
class Stack
{
    queue<int> q1, q2;

public:
    void Push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q;
        q = q1;
        q1 = q2;
        q2 = q;
    }
    void Pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        q1.pop();
    }
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }

    int size()
    {
        return q1.size();
    }
};
//Driver code
int main()
{
    Stack s;
    s.Push(112);
    s.Push(11);
    s.Push(12);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    return 0;
}