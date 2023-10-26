#include <stdio.h>
int main() 
{
 float km;
 printf("Enter Length in Kilometer : ");
 scanf("%f",&km);
 printf("\n %.2f KM = %.2f Meters",km,km*1000);
 printf("\n %.2f KM = %.2f Feets",km,km*3280.84);
 printf("\n %.2f KM = %.2f Inches",km,km*39370.08);
 printf("\n %.2f KM = %.2f Centimeters\n",km,km*1000*100);
 return 0;
}
