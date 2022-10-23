#include<stdio.h>

int main()
{
    int num[]={1,1,10,4,10,6};
    int n,i,count=0;

    printf("Enter array element to search:");
    scanf("%d",&n);

    for (i = 0; i <10; i++)
    {   
        if (num[i]==n)
        {
            count++;
        }
    }
    
    printf("Number %d is found %d times in array\n",n,count++);
    

    return 0;
}