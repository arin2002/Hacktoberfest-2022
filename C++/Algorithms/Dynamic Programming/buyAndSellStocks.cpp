#include <bits/stdc++.h>
using namespace std;
int maximum(int a, int b)
{
    return a > b ? a : b;
}
// Buy and Sell Stocks Type 1: only one transaction allowed!
void maxProfit_1Transaction(int arr[], int n)
{
    int least = arr[0];
    int dp[n]; // contains maximum profit for each day (dp[i] = max profit if stocks are sold at day i)
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > least)
            dp[i] = arr[i] - least;
        else
        {
            dp[i] = 0;
            least = arr[i];
        }
    }
    int max = dp[0];
    for (int i = 1; i < n; i++)
    {
        if (dp[i] > max)
        {
            max = dp[i];
        }
    }
    cout << max << "\n";
}
void maxProfit_1TransactionSpaceOptimised(int prices[], int n)
{
    int leastSoFar = INT_MAX;
    int profitIfSoldToday = 0;
    int maxPossibleProfit = 0;

    for (int i = 0; i < n; i++)
    {
        if (prices[i] < leastSoFar)
        {
            profitIfSoldToday = 0;
            leastSoFar = prices[i];
        }
        else
        {
            profitIfSoldToday = prices[i] - leastSoFar;
        }

        maxPossibleProfit = max(maxPossibleProfit, profitIfSoldToday);
    }
    cout << maxPossibleProfit << "\n";
}

// Type 2: Infinte Transactions allowed but without overlapping i.e Buy Sell Buy Sell is allowed but (Buy Buy Sell Sell) or (Buy Sell Sell) etc are not allowed
void infiniteTransaction(int arr[], int n)
{
    // logic : add all the upstrokes in graph
    int least = arr[0];
    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        // condition of dip
        if (arr[i] < arr[i - 1])
        {
            profit += arr[i - 1] - least;
            least = arr[i];
        }
    }
    if (arr[n - 1] > least)
    {
        profit += arr[n - 1] - least;
    }
    cout << profit << "\n";
}

// Type 3: Buy and Sell stocks with Transaction Fee - Infinte Transactions allowed but no overelapping
void withTransactionFee(int arr[], int n, int fee)
{
    int obsp = -arr[0]; // (old)buying state profit
    int ossp = 0;       // (old) selling state profit

    for (int i = 1; i < n; i++)
    {
        int nbsp = ossp - arr[i];       //(new) buying state profit
        int nssp = obsp + arr[i] - fee; // (new) selling state profit

        if (nbsp < obsp)
            nbsp = obsp;
        if (nssp < ossp)
            nssp = ossp;

        obsp = nbsp;
        ossp = nssp;
    }
    cout << ossp << "\n";
}

// Type 4: Buy and Sell stocks with cooldown period of 1 day and infinite transaction; no overlapping and no fees
//  cooldown means after a transaction you have to wait for at least one day to carry out another transaction

void withCoolDown(int arr[], int n)
{
    int obsp = -arr[0];
    int ossp = 0;
    int ocsp = 0;

    for (int i = 1; i < n; i++)
    {
        int nbsp = ocsp - arr[i];
        if (nbsp < obsp)
            nbsp = obsp;

        int nssp = arr[i] + obsp;
        if (nssp < ossp)
            nssp = ossp;

        int ncsp = ossp;
        if (ncsp < ocsp)
            ncsp = ocsp;

        ossp = nssp;
        obsp = nbsp;
        ocsp = ncsp;
    }
    cout << ossp << "\n";
}

// Type 5: Atmost 2 transactions allowed!
void buySell2transactions(int arr[], int n)
{
    int maxProfitIfSoldToday = 0;
    int leastSoFar = arr[0];
    vector<int> dpmaxProfitUptoToday(n, 0);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < leastSoFar)
        {
            leastSoFar = arr[i];
        }
        maxProfitIfSoldToday = arr[i] - leastSoFar;
        dpmaxProfitUptoToday[i] = max(maxProfitIfSoldToday, dpmaxProfitUptoToday[i - 1]);
    }

    int maxProfiIfBoughtToday = 0;
    int maxAfterToday = arr[n - 1];
    vector<int> dpmaxProfitonTheRight(n, 0); // max profit if bought today or any day after today till last day

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxAfterToday)
        {
            maxAfterToday = arr[i];
        }
        maxProfiIfBoughtToday = maxAfterToday - arr[i];
        dpmaxProfitonTheRight[i] = max(maxProfiIfBoughtToday, dpmaxProfitonTheRight[i + 1]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = dpmaxProfitonTheRight[i] + dpmaxProfitUptoToday[i];
        ans = max(sum, ans);
    }
    cout << ans << "\n";
}

// Type 6: Atmost k transactions allowed!!
void k_transactions(int arr[], int n, int k)
{
    vector<vector<int>> dp(k + 1, vector<int>(n, 0));
    for (int transaction = 1; transaction <= k; transaction++)
    {
        for (int day = 1; day < n; day++)
        {
            int max = dp[transaction][day - 1];

            for (int pastDay = 0; pastDay < day; pastDay++)
            {
                // find profit if t-1 transaction done in any of the past day and 't'th transaction done on this day
                int profit = dp[transaction - 1][pastDay] + arr[day] - arr[pastDay];
                if (profit > max)
                {
                    max = profit;
                }
            }
            dp[transaction][day] = max;
        }
    }
    cout << dp[k][n - 1] << "\n";
    // time complexity : O(n³)
}

void k_transactionsOptimised(int arr[], int n, int k)
{
    vector<vector<int>> dp(k + 1, vector<int>(n, 0));
    for (int t = 1; t <= k; t++)
    {
        int max = INT_MIN;
        for (int d = 1; d < n; d++)
        {
            max = maximum(dp[t - 1][d - 1] - arr[d - 1], max);

            if (max + arr[d] > dp[t][d - 1])
            {
                dp[t][d] = max + arr[d];
            }
            else
            {
                dp[t][d] = dp[t][d-1];
            }
        }
    }
    cout<<dp[k][n-1]<<"\n";
}
int main()
{
    int n = 9;
    int arr[n] = {11, 6, 7, 19, 4, 1, 6, 18, 4};
    maxProfit_1Transaction(arr, n);
    maxProfit_1TransactionSpaceOptimised(arr, n);
    infiniteTransaction(arr, n);
    buySell2transactions(arr, n);
    int k = 4;
    k_transactions(arr, n, k);
    k_transactionsOptimised(arr,n,k);
    return 0;
}