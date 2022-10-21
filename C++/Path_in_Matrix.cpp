#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[27][27];

//solve function.
ll solve(ll n)
{
    //declare cost dp state.
    ll cost[n][n];

    //first row will be same
    //as initial dp since we can
    //start from any column of first row.
    for (ll i = 0; i < n; i++)
        cost[0][i] = dp[0][i];

    //iterate through 2nd row to last row.
    for (ll i = 1; i < n; i++) {
        //iterate through all columns.
        for (ll j = 0; j < n; j++) {

            ll x, y, z;
            x = 0;
            y = 0;
            z = 0;

            //if we are reaching{i,j} from
            //{i-1,j} then check index condition.
            if ((i - 1) >= 0)
                x = cost[i - 1][j];

            //if we are reaching{i,j} from
            //{i-1,j-1} then check index condition.
            if ((i - 1) >= 0 and (j - 1) >= 0)
                y = cost[i - 1][j - 1];

            //if we are reaching{i,j} from
            //{i-1,j+1} then check index condition.
            if ((i - 1) >= 0 and (j + 1) < n)
                z = cost[i - 1][j + 1];

            //finally find the maximum cost.
            cost[i][j] = dp[i][j] + max(max(x, y), z);
        }
    }

    //initialize ans variable with 0.
    ll ans = 0;
    //iterate through last row.
    for (ll i = 0; i < n; i++)
        ans = max(ans, cost[n - 1][i]);

    //return final ans.
    return ans;
}

int main()
{
    ll t;

    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        cout << "Enter size of matrix: ";
        ll n;
        cin >> n;

        cout << "Enter elements:\n";
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                cin >> dp[i][j];

        //call solve function.
        ll ans = solve(n);
        cout << "Maximum Cost: ";
        cout << ans << "\n";
    }
 
    return 0;
}