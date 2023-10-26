#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
typedef long long ll;
using namespace std;


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

int MOD = 1e9+7;
void solve(vector<int> arr,int n,int m){
	vector<vector<int>> dp(n,vector<int>(m+1,0));  
    if(arr[0]==0){
        rep(i,m+1)dp[0][i]=1;
    }else dp[0][arr[0]]=1;
	for(int i=1;i<n;i++){
        int x = arr[i];
        if(x==0){
            for(int j=1;j<=m;j++){
                for(int k:{j-1,j,j+1}){
                    if(k>=1&&k<=m)
                        (dp[i][j]+=dp[i-1][k])%=MOD;
                }
            }
        }else{
            for(int k:{x-1,x,x+1}){
                if(k>=1&&k<=m)
                    (dp[i][x]+=dp[i-1][k])%=MOD;
            }
        }
    }
    int ans=0;
    for(int j=1;j<=m;j++)(ans+=dp[n-1][j])%=MOD;
    cout<<ans<<endl;
}

int main()
{
    init_code();
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    rep(i,n)cin>>arr[i];
    solve(arr,n,m);
}