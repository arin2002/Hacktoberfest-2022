#include <bits/stdc++.h>
using namespace std;

/* maxSumIS() returns the maximum sum of increasing subsequence in arr[] of size n */
int maximumsumIncSubse(int arr[], int n)
{
	int i, j, max = 0;
	int dp[n];

	/* Initialize dp values
	for all indexes */
	for ( i = 0; i < n; i++ )
		dp[i] = arr[i];

	/* Compute maximum sum values
	in bottom up manner */
	for ( i = 1; i < n; i++ )
		for ( j = 0; j < i; j++ )
			if (arr[i] > arr[j] &&
				dp[i] < dp[j] + dp[i])
				dp[i] = dp[j] + arr[i];

	
	for ( i = 0; i < n; i++ )
		if ( max < dp[i] )
			max = dp[i];

	return max;
}


int main()
{
	int arr[] = {1, 101, 2, 3, 100, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Sum of maximum sum increasing "
			"subsequence is " << maximumsumIncSubse( arr, n ) << endl;
	return 0;
}
//Sum of maximum sum increasing subsequence is 106
// Time Complexity: O(n^2)
// Space Complexity O(n)  
//yashikajotwani12
