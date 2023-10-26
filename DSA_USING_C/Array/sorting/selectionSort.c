#include <stdio.h>

int main(){
    int arr[10],i,n=10,j,temp;                             // inserting the values into the array
    for(i=0;i<n;i++){                                   
        printf("Enter the value at %d index :-  ",i);
        scanf("%d",&arr[i]);
    }
    printf("unsorted array \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=0;i<n-1;i++){
        int loc=-1;
        int min = arr[i];   
        for(j=i+1;j<n;j++){
            if (min > arr[j]){
                min = arr[j];
                loc = j;
            }
        }
        if(loc!=-1){
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;}
    }
    printf("sorted array \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}