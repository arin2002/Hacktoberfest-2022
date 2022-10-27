#include <bits/stdc++.h>
using namespace std;

// tabulation
int frogJumpTab(int n, int height[], int k)
{
    int dp[n] = {0};
    for (int i = 1; i < n; i++)
    {
        int minSteps = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            if(i-j >= 0){
                int val = dp[i-j]+ abs(height[i] - height[i-j]);
                minSteps = min(minSteps,val);
            }
        }
        dp[i] = minSteps;
    }
    return dp[n - 1];
}

int main(){
    int arr[] = {30, 10, 60, 10, 60, 50,60,50,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout<<frogJumpTab(n,arr,k);
    return 0;
}