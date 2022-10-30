#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
 
const int N=1e7+5, M=175, Q=2e5+5, MOD=1e9+7, OO=0x3f3f3f3f;
const long double ESP=1e-8;
 


void build(vector<int>&a, vector<int>&t, int v, int vl, int vr){
    if(vl==vr) t[v]=a[vl];
    else{
        int vm=(vl+vr)/2;
        build(a,t,2*v,vl,vm);
        build(a,t,2*v+1,vm+1,vr);
        t[v]=t[2*v]+t[2*v+1];
    }
}


void update(vector<int>&t, int v, int vl, int vr, int pos, int newVal){
    if(vl==vr) t[v]=newVal;
    else{
        int vm=(vl+vr)/2;
        if(pos<=vm) update(t,2*v,vl,vm, pos, newVal);
        else update(t,2*v+1,vm+1,vr, pos, newVal);
        t[v]=t[2*v]+t[2*v+1];
    }
}


int get(vector<int>&t, int v, int vl, int vr, int l, int r){
    if(l>r) return 0;
    if(vl==l && vr==r) return t[v];
    int vm=(vl+vr)/2;
    return  get(t,2*v, vl, vm, l, min(r,vm))        + 
            get(t,2*v+1, vm+1, vr, max(l,vm+1) , r);
}


int main(){
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    int n;
    cin>>n;
    vector<int>arr(n);
	for(int& x : arr) cin>>x;
    vector<int>tree(4*n+1);
    build(arr,tree,1,0,n-1);
    int q;
    cin>>q;
    while(q--){
        int tp;
        cin>>tp;
        if(tp==1){
            int l,r;
            cin>>l>>r;
            l--,r--;
            cout<<get(tree,1,0,n-1,l,r)<<'\n';
        }
        else{
            int indx, newVal;
            cin>>indx>>newVal;
            indx--;
            update(tree,1,0,n-1,indx,newVal);
            arr[indx]=newVal;
        }
    }
    return 0;
}
