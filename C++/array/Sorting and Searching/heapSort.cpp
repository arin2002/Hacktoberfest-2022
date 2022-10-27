// Heapsort using Heapify Method (CPP)
// It is similar to Selection Sort where we first find the
// maximum element and place it at the end.

#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest= i;// Largest to be root initially
    int left= 2*i +1;
    int right= 2*i+2;
    // left child> largest
    // largest changes
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    // right child > largest
    // largest changes
    if(right<n && arr[right]> arr[largest]){
        largest=right;
    }
    // largest if changed along the way then
    // swap root and largest
    if(largest!=i){
        swap(arr[i],arr[largest]);
        // until the condition is satisfied
        // loop runs recursively
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    // heapify method doesn't rearrange leaf nodes
    // as half of the nodes of a tree nodes are leaf nodes
    // we can avoid traversing those
    for(int i=n/2 -1;i>=0;i--){
        heapify(arr,n,i);
    }

    // for max heapify
    for (int i=n-1;i >=0;i--){
        // move the current root to end
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void print(int arr[],int n){
    cout<<"|";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" |";
    }
}

int main(){
    int arr[]= {22,21,23,15,16,17};
    int n= sizeof(arr)/ sizeof(arr[0]);
    heapSort(arr,n);
    cout<<"\nSorted via heapSort \n";
    print(arr,n);
    return 0;
}

// Sorted via heapSort =>|15 |16 |17 |21 |22 |23 |