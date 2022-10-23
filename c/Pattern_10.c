/*      1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7               */


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
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}