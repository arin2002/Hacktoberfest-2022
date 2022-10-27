#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
typedef long long ll;
using namespace std;

int cnt=0;
void init_code(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D:/competitive/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D:/competitive/output.txt", "w", stdout);
#endif
    
}

int main()
{
    init_code();
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> arr(n);
    map<ll,ll> mp;
    map<ll,ll> mp2;
    vector<ll> arr2(m);
    rep(i,n){
    	cin>>arr[i];
    	mp[arr[i]]++;
    }
    rep(i,m){
		cin>>arr2[i];
		mp2[arr2[i]]++;
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());

    int i,j;
    i=j=0;
    while(i<n&&j<m){
    	if(abs(arr[i]-arr2[j])<=k){
    		cnt++;i++;j++;
    	}
    	else if(arr[i]<arr2[j])
    		i++;
    	else j++;
    }
    cout<<cnt<<endl;
 
}