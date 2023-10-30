#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = { -3, 2, -1, 4, -5 };
    int n = sizeof(arr) / sizeof(int);

    int x = arr[0];
    int maxSum = x;

    for (int i = 1; i <= n - 1; i++) {
        x = max(x + arr[i], arr[i]);
        maxSum = max(maxSum, x);
    }

    cout << "Maximum sum of a subarray: " << maxSum << endl;

    return 0;
}
