#include <stdio.h>

int main()
{
    int arr[50],count[50];
    int i,j,n,c=0,k=0,large=0,l;

    
    printf("Enter the size of the array : ");
    scanf("%d", &n);

   
    printf("Enter the elements of array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           
            if(arr[i] == arr[j])
            {
                c++;
                count[k++]=c;
                break;
            }
        }
    }
    large=count[0];

for(i=1;i<n;++i)
{
if(count[i]>large)
{
    large=count[i];
    l=arr[i];
}

}


    printf("\n Number of duplicate elements found in the array = %d", c);
    printf("\n Most repeatd element is %d", l);
    return 0;
}




