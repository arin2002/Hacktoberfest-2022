//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4 


#include<stdio.h>
int main()
{
    int i,j,k,rows;

    printf("Enter Number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}