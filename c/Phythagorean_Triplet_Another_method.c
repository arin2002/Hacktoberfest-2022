#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,range;
    float c;

    printf("Range in which pythagorean triplets prints:");
    scanf("%d",&range);

    for(a=1;a<=range;a++)
    {
        for(b=1;b<=range;b++)
        {
            c=sqrt(a*a+b*b);

            if(c==(int)c)               /*sqrt(2*2+3*3)=sqrt(13)=3.0=>so whenever there is int it
                                        is pythagoreous triplet*/
            {
                printf("%d %d %d\n",a,b,(int)c);
            }

        }
    }
}