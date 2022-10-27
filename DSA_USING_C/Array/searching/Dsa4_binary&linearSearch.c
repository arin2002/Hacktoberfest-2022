#include <stdio.h>

int main(){
    int arr[10],i,flag,loc,item,j;
    printf("Enter the Values in array \n");
    for(i=0;i<10;i++){
        printf("Enter the value in %d index - ",i);
        scanf("%d",&arr[i]);
    }

    printf("Linear search\n");
    printf("Enter the Number to find it in the array :- ");
    scanf("%d",&item);
    for(i=0;i<10;i++){
        if(arr[i]==item){
            printf("Search is Successful at  %d index\n",i);
            break;
        }
    }
    if(i==10){
        printf("Search is unsuccessful\n");
    }

    printf("Binary Search \n");
    printf("Enter The Number to find it in the array -  ");
    scanf("%d",&item);
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int mid,UB,LB,a;
    LB =0;
    UB =10;
    while (UB>=LB)
    {
        mid = (UB +LB)/2;
        if (arr[mid]==item)
        {
            printf("Search is successful at %d index \n",mid);
            a=1;
            break;

        }
        else if (arr[mid]>item)
        {
            UB = mid-1;
        }
        else if(arr[mid]<item){
            LB = mid +1;
        } 
    }
    
}