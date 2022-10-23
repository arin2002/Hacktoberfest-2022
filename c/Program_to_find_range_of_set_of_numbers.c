// Range is the difference between the smallest and biggest number in the list

#include<stdio.h>
int main()
{
    int big,small,n,lim,range;

    printf("Enter the limit:");
    scanf("%d",&lim);

    printf("Enter %d numbers:\n",lim);
    scanf("%d",&n);

    lim=lim-1;              // Here we do this because we already take one number 

    small=big=n;

    while(lim)
    {
        scanf("%d",&n);

        if(n>big)
        {
            big=n;
        }
        if(n<small)
        {
            small=n;
        }

        lim--;
    }
    range=big-small;

    printf("Biggest number=%d\nSmallest number=%d\n",big,small);

    printf("Range = %d\n",range);

    return 0;


}