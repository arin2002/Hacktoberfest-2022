#include<stdio.h>
#include<string.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return (n*(factorial(n-1)));
    }
}
int main()
{
    int n;
    printf("Enter the number of which you want factorial\n");
    scanf("%d",&n);
    printf("The factorial of number %d is %d",n,factorial(n));
    
    return 0;
}