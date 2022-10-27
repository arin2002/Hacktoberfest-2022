#include <bits/stdc++.h>
using namespace std;
void paintHouse(vector<vector<long>> arr, int n, int k)
{
    long dp[n][k];
    int least = INT_MAX;
    int secondLeast = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = arr[0][i];
        if (arr[0][i] < least)
        {
            secondLeast = least;
            least = arr[0][i];
        }
        else if (arr[0][i] <= secondLeast)
        {
            secondLeast = arr[0][i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        int newLeast = INT_MAX;
        int newSecLeast = INT_MAX;
        for (int j = 0; j < k; j++)
        {
            if (least == dp[i - 1][j])
            {
                dp[i][j] = secondLeast + arr[i][j];
            }
            else
            {
                dp[i][j] = least + arr[i][j];
            }
            if (dp[i][j] < newLeast)
            {
                newSecLeast = newLeast;
                newLeast = dp[i][j];
            }
            else if (dp[i][j] <= newSecLeast)
            {
                newSecLeast = dp[i][j];
            }
        }
        least = newLeast;
        secondLeast = newSecLeast;
    }
    int ans = least;
    cout << ans << "\n";
}
int main()
{
    int n, k;
    cout << "Enter the number of houses: ";
    cin >> n;
    cout << "Enter the number of colours: ";
    cin >> k;
    vector<vector<long>> arr(n, vector<long>(k, 0));
    cout << "Enter the cost of all colors for each house: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }
    paintHouse(arr, n, k);
    return 0;
}