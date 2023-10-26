/*
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
*/

/* Example - 1
Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
*/


//Time Complexity : O(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int small=a[0]+k;
    int big = a[n-1]-k;
    int ans=a[n-1]-a[0];
    int mn,mx;
    for(i=0;i<n-1;i++)
    {
        mn=min(small,a[i+1]-k);
        mx=max(big,a[i]+k);
        if(mn<0)
            continue;
        else
            ans=min(ans,mx-mn);
    }
    cout<<ans;
    return(0);
}