#include<stdio.h>
int main()
{
    int num,prime,i;

    printf("Prime Numbers between 1 to 300 are:");


    for(num=1;num<=300;num++)           // Loop checks number upto 300 
    {
        prime=1;
        for(i=2;i<num;i++)              // Loop starting from 2 to number 
        {
            if(num%i==0)
            {
                prime=0;
                break;                  /* takes control out of the inner loop as soon as 
                                           number is fully divisible*/
            }

        }    
        if(prime)
        {
            printf("%d\n",num);
        }

    }
}