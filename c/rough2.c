#include<stdio.h>
int main()
{
    int i,j,space,r,num,alpha;

    printf("Enter number of rows:");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
		num=1;
		alpha='A';

        for(space=1;space<=(r-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
			if(i%2==1)
			{
            	printf("%d ",num++);
			}	
			else
			{
				printf("%c ",alpha++);
			}
			
        }
        printf("\n");
    }
}