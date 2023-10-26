#include<stdio.h>
int main()
{
    int i;
    float n1,n2,power;

    printf("Enter the two number:");
    scanf("%f %f",&n1,&n2);

    power=1;
    i=1;

    while(i<=n2)
    {
        power*=n1;          // Multiply n1 to itself i times
        i++;

    }
    printf("%f to the power %f is %f\n",n1,n2,power);
    
    return 0;




    


}