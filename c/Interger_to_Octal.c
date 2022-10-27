//Hint: To obtain octal equivalent of an integer, 
//divide it continuously by 8 till dividend doesn’t become zero, 
//then write the remainders obtained in reverse direction


#include<stdio.h>
int main()
{
    int n,r,q,o;

    printf("Enter an integer:");
    scanf("%d",&n);

    if(n>0)
    {
        r=n%8;
        q=n/8;

        o=(q*10)+r;
  
    }
    

    printf("Octal equivalent is %d\n",o);

    return 0;
    
}
