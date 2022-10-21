#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)

template <typename LL>
ostream& operator<<(ostream& out, vector<LL> &arr){
    size_t n=arr.size();
    cout<<'[';
    for(size_t i=0;i<n;i++)
        out<<arr[i]<<',';
    cout<<"null]";
    return out;
}

template <typename LL>
istream& operator>>(istream& in, vector<LL> &arr){
    size_t n=arr.size();
    for(size_t i=0;i<n;i++)
        in>>arr[i];
    return in;
}

int naiveSolve(vector<int> arr){    //O(n^2)    O(1)
    int n=arr.size(), ans=0, k=0;
    for(int i=0; i<n-1; i=k){
        k=i+1;
        int sum=0, actualSum=0;
        for(int j=i+1; j<n; j++){
            if(arr[k]<arr[j]){
                k = j;
                actualSum=sum;
            }
            if(arr[k]>=arr[i])  break;
            sum+=arr[j];
        }
        ans+=(k-i-1)*min(arr[i], arr[k]) - actualSum;
    }
    return ans;
}

#define max(a, b) (a>b?a:b)
#define min(a, b) (a<b?a:b)

int solve(vector<int> arr){ //O(n) O(n)
    int n=arr.size(), ans=0;
    vector<int> lmax(n), rmax(n);
    int LMAX=0, RMAX=0;
    for(int i=0; i<n; i++)  LMAX=lmax[i]=max(arr[i], LMAX);
    for(int i=n-1; i>=0; i--)  RMAX=rmax[i]=max(arr[i], RMAX);
    for(int i=0; i<n; i++)  ans+=min(lmax[i], rmax[i])-arr[i];
    return ans;
}

int main(){
    fastIO;
    int n=0;    cin>>n;
    vector<int> arr(n);
    cin>>arr;
    cout<<"Naive Solution:"<<naiveSolve(arr)<<'\n';
    cout<<"Final Solution:"<<solve(arr)<<'\n';
    return 0;
}