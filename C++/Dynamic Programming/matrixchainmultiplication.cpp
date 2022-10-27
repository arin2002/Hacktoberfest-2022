#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
 

int matrixChainMemoised(int* p, int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(
            dp[i][j], matrixChainMemoised(p, i, k)
                     + matrixChainMemoised(p, k + 1, j)
                       + p[i - 1] * p[k] * p[j]);
    }
    return dp[i][j];
}
int MatrixChainOrder(int* p, int n)
{
    int i = 1, j = n - 1;
    return matrixChainMemoised(p, i, j);
}
 

int main()
{
    int n;
    cout<<"\nEnter the number of elements ";
    cin>>n;
    cout<<"\nEnter the elements \n";
    int arr[n]; 
    for(int i=0;i<n;i++)
    cin>>arr[i];
    memset(dp, -1, sizeof dp);
 
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, n);
}

