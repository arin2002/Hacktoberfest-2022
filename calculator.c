#include<stdio.h>
int main()
{
    char opr;
    printf("chose the aritmatic operator");
    scanf("%c",&opr);
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    switch (opr)
    {
        case '+' :
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        printf("%d\n",a/b);
        break;
        case '%':
        printf("%d\n",a%b);
        break;

        default: 
        printf(" not valid");
    }
return 0;
}
