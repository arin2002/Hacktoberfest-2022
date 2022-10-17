#include<bits/stdc++.h>
using namespace std;

void waveSort(int a[],int n){
    for(int i=1;i<n;i=i+2){
        if(a[i]>a[i-1]) swap(a[i],a[i-1]);
        if(a[i]>a[i+1] && i<n-1) swap(a[i],a[i+1]);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    waveSort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}