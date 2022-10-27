#include <stdio.h>

void addElementToArray(int * arr,int size);
void DisplayArray(int *arr,int size);
void LinearSearch(int *arr,int size,int item);
int main(){
    int size,item ;               // Size = size of array 
    printf("Enter The size of Array:- ");
    scanf("%d",&size);       
    int arr[size];
    addElementToArray(arr,size); // funciton to add the Elements to the Array
    DisplayArray(arr,size);
    printf("Enter The element to Find in Array:- ");
    scanf("%d",&item);
    LinearSearch(arr,size,item);
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
void LinearSearch(int *arr ,int size, int item){
    int i ;
    int loc=-1;
    for(i=0;i<size;i++){
        if(arr[i]==item){
            printf("Search Done Found at %d index",i);
            loc = i;
            break;
        }
    }
    if(loc == -1){
        printf("Search Unsuccessful");
    }
}