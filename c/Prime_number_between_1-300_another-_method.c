#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,prime,count;

    printf("Prime number b/w 1 to 300 are:\n");

    for(num=1;num<=300;num++)
    {
        if(num==1)
        {
            printf("1 is neither prime nor composite\n");
            continue;
        }
        count=sqrt(num);                    // we can also use count=num/2
        prime=1;                            // We assume that selected number in loop is prime 
        for(i=2;i<count;i++)
        {
            if(num%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("\n%d\n",num);
        }

    }
    return 0;

}