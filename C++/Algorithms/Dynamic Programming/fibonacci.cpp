#include<bits/stdc++.h>
using namespace std;
//method 1: normal recursion
int fib(int n){
    if(n == 0  || n == 1){
        return n;
    }
    // cout<<"Hello "<<n<<"\n";
    return fib(n-1) + fib(n-2);
}
//method 2: using memoizaton
int fibMemoized(int n, int dp[]){
    if(n == 0 || n == 1){
        return n;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    // cout<<"Hello "<<n<<"\n";
    int fibnm1 = fibMemoized(n-1,dp);
    int fibnm2 = fibMemoized(n-2,dp);
    int fibn = fibnm1 + fibnm2;
    dp[n] = fibn;
    return fibn;
}
//method 3: using tabulation
int fibTab(int n){
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
//method 4 : Space optimization
int fibSo(int n){
    if(n <= 1){
        return n;
    }
    int prev2 = 0;
    int prev = 1;
    int curr;
    for(int i=2; i<=n ; i++){
       curr = prev + prev2;
       prev2 = prev;
       prev = curr;
    }
    return curr;
}
int main(){
    int n;
    n = 10;
    int dp[n+1] = {0};
    cout<<"Using recursive function without memoization\n";
    cout<<fib(n)<<"\n";
    cout<<"Using memoization\n";
    cout<<fibMemoized(n,dp)<<"\n";
    cout<<"using tabulation: "<<fibTab(n)<<"\n";
    cout<<"Space Optimisation\n";
    cout<<fibSo(10)<<"\n";
    return 0;
}