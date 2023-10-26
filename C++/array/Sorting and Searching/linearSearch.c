#include <stdio.h>

int main()
{
    int arr[100],x,n,i=0,pos=0,status=0;

    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the numbers of the array \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the number you want to find \n");
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            pos = i;
            status = 1;
            break;
        }
        else
        {
            status = 0;
        }
        
        
    }
    
    if (status == 1)
    {
        printf("Element Found in the array at %d position",pos + 1);
    }
    else
    {
        printf("Element Not Found in the array ");
    }
    

    return 0;
}