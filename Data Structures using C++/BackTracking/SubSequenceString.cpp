#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &ans, int index, string s, string output)
{
    if (index >= s.length())
    {
        // if(output.length()>0){  //if space is not considered as a subsequence
        ans.push_back(output);
        // }
        return;
    }
    solve(ans, index + 1, s, output);

    char element = s[index];
    output.push_back(element);
    solve(ans, index + 1, s, output);
}

vector<string> Sub(string s)
{

    string output = "";
    vector<string> ans;
    int index = 0;
    solve(ans, index, s, output);
    return ans;
}
int main()
{
    string s;
    s = "abc";

    vector<string> t = Sub(s);
    sort(t.begin(), t.end());
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << ",";
    }
}