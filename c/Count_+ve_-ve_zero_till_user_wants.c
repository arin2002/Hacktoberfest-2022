#include<stdio.h>
int main()
{
    char c;
    int n,pos,neg,zero,count=0;

    pos=neg=zero=0;

    printf("Do you want to enter:");
    scanf("%c",&c);

    while(c=='Y'||c=='y')
    {
        printf("Enter a number:");
        scanf("%d",&n);

        if(n>0)
        {
            pos++;

        }
        else if(n<0)
        {
            neg++;
        }
        else if(n==0)
        {
            zero++;
        }

        fflush(stdin);          // clears standard input stream

        printf("Do you want to continue?\n");
        scanf("%c",&c);
        count++;
    
    }

    printf("\nPositive counts:%d\n",pos);
    printf("Negative counts:%d\n",neg);
    printf("Zero counts:%d\n",zero);

    printf("\nNumber of Inputs:%d",count);



}