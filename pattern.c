#include<stdio.h>
int main()
{
   int n;

   printf("Enter the number of rows: ");
   scanf("%d",&n);

   for(int r=1; r<=n; r++)
   {
     for(int c=1; c<=n; c++)
     {
       printf("%3d",r);
     }
     printf("\n");
   }

   return 0;
}
