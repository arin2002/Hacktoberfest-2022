#include <bits/stdc++.h>
using namespace std;

int arr[3]={1, 3, 2};
int n = sizeof(arr)/sizeof(arr[0]);
vector<vector<int>> temp;

void getSubsets(int index, vector<int> v){
    if (index==n){
        for (auto i:v)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    getSubsets(index+1, v);  // not pick index
    v.push_back(arr[index]);
    getSubsets(index+1, v);  // pick index
}

int main()
{
    vector<int> v;
    getSubsets(0, v);
    // for (auto v:temp){
    //     for (auto i:v)
    //         cout<<i<<" ";
    //     cout<<endl;
    // }
    return 0;
}
