#include<bits/stdc++.h>
using namespace std;
 
int countNoOfChanges( int C[], int m, int n )
{
    int i, j, x, y;
 
    //using bottom-up approach with base case (n=0)
     int dp[n + 1][m];
     
    // filling elements where  n=0
    for (i = 0; i < m; i++)
        dp[0][i] = 1;
 
   // filling other elements
   for (i = 1; i < n + 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            // Counting the solutions
            x = (i-C[j] >= 0) ? dp[i - C[j]][j] : 0;
 
         
            y = (j >= 1) ? dp[i][j - 1] : 0;
 
            // total count
            dp[i][j] = x + y;
        }
    }
    return dp[n][m - 1];
}
 
 
/* Driver program to test above function */
int main()
{
    int arr[] = {2,3,5,6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 10;
    cout << "No of ways to make the change is :"<<countNoOfChanges(arr, m, n);
    return 0;
}
 
