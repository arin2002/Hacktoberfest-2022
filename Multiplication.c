#include<stdio.h>
int prod(int a,int b)
{int prod=a*b;
printf("%d",prod);
 return prod;
}
int main()
{int a,b;
printf("Enter 2 no.");
scanf("%d %d",&a,&b);
prod(a,b);
return 0;
}
