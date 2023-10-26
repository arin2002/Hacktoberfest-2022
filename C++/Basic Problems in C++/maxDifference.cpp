#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n)
{
	int res = arr[1] - arr[0],  minVal = arr[0];
	for (int j = 1; j < n; j++) {
		res = max(res, arr[j] - minVal);
		minVal = min(minVal, arr[j]);
	}
	return res;
}


int main()
{
	int arr[] = { 3,6,7,9,1,2,0,3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxDiff(arr, n);
	return 0;
}

