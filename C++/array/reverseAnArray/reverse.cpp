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
void reverseArray(int *arr,int n){
    int start =0;
    int end=n-1;
 while (start<=end)
 {
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
 }
 
    
}

int main(){
    int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
int arr[100];
cout<<"enter elements in array:";
inputArray(arr,n);
cout<<"array before reverse:";
printArray(arr,n);
cout<<endl;
cout<<"Array after reverse:";
reverseArray(arr,n);
printArray(arr,n);

return 0;
}