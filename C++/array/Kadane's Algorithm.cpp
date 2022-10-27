#include<bits/stdc++.h>
using namespace std;
  int maxSubarraySum(int arr[], int n){
        
        // Your code here
       int curr=0;
       int maxi=INT_MIN;
       for(int i=0;i<n;i++)
       {
           curr+=arr[i];
           maxi=max(curr,maxi);
           if(curr<0)
              curr=0;
           
       }
       return maxi;
        
    }  

    int main()

    {
	    int arr[5]={1,2,3,-2,5};
	    int sum=maxSubarraySum(arr,5);
	    cout<<sum;
	    return 0;
    }
