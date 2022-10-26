#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c,D,r1,r2, rp, ip;

// equation foramt is ax^2 + bx + c
// r1 is root 1
// r2 is root 2
// D is discriminant
// rp is real part and 
// ip is imaginary part 

printf("Enter the variables a, b, c  : \n");
scanf("%f%f%f",&a,&b,&c);

D=(b*b)-(4*a*c);
if(D>0)
{
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("The roots of the equation are %.2f and %.2f",r1,r2);
}
else if(D==0)
{
    r1=r2=-b/(2*a);
    printf("The roots of the equations are same %.2f",r1);
}
else 
{
    rp = -b/(2*a);
    ip = sqrt(-D)/(2*a);
    printf("The roots of the equation are %.2f+%.2fi and %.2f-%.2fi",rp,ip,rp,ip);
}
}
