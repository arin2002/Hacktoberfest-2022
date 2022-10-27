#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Use of malloc
    
    int *ptr;
    int i;
    
    ptr=(int*)malloc(3*sizeof(int));

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d of this array \n",i);
        scanf("%d",&ptr[i]);
    
    }
    for (int  i = 0; i < 4; i++)
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);
        
    }
    
    
    return 0;
}