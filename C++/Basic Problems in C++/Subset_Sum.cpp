#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> arr, int n, int sum)
{
    //DP matrix
    bool dp[n + 1][sum + 1];

    memset(dp, false, sizeof(dp));

    //base case
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
	
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
	
    //build the table
    for (int i = 1; i <= sum; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= arr[j - 1])
                dp[j][i] = dp[j - 1][i] | dp[j - 1][i - arr[j - 1]];
            else
                dp[j][i] = dp[j - 1][i];

            if (i == sum) {
                if (dp[j][i]) {

                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int t, n, k, item;
	
    cout << "Enter array length,n\n";
    cin >> n;
	
    cout << "Enter sum,K\n";
    cin >> k;
	
    cout << "Enter elements\n";
    vector<int> a;
    for (int j = 0; j < n; j++) {
        scanf("%d", &item);
        a.push_back(item);
    }

    if (subsetSum(a, n, k))
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}