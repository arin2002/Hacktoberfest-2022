//WAP to check whether a number is palindramic or not
#include<stdio.h>
int main()
{                                                   
	int r,m,a=0,g;                                  
    printf("Enter the number: ");                  
    scanf("%d",&r);                                  
    g=r;                                             
	while (r>0)                                      
	{
	  m = r%10;                                     
	  a = a*10 + m;                                  
	  r = r/10;                                      
	}
 printf("It's Reverse is %d\n",a);
 if(a==g)
 {printf("%d is Palindrome",g);
 }
 else
 {printf("%d is not palindrome",g);}
 
  return 0;
}

