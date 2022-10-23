#include<iostream>
using namespace std;
int pathsTab(int n,int arr[]){
   int dp[n+1] = {0};
   dp[n] = 1;
   for(int i=n-1; i>=0; i--){
      for(int j = 1; j <= arr[i] && i+j<=n ; j++){
        dp[i] += dp[i+j];
      }
   }
   return dp[0];
}
int main(){
    return 0;
}