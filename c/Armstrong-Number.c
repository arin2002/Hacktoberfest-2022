/* If sum of the cubes of the each digit of a number is equal to the number then
   then number is known as Armstrong number */

// For Example: 153 = (1*1*1) + (5*5*5) + (3*3*3)
// Other Examples are :- 0,1,153,370,371,407 

#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;                 /* as we need to retain the original number*/ 

    while(n>0)              // Number should be +ve
    {
        r=n%10;             // Last digit
        sum=sum+(r*r*r);
        n=n/10;             // Remaining digit after last digit 
    }
    
    if(temp==sum)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not an Armstrong Number\n");
    }
    return 0;



}