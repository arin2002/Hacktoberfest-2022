// NPTEL ASSIGNMENT
// WEEK 3: PROGRAMMING ASSIGNMENT: WEALTH DISPARITY


#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

void sort(map<string, int>& M)
{
    vector<pair<string, int> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
  
    sort(A.begin(), A.end(), cmp);
  
    stack<string> v;
    
    for (auto& it : A) {
        v.push(it.first);
    }
    cout<<v.top()<<endl;
}

int main()
{
    int n;
    cin>>n;
    map<char,char> m;
    m['a'] = '2';m['b'] = '2';m['c'] = '2';
    m['d'] = '3';m['e'] = '3';m['f'] = '3';
    m['g'] = '4';m['h'] = '4';m['i'] = '4';
    m['j'] = '5';m['k'] = '5';m['l'] = '5';
    m['m'] = '6';m['n'] = '6';m['o'] = '6';
    m['p'] = '7';m['q'] = '7';m['r'] = '7';m['s'] = '7';
    m['t'] = '8';m['u'] = '8';m['v'] = '8';
    m['w'] = '9';m['x'] = '9';m['y'] = '9';m['z'] = '9';

    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    map<string,int> ab;
    for(int i=0;i<n;i++){
        string qw = str[i];
        string ans;
        for(int j=0;j<str[i].length();j++){
            ans = ans + m[qw[j]];
        }
        ab[ans]++;
    }
    sort(ab);
    return 0;
}