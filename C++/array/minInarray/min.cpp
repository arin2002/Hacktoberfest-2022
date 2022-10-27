#include<iostream>
using namespace std;
void inputArray(int*arr,int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
void printArray(int*arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int mininArray(int *arr,int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
    
}
int main(){
 int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
int arr[100];
cout<<"enter elements in array:";
inputArray(arr,n);
cout<<"min element in array is "<<mininArray(arr,n);
return 0;
}