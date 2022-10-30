// In simple terms, a suffix array is just a sorted array of all the suffixes of a given string.

// 0.  abaab 
// 1.  baab 
// 2.  aab 
// 3.  ab 
// 4.  b

// after sorting 

// 2.  aab 
// 3.  ab 
// 0.  abaab 
// 4.  b 
// 1.  baab

#ifndef ONLINE_JUDGE
#include "debug.hpp"
#else
#define debug(...)
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ve vector<int>
#define vell vector<ll>
#define vpp vector<pair<int, int>>
#define ump unordered_map<int, int>
#define rep1(i, a, b) for (int i = a; i < (b); i++)
#define rep(i, n) for (int i = 0; i < (n); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, n) for (int i = (n)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define asort(a) sort(a, a + n)
#define all(x) (x).begin(), (x).end()
#define uniq(v) v.erase(unique(all(v)), (v).end())
#define vmax(v) *max_element(v.begin(), v.end());
#define vmin(v) *min_element(v.begin(), v.end());
const ll INF = 1e18 + 10;
const int mod = 1e9 + 7; // 998244353;
void solve()
{
    string s;
    map<string, int> m;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < s.size(); i++)
    {
        m[s.substr(i, s.size() - i)] = i;
        v.push_back(s.substr(i, s.size() - i));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << m[v[i]] << endl;
    }
}
int main()
{

    (ios_base::sync_with_stdio(false), cin.tie(NULL));
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
