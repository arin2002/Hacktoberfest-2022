#include <bits/stdc++.h>
using namespace std;

int min_square(int m)
{

    int DP[m + 1];
    //base value
    for (int i = 1; i <= m; i++)
        DP[i] = i;
    DP[0] = 0;

    //create the array of squares to be used to sum
    vector<int> a;
    for (int i = 1;; i++) {
        if (i * i <= m)
            a.push_back(i * i);
        else
            break;
    }
    int n = a.size();
    for (int i = 1; i <= m; i++) { //iterate for the numbers
        for (int j = 0; j < n; j++) { //iterate on the squares
            if (i >= a[j] && DP[i - a[j]] + 1 < DP[i])
                DP[i] = DP[i - a[j]] + 1;
        }
    }

    //result
    return DP[m];
}

int main()
{
    int n, item, m;

    cout << "Enter the number\n";
    cin >> n;

    int ans = min_square(n);
    cout << "Minimum number of squares needed: " << ans << endl;

    return 0;
}