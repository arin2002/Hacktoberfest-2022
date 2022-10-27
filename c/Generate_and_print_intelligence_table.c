#include<stdio.h>
int main()
{
    float i,y,x;

    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x=x+0.5)
        {
            i=2 + (y + 0.5*x);
            printf("y=%f x=%f i=%f\n",y,x,i);
        }
    }
    return 0;

}