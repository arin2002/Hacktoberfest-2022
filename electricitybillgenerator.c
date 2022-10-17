#include<stdio.h>
int main()
{
    int unit;
    int c=0;
    printf("Enter the number of units consumed : ");
    scanf("%d",&unit);
    
    if(unit<=50)
    {
        printf("Bill is: ");
        c+=(unit*0.2)+(unit*0.50);
        printf("%d",c);
    }
    else if (unit<=150)
    {
        printf("Bill is: "); 
        c+=(unit*0.2)+(unit*0.75);
        printf("%d",c);
    }
    else if (unit<=250)
    {
         printf("Bill is: "); 
         c+=(unit*0.2)+(unit*1.20);
         printf("%d",c);
    }
    else
    {
        printf("Bill is: "); 
        c+=(unit*0.2)+(unit*1.50);
        printf("%d",c);
    }
   return 0;

}
