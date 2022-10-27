// problem statement : given an integer n, count the no.of binary strings of length n with no consecutive zeroes
#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int oldCount0 = 1;
    int oldCount1 = 1;

    for (int i = 2; i <= n; i++)
    {
        int newCount0 = oldCount1;
        int newCount1 = oldCount0 + oldCount1;

        oldCount0 = newCount0;
        oldCount1 = newCount1;
    }
    cout << oldCount0 + oldCount1 << "\n";
}
vector<string> getStrings(int n)
{
   vector<string>ans;
   return ans;
}
void print(vector<string>v){
    for(auto val : v){
        cout<<val<<" ";
    }cout<<"\n";
}
int main()
{
    solve(4);
    return 0;
}