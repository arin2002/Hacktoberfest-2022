// C++ program to check if there is a subset
// with sum divisible by m.
#include <bits/stdc++.h>
using namespace std;

// Returns true if there is a subset
// of arr[] with sum divisible by m
bool helper(int N, int nums[], int sum, int idx, int m){
	// if we reach last index
	if(idx == N){
		// and if the sum mod m is zero
		if(sum && sum%m == 0){
			// return
			return true ;
		}
		return false ;
	}

	// 2 choices - to pick or to not pick
	bool picked = helper(N, nums, sum+nums[idx], idx+1,m) ;
	bool notPicked = helper(N, nums, sum,		 idx+1, m) ;

	return picked || notPicked ;
}

bool modularSum(int arr[], int n, int m)
{
	return helper(n, arr, 0, 0, m) ;
}

// Driver code
int main()
{
	int arr[] = {1, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = 5;

	modularSum(arr, n, m) ? cout << "YES\n" :
							cout << "NO\n";

	return 0;
}
