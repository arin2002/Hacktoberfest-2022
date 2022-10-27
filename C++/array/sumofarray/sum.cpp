#include<iostream>
using namespace std;
void inputArray(int*arr,int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}

int sumOfElements(int *arr,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}

int main(){

 int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
int arr[100];
cout<<"enter elements in array:";
inputArray(arr,n);
cout<<"sum of elements is:"<<sumOfElements(arr,n);

return 0;
}