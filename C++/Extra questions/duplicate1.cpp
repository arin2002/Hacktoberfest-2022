#include<iostream>
using namespace std;
// time complexity O(n)
// space complexity O(1)
void print (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int duplicate(int arr[],int n){
    int res=1;// res no.of element in arary which has no duplicate
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
           arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[5]={1,4,2,2,3};
      int n=duplicate(arr,5);
      cout<<n<<endl;
   print(arr,n);

 return 0 ;
}