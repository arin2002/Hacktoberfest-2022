// Decimal Number:- Decimal number is a base 10 number because it ranges from 0 to 9, 
//                  there are total 10 digits between 0 to 9.
//Any combination of digits is decimal number such as 23, 445, 132, 0, 2 etc.

// To convert decomal to binary, divide decimal number by 2 till dividend will be less than 2 


// Recursive Idea=> DtoB(n)= n%2 + 10*DtoB(n/2)/


#include<stdio.h>

int DtoB_rec(int);
int DtoB_ite(int);

int main()
{
    int dec;

    printf("Enter Decimal number:");
    scanf("%d",&dec);

    printf("Binary equivalent(iterative) of %d is %d\n",dec,DtoB_ite(dec));

    printf("Binary equivalent(recursive) of %d is %d\n",dec,DtoB_rec(dec));

}

int DtoB_rec(int num)
{
    if(num==0)
        return 0;
    else
    {
        return ((num%2) + 10*DtoB_rec(num/2));
    }
}

int DtoB_ite(int num)
{
    int rem,bin=0,place=1;

    while(num)
    {
        rem=num%2;
        num=num/2;

        bin=bin + (rem*place);
        place=place*10;
    }
    return bin;
}