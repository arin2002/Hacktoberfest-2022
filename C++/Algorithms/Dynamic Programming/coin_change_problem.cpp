#include <iostream>
using namespace std;

const int N = 1e2;
int dp[N][N]; // Initialising the 2D dp array

// n = number of denominations of coins
int coinChange(int arr[], int n, int sum)
{

    if (sum == 0) // There is only one way of choosing sum 0, choosing nothing !
        return 1;
    if (sum < 0)
        return 0; // Not possible so returning zero
    if (n <= 0)
        return 0;
    if (dp[n][sum] != -1)
        return dp[n][sum]; // If we have calculated answer before, use it
    dp[n][sum] = coinChange(arr, n, sum - arr[n - 1]) + coinChange(arr, n - 1, sum);
    // For every coin we see its previous answer, adding the case if we take the coin or not take it
    return dp[n][sum];
}

int main()
{
    // Setting the 2D array to -1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j] = -1;
        }
    }

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Taking input of coins' denomination
    int sum;
    cin >> sum;
    // Total coins sum that is allowed
    cout << coinChange(arr, n, sum);
    // Function call
    return 0;
}