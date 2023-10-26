/* There is a frog on the 1s step of an N stairs long staircase.The frog wants to reach the Nth stair.
Height[i] is the height of the (i+1)th stair. Frog jumps from the ith to jth stair, the energy lost in the jump is given by Hegiht[i-1] - height[j-1]. 
If the frog is on the ith staircase, he can jump either to (i+1)th stair or to (i+2)th stair. Your task is to find the minimum total energy used by the frog to reach from 1st stair to Nth stair
*/
#include <bits/stdc++.h>
using namespace std;

// recursive approach
int frogJumpRecursive(int ind, int heights[])
{
    if (ind == 0)
        return 0;
    if (ind == 1)
        return abs(heights[1] - heights[0]);
    int left = frogJumpRecursive(ind - 1, heights) + abs(heights[ind] - heights[ind - 1]);
    int right = frogJumpRecursive(ind - 2, heights) + abs(heights[ind] - heights[ind - 2]);
    return min(left, right);
}

// recursive approach with memoization ==> TC: O(N) , SC: O(N) + stack space of O(N)
int frogJumpMemo(int ind, int heights[], vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int left = frogJumpMemo(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
        right = frogJumpMemo(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    return dp[ind] = min(left, right);
}

// tabulation
int frogJumpTab(int n, int height[])
{
    int dp[n] = {0};
    dp[1] = abs(height[1]-height[0]);
    for(int i = 2; i < n; i++){
        int val1 = dp[i-1] + abs(height[i] - height[i-1]);
        int val2 = dp[i-2] + abs(height[i] - height[i-2]);
        dp[i] = min(val1,val2);
    }
    return dp[n-1];
}

// tabulation with space optimisation
int frogJumpSO(int n, int heights[]){
    int prev = 0;
    int secondPrev = 0;
    for(int i = 1; i < n; i++){
        int val1 = prev + abs(heights[i] - heights[i-1]);
        int val2 = INT_MAX;
        if(i > 1)
        val2 = secondPrev + abs(heights[i] - heights[i-2]);

        secondPrev = prev;
        prev = min(val1,val2);
    }
    return prev;
}


int main()
{
    int arr[6] = {30, 10, 60, 10, 60, 50};
    cout << frogJumpRecursive(5, arr)<<"\n";
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> dp(n, -1);
    cout<<frogJumpMemo(n-1,arr,dp)<<"\n";
    cout<<frogJumpTab(n,arr)<<"\n";
    cout<<frogJumpSO(n,arr)<<"\n";
    return 0;
}