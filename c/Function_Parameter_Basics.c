#include<stdio.h>

// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a,int b);        // Function Parameter

int main()
{
    int c;
    c=sum(0,4);             // Function Argument 

    printf("The value of c is %d\n",c);
}
int sum(int a,int b)
{
    int res;
    res=a+b;
    return res;
}