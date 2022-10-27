//It is also known as Taxicab number
//It is the smallest number expressible as the sum of two cubes in two different ways

//The two different ways are:
//1729 = 1^3 + 12^3 = 9^3 + 10^3

//Next such number is 4104.
//4104 = 16^3 + 2^3 = 9^3 + 15^3


#include<stdio.h>
int main()
{
    int i,num,x,y,count;
    num=30000;
    //for loop for range (1-30000)
    for(i=1;i<=num;i++)
    {
        count=0;
        for(x=1;x*x*x<i;x++)
        {
            //for-loop for finding Ramanujan number
            for(y=x;x*x*x+y*y*y<=i;y++)
            {
                //list all the numbers
                if(x*x*x+y*y*y==i)
                {
                  count++;

                }
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
}