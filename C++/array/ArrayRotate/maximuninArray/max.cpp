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

int maxinArray(int *arr,int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    
}
int main(){
 int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
int arr[100];
cout<<"enter elements in array:";
inputArray(arr,n);
cout<<"max element in array is "<<maxinArray(arr,n);
return 0;
}