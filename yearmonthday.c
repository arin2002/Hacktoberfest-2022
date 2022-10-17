#include<stdio.h>
int main()
{
int n, year, month, days;
printf("Enter no. of days - ");
scanf("%d",&n);
year = n/365;
month = (n-365*year)/30;
days = (n-365*year - month*30);
printf("%d = year: %d, month= %d, days: %d \n", n, year, month, days);
printf("sap id 500107150");
return 0;
 }
