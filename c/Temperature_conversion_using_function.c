#include<stdio.h>

float CtoF(float C)
{
    float F;

    F=(float)(C*9/5) + 32;

    return F;
}

int main()
{
    float C;

    printf("Enter the temperature in Celsius:");
    scanf("%f",&C);

    printf("Temperature in Fahrenheit = %f",CtoF(C));

    return 0;
}