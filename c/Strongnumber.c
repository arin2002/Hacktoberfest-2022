#include<stdio.h>
int main(){
int i,n,rem,fact,sum=0,t;
printf("\nEnter a number: ");
//Storing the user input number
scanf("%d",&n);
printf("\n");
t=n;
//storing the user input in a temporary variable
while(n!=0){
    i=1,fact=1;
    rem=n%10;
while(i<=rem){
fact=fact*i;
i++;
}
sum +=fact;
n=n/10;
}
if(sum==t)
    printf("\n%d is a STRONG number",t);
else
printf("\n%d is not a STRONG number",t);
    return 0;
}
