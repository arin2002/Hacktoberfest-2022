#include <stdio.h>

int main(){
    int arr1[50],arr2[50],arr3[50],i,j,k;
    int n1,n2;
    printf("Enter the size of the first array :- ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        printf("Enter the element at %d index:- ",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n1-1-i;j++){
            if(arr1[j]>=arr1[j+1]){
                int temp = arr1[j];
                arr1[j] =arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Enter the size of the second array:- ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++){
        printf("Enter the element at %d index:- ",i);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n2;i++){
        for(j=0;j<n2-1-i;j++){
            if(arr2[j]>=arr2[j+1]){
                int temp = arr2[j];
                arr2[j] =arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    for(i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    

    for(i=0,j=0,k=0;i<=(n1-1)&&j<=(n2-1);k++){
        if(arr1[i]<=arr2[j]){
            arr3[k]=arr1[i++];
        }
        else{
            arr3[k]=arr2[j++];
        }

    }
    while (i<=(n1-1))
    {
        arr3[k++] = arr1[i++];
    }
    while (j<=(n2-1))
    {
        arr3[k++] = arr2[j++];
    }
    
    printf("The final array is : \n");
    for(i=0;i<(n1+n2);i++){
        printf("%d ",arr3[i]);
    }

}