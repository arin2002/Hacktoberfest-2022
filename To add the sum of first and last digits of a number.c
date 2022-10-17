#include<stdio.h>
main()
{
    int n,first,last,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    first=n;
    while(first>=10)
    {
        first=first/10;
    }
    last=n%10;
    sum=first+last;
    printf("%d",sum);
}