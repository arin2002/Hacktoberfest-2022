//problem link
//https://leetcode.com/problems/trapping-rain-water/

#include <bits/stdc++.h>
using namespace std;

int findWater(int arr[], int n)
{
	int res = 0;
	int lmax[n] ,rmax[n];
	lmax[0] = arr[0];
	for(int i=1;i<n;i++){
	    lmax[i] = max(arr[i],lmax[i-1]);
	}
	rmax[n-1] = arr[n-1];
	for(int i=n-1;i>=0;i--){
	    rmax[i] = max(arr[i],rmax[i+1]);
	}
	
	for(int i=0;i<n;i++){
	    res = res + (min(lmax[i],rmax[i])-arr[i]);
	}
	return res;
}


int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findWater(arr, n);
	return 0;
}

