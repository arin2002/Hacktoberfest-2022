#include <iostream>
#include <cmath>
#include <limits.h>
#include <math.h>
//#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    const int N=100;
    int idx[N];
    int minidx=INT_MAX;
    for(i=0;i<N;i++){
        idx[i]=-1;
    }
    for(i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx=min(idx[a[i]],minidx);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    return 0;
}
