// A recursive C++ program for partition problem
#include <bits/stdc++.h>
using namespace std;

// A utility function that returns true if there is
// a subset of arr[] with sun equal to given sum
bool isSubsetSum(int arr[], int n, int sum,
				vector<vector<int> >& dp)
{
	// Base Cases
	if (sum == 0)
		return true;
	if (n == 0 && sum != 0)
		return false;

	// return solved subproblem
	if (dp[n][sum] != -1) {
		return dp[n][sum];
	}

	// If last element is greater than sum, then
	// ignore it
	if (arr[n - 1] > sum)
		return isSubsetSum(arr, n - 1, sum, dp);

	/* else, check if sum can be obtained by any of
		the following
		(a) including the last element
		(b) excluding the last element
	*/
	// also store the subproblem in dp matrix
	return dp[n][sum]
		= isSubsetSum(arr, n - 1, sum, dp)
			|| isSubsetSum(arr, n - 1, sum - arr[n - 1],
							dp);
}

// Returns true if arr[] can be partitioned in two
// subsets of equal sum, otherwise false
bool findPartiion(int arr[], int n)
{
	// Calculate sum of the elements in array
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	// If sum is odd, there cannot be two subsets
	// with equal sum
	if (sum % 2 != 0)
		return false;

	// To store overlapping subproblems
	vector<vector<int> > dp(n + 1,
							vector<int>(sum + 1, -1));

	// Find if there is subset with sum equal to
	// half of total sum
	return isSubsetSum(arr, n, sum / 2, dp);
}

// Driver code
int main()
{
	int arr[] = { 3, 1, 5, 9, 12 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	if (findPartiion(arr, n) == true)
		cout << "Can be divided into two subsets "
				"of equal sum";
	else
		cout << "Can not be divided into two subsets"
				" of equal sum";

	int arr2[] = { 3, 1, 5, 9, 14 };
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	if (findPartiion(arr2, n2) == true)
		cout << endl
			<< "Can be divided into two subsets "
				"of equal sum";
	else
		cout << endl
			<< "Can not be divided into two subsets"
				" of equal sum";
	return 0;
}
