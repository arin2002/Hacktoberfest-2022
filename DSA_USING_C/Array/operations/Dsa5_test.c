#include<stdio.h>

int main()
{

    int a[10],i,n,m,k;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
    printf("Enter the data-\n");
    for(i=0;i<n;i++){
        printf("Data %d -",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array elements are: \n [ ");
	for(i=0;i<n-1;i++)
    {
		printf(" %d,", a[i]);
    }
    printf(" %d ]",a[n-1]);
}
