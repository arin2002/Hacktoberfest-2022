#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high  = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[10] = {0,0,1,0,1,0,1,2,0,1};
    int arr2[10] = {0,1,2,0,1,2,0,1,2,0};

    sortArray(arr2,10);
    printArray(arr2,10);
    

    return 0;
}
