#include <bits/stdc++.h>
using namespace std;

// memoization
int funcMemo(vector<int> &nums, int index, vector<int> &dp)
{
    if (index == 0)
        return nums[0];
    if (index < 0)
        return 0;
    if (dp[index] != -1)
        return dp[index];

    int take = nums[index] + funcMemo(nums, index - 2, dp);
    int notTake = funcMemo(nums, index - 1, dp);

    return dp[index] = max(take, notTake);
}

// tabulation 
int maximumNonAdjacentSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        int take = nums[i];
        if (i - 2 >= 0)
            take += dp[i - 2];
        int notTake = dp[i - 1];
        dp[i] = max(take, notTake);
    }
    return dp[n - 1];
}

// space optimisation
int funcSO(int arr[],int n){
    int inc = arr[0];
    int exc = 0;
    for (int i = 1; i < n; i++)
    {
        int ninc = exc + arr[i];
        int nexc = max(inc, exc);

        inc = ninc;
        exc = nexc;
    }
    return max(inc, exc);
}

int main()
{
    int n = 6;
    int arr[] = {5, 10, 100, 10, 6, 20};
    int ans = funcSO(arr,n);
    cout << ans << "\n";
}