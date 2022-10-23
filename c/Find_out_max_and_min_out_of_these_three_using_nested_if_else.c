#include <stdio.h>
int main() 
{
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2)
 	{
        if (n1 >= n3)
        {
            printf("%.2lf is the largest number\n", n1);
    	}
        else
        {
            printf("%.2lf is the largest number\n", n3);
    	}
    } 
	else
	{ 
        if (n2 >= n3)
	    	printf("%.2lf is the largest number.\n", n2);
        else
            printf("%.2lf is the largest number.\n", n3);   
        
	}
	if(n1<=n2)
	{
		if(n1<=n3)
		{
			printf("%.2lf is smallest\n",n1);
		}
		else
		{
			printf("%.2lf is smallest\n",n3);
		}
	}
	else
	{
		if(n2<=n3)
		{
			printf("%.2lf is smallest\n",n2);
		}
		else
		{
			printf("%.2lf is smallest\n",n3);
		}
	}
	
	
    return 0;
}
