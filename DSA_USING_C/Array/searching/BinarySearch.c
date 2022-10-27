#include <stdio.h>
void BinarySearch(int * arr,int size , int item,int UB,int LB);
void addElementToArray(int * arr,int size);
void DisplayArray(int *arr,int size);

int main(){
    int size,item;
    printf("Enter The size of Array :- ");
    scanf("%d",&size);
    int arr[size];
    int LB=0;
    int UB = size-1;
    addElementToArray(arr,size); // funciton to add the Elements to the Array
    DisplayArray(arr,size);
    printf("Enter The Element to find in Array:- ");
    scanf("%d",&item);
    BinarySearch(arr,size,item,UB,LB);
}


void addElementToArray(int * arr,int size){
    int i;
    printf("Enter The elements in Array :- \n"); 
    for(i=0;i<size;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void DisplayArray(int * arr,int size){
    int i;
    printf("Array = \n[");
    for(i=0;i<size;i++){
        printf(" %d ,",arr[i]);
    }
    printf("]\n");
}
void BinarySearch(int * arr,int size , int item,int UB,int LB){
    int mid;
    if(UB>LB){
        mid = (UB +LB-1)/2;
        if(arr[mid] == item){
            printf("Search Done at %d index",mid);
        }
        else if(arr[mid]>item){
            UB = mid-1;
            BinarySearch(arr, size, item , UB,LB);
        }
        else {
            LB = mid +1;
            BinarySearch(arr, size, item , UB,LB);
        }

    }
    else{
        printf("Search Unsuccessful");
    }

}