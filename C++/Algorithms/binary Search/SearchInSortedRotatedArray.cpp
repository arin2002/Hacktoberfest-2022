#include<iostream>
using namespace std;

int main(){
    int arr[]={30,40,50,10,20};
    int k=10;
    int left=0,right=4;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==k){
            ans=mid;
            break;
        }
        if(arr[left]<arr[mid]){
            if(k>arr[left] && k<arr[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else if(k>arr[mid] && k<arr[right]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout<<ans;
    return 0;
}