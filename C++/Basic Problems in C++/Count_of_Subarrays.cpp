#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int subArray(vector<int> a, int n, int k)
{

    int dp[n][n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > k) {
            dp[i][i] = a[i];
            count++;
        }
        else
            dp[i][i] = -1; //or arr[i] itslef
    }

    for (int len = 2; len <= n; len++) {
        for (int start = 0; start <= n - len; start++) {
            int end = start + len - 1;
            if (a[end] > k || dp[start][end - 1] > k) {
                dp[start][end] = std::max(a[end], dp[start][end - 1]);
                count++;
            }
            else
                dp[start][end] = -1;
        }
    }

    return count;
}

int main()
{
    int n, item, k;

    cout << "Input size of array\n";
    cin >> n;
    
    cout << "Input k\n";
    cin >> k;
    
    cout << "Add the array elements\n";
    vector<int> a;
    
    for (int j = 0; j < n; j++) {
        scanf("%d", &item);
        a.push_back(item);
    }

    cout << "Total count of valid subarray is " << subArray(a, n, k) << endl;

    return 0;
}