#include <stdio.h>
int fact(int);
void main()
{
	int n,r,nPr;              // n is the number of items in a set
                            // r is the number of choosing objects from the set 
  	printf("Enter a number n : \n");
  	scanf("%d",&n);
 	printf("Enter a number r : \n");
  	scanf("%d",&r);
  	nPr=fact(n)/fact(n-r);
    printf("Value of %dP%d = %d\n",n,r,nPr);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)      //loop will run until n is reached to get a condition like n*(n-1)*(n-2)...
    {
        f=f*i;
    }
    return f;
}
