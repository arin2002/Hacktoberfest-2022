#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }

    cout << "Elements in unordered set: ";
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
    {
        cout << n << " is present" << endl;
    }

    s.erase(s.begin());
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}