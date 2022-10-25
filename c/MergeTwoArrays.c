#include<stdio.h>

int main(){
    int size1,size2,newsize;
    printf("Enter the size of 1st array \n");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the elements \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of 2nd array \n");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the elements \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    newsize=size1+size2;
   
    int arr[newsize];
    printf("The new array is \n");
    int j=0;
    for (int i = 0; i < size1; i++)arr[i]=arr1[i];
    for (int i = size1,j=0; i < newsize && j<size2; i++,j++)arr[i]=arr2[j];
    for (int i = 0; i < newsize; i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    
    
    
    
    
}