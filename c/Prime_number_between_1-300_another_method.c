#include<stdio.h>
int main()
{
    int n1,n2,i,j;

    printf("Enter first and last number:");
    scanf("%d %d",&n1,&n2);

    for(i=n1 + 1;i<=n2-1;i++)            /* Take n1=10 and n2=20   ==> n1+1=11 & n2-1=19 */     
    {                                   // So this will give range 
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            printf("%d\n",i);
        }

        
    }

}