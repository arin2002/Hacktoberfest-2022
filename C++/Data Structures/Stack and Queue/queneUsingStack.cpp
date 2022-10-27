#include <bits/stdc++.h>
using namespace std;
// quene in which deqeune take order n time / enquene take order 1 time
class quene1
{
public:
    stack<int> s1, s2;
    void enquene(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    void dequene()
    {
        if (s1.empty())
        {
            cout << "Quene Has no element to remove" << endl;
            return;
        }
        int x=s1.top();
        s1.pop();
        cout<<x<<endl;
    }
};
// quene in which deqeune take order 1 time / enquene take order n time
class quene2
{
public:
    stack<int> s1, s2;
    void enquene(int x)
    {
        s1.push(x);
    }
    void dequene()
    {
        if (!s1.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        else
        {
            cout << "Quene Has no element to remove" << endl;
        }
    }
};
//Driver code
int main()
{
    quene1 q1;
    q1.enquene(23);
    q1.enquene(25);
    q1.enquene(87);
    q1.dequene();
    q1.dequene();
    q1.dequene();
    q1.dequene();
    q1.dequene();
    q1.enquene(30);
    return 0;
}