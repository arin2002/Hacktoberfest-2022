//      1
//    1 2 1
//  1 2 3 2 1
// 1 2 3 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;                    // If j<4 then increment the k value by otherwise decrement k value by one 
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}