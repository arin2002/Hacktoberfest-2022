#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currSum;
    currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
    maxSum=max(maxSum,currSum);
    }
//    for(int i=1;i<=n;i++)    //for o(n2)
//    {
//        currSum[i]=currSum[i-1]+a[i-1];
//    }
//
//    for(int i=1;i<=n;i++){
//        int sum=0;
//        for(int j=0;j<i;j++){
//            sum=currSum[i]-currSum[j];
//            maxSum=max(maxSum,sum);
//        }
    //}
//    for(int i=0;i<n;i++)     //for o(n3)
//    {
//        for(int j=i;j<n;j++)
//        { int sum=0;
//            for(int k=i;k<=j;k++){
//                  sum+=a[k];
//            //cout<<a[k]<<" ";
//            }cout<<endl;
//            maxSum=max(maxSum,sum);
//        }
    cout<<maxSum<<endl;
    return 0;
}
