#include<stdio.h>

int main()
{
    int n,a[100],i,even=0,odd=0;

    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter elements of an array:\n");

    for(i=0;i<n;i++)
    {
        printf("Enter value at a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            odd++;
        }
    }
    
    printf("\nNumber of even and odd are %d and %d respectively",even,odd);

}