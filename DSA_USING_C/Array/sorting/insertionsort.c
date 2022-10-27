# include <stdio.h>

int main(){
    int arr[10],i,n=10,j,temp;
    for(i=0;i<n;i++){
        printf("Enter the value at %d index :-  ",i);
        scanf("%d",&arr[i]);
    }
    printf("unsorted list \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=1;i<n;i++){    // arr = [9|4,6,2,5]
        temp = arr[i];   // temp = 4
        j = i-1;         // j = 0
        while(j>=0 && arr[j]>temp){  // if j>=0-> true  and arr[j]=9 > 4
            arr[j+1] = arr[j];    //arr[1] = arr[0]     arr = [9,9,6,2,5]
            j--;        // j = -1
        }
        arr[j+1] = temp;  // arr[0] = temp = 4

    }
    printf("sorted list \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}