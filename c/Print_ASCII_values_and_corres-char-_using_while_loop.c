#include<stdio.h>
int main()
{
    int i;

    i=0;
    while(i<=255)               // The ASCII values varies b/w 0 to 255
    {
        printf("%d %c\n",i,i);
        i++;
    }
    return 0;
    

}