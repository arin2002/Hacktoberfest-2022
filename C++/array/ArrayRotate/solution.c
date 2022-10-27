#include <stdio.h>
int leftrotate(int arr[],int n);
int rotate(int arr[], int d,int n);
int display(int arr[], int n);

int main()
{
    int arr[100],i,n=0,d=0,arrNum;
    
    printf("no of array");
    scanf("%d",&arrNum); 
    while( arrNum!=0){

    scanf("%d",&n);
    scanf("%d",&d);

    arr[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    
    rotate(arr,n,d);
    display(arr,n);}
    
    return 0;
}
int rotate(int arr[],int n, int d)
{
    for(int i=0;i<d;i++)
    {
    leftrotate(arr,n);
    }

}
int leftrotate(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
     arr[i]=arr[i+1];
    }
     arr[n-1]=temp;
    
}
int display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
     printf("%d ",arr[i]);
    }
}
