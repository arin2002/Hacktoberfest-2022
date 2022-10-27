/* A Pythagorean triplet is a set of three positive integers a, b and c such that a<b<c
 a^2 + b^2 = c^2   or  c = int(sqrt(a^2+b^2)) */

//For example, 3, 5 and 4 form a Pythagorean triple, since 3*3 + 4*4 = 25 = 5*5 

#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,range;

    printf("Range in which we wanted to print pythagorian triplets:");
    scanf("%d",&range);

    for(a=1;a<=range;a++)
    {
        for(b=1;b<=range;b++)
        {
            for(c=1;c<=range;c++)
            {
                if(c*c==a*a + b*b)
                {
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    
        
    


}