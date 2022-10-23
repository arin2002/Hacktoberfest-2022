#include <stdio.h>
int main()
{
    int n, num, i, max, min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    scanf("%d",&num);
    
    max = num; //Assuming that the first number is the maximum
    min = num; //Assuming that the first number is the minimum
    
    
    for (i = 2; i <= n; i++)            /* Here we start from 2 bcz 
                                        already 1 number is already inputed */
    {
        scanf("%d",&num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("The maximum number is %d\n", max);
    printf("The minimum number is %d\n", min);
    return 0;
}
