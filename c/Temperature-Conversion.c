#include<stdio.h>

int main()
{
    float C,f;
    printf("Temperature in Celsius:");
    scanf("%f",&C);
    
    
    
    f =(C*9/5) + 32;
    
    
    printf("Temperatue in Fahrenheit is %f\n",f);
    printf("\n %.2f Celsius = %.2f Fahrenheit\n",C,f);
    
    return 0;
    
    
    
    
    
}
