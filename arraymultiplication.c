#include<stdio.h>
int main()
{
    int i,j,row,column;
    int A[5][5],B[5][5],Res[5][5];
    
    // first matrix
    
    printf("Enter the number of rows ( less than 5 ) : ");
    scanf("%d",&row);
    printf("Enter number of columns ( less than 5 ) : ");
    scanf("%d",&column);
    
    // inserting elements in A[5][5]
    
    printf("Enter the elements : ");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            scanf("%d",&A[5][5]);
        }
    }
    
    // second matrix
    
    printf("Enter the number of rows ( less than 5 ) : ");
    scanf("%d",&row);
    printf("Enter number of columns ( less than 5 ) : ");
    scanf("%d",&column);
    
    // inserting elements in B[5][5]
    
    printf("Enter the elements : ");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            scanf("%d",&B[5][5]);
        }
    }
    
    // multiplication of matrix
   
    int k=(0,1);
    printf("multiplication of matix \n",Res[i][j]);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            Res[i][j]=0;
            for(k=0;k<column;k++)
            {
                Res[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    
    // printing result
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d \t",Res[i][j]);
        }
    printf("\n");
    }
    return 0;
}



