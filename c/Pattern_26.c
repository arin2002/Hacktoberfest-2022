// 1
// 10
// 101
// 1010
// 10101
// 101010



#include<stdio.h>
int main()
{
    int i,j,k,rows;

    printf("Enter Number of Rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=1;                                // In every line we print 1
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=1-k;                          // We alternatively changing the value
        }
        printf("\n");
    }
}