#include<stdio.h>
main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the size of an array rows and col:");
    scanf("%d%d",&m,&n);
    printf("enter the array elements\n");
    for(i=0; i<m; i++)
    {
        for (j=0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        { 
            if(i==j)
            {
            printf("\t%d",a[i][j]);
           }
        } 
        printf("\n\t");
    }
}
//write a c program to find the sum of  primary diagonal element.