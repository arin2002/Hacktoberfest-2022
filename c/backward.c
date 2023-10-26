#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
      float x[20],y[20],f,s,d,h,p;
      int j,i,k,n;
      printf("enter the value of the elements :");
      scanf("%d",&n);
      printf("enter the value of x:\n");
      for(i=1;i<=n;i++)
      {
                       scanf("%f",&x[i]);
                       }
             printf("enter the value of y:\n");
      for(i=1;i<=n;i++)
      {
                       scanf("%f",&y[i]);
                       }
                       h=x[2]-x[1];
           printf("enter the searching point f:");
scanf("%f",&f);
s=(f-x[n])/h;
d=y[n];
p=1;
for(i=n,k=1;i>=1,k<n;i--,k++)
{
                 for(j=n;j>=1;j--)
                 {
                                 y[j]=y[j]-y[j-1];
                                 }
                                 p=p*(s+k-1)/k;
                                 d=d+p*y[n];
}
printf("for f=%f ,ans is=%f",f,d);
getch();
}
