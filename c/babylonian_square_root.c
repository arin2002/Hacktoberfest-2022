//Find the square root of a number using Babylonian method

#include <stdio.h>
 
float babylonian(float n)
{
    float x = n;
    float y = 1;
    float a = 0.000001; 
    while (x - y > a) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}
 
int main()
{
    int n;
    printf("Enter the number to find its square root: ");
    scanf("%d", &n);
    printf("The square root of %d is %f", n, babylonian(n));
}
