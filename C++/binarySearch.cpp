// binary search code 

#include<iostream.h>
using namespace std;

int binarysearch(int arr[], int n, int k) {

        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k)
              return mid;
            else if(arr[mid]>k)
                high=mid-1;
            else
               low=mid+1;
        }
        return -1;

    }

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        int num;
        cin>> num;
        arr[i]=num;
    }
    cout<<"Enter key : ";
    int k;
    cin>>k;
    int f = binarysearch(arr,n,k);
    if(f==-1) cout<<k<<" not present in the given array."<<endl;
    else cout<<k <<" present at index "<<f<<"."<<endl;
    return 0;
}
