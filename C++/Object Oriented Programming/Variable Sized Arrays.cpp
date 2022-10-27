#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,q,k,n1,n2;
    cin>>n>>q;
    vector<vector <int> > vec1;
    for(int i=0;i<n;i++)
    {
    cin>>k;
    vector <int> vec2;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
           vec2.push_back(a);
        }
        vec1.push_back(vec2);
    }
    for(int k=1;k<=q;k++)
    {
        cin>>n1>>n2;
        cout<<vec1[n1][n2]<<endl;
    }
    return 0;
}

