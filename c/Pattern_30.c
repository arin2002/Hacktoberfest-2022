// 1
// 3 * 2
// 4 * 5 * 6
// 10* 9 * 8 * 7
// 11* 12* 13* 14* 15 

#include<stdio.h>
int main()
{
    int i,j,flag,k=0,p;

    for(i=1;i<=5;i++)
    {
        if(i%2==1)                          // Odd Number Condition
        {
            k=k+1;
        }
        else
        {
            k--;
            k=k+i;
        }
        
        flag=1;
        p=k;

        for(j=1;j<=9;j++)
        {
            if(j<=2*i-1)
            {
                if(flag==1)
                {
                printf("%2d",p);                            // Consume atleast 2 character spaces 
                if (i%2==1)
                {
                    p++;
                    k++;
                }
                else
                {
                    p--;
                }
                
                }
                else
                {
                    printf(" *");
                }
                flag=1-flag;                    // Here we are changing value of flag by 0 and 1
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}