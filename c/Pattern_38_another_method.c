// for n = 3
// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n-1)


#include<stdio.h>
void printPattern(int n);


int main()
{
    int n;

    printf("Enter Number of lines you want to print *:");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}

void printPattern(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }
   
    printPattern(n-1);

    for(int i=1;i<=(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");
}
