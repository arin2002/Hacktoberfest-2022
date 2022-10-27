# include <stdio.h>

int main(){
    int arr[10],i,n=10,j,temp;          // taking array
    for(i=0;i<n;i++){                   // with for loop
        printf("Enter the value at %d index :-  ",i); // insert the values into the array
        scanf("%d",&arr[i]);                
    }
    printf("Unsorted array \n");
    for(i=0;i<n;i++){                   // printing unsorted array
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=0;i<n-1;i++){
        for(j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    printf("sorted array \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}