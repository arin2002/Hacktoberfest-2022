#include<stdio.h>

char Lower(char);
char Upper(char);

int main()
{
    char x,y,result,ans;

    // For converting Uppercase to Lowercase
    printf("Enter Uppercase character only:\n");
    scanf("%c",&x);
    result=Upper(x);
    printf("Requirded Lowercase character = %c\n",result);
    
    // For converting Lowercase to Uppercase 
    printf("\nEnter Lowercase character only:\n");
    scanf(" %c",&y);
    ans=Lower(y);
    printf("Required Uppercase character = %c",ans);
    
}

char Lower(char a)
{
    return a-32;           
}
char Upper(char b)
{
    return b+32;
}
