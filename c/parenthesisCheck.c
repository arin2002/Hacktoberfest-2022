#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{
    int top ;
    int size ;
    char *arr ;
};
int parenthesisMatch(char *exp,struct stack *s);
int isEmpty(struct stack *s);
void push(struct stack *s,char sp);
int isFULL(struct stack *s);
void pop(struct stack *s);
int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1 ;
    s->size=12 ;
    s->arr=(char*)malloc(sizeof(char));
    char *exp= "((9)(--%%))" ;
    if(parenthesisMatch(exp,s))
    {
        printf("Parenthesis are equal\n") ;
    }
    else
    {
        printf("parenthesis are not equal\n") ;
    }
    return 0 ;
}
int parenthesisMatch(char *exp,struct stack *s)
{
    int j=strlen(exp) ;
    for(int i=0;i<j;i++)
    {
    if(exp[i]=='(')
    {
       push(s,'(') ;   
    }
    else if(exp[i]==')')
    {
      if(isEmpty(s))
      {
          return 0 ;
      }
      pop(s) ;
    }
    }
    if(isEmpty(s))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int isEmpty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s,char sp)
{
    if(isFULL(s))
    {
        printf("Stack is FUll\n");
    }
    else
    {
        s->top++ ;
        s->arr[s->top]=sp ;
    }
}
int isFULL(struct stack *s)
{
    if(s->top==s->size-1)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
void pop(struct stack *s)
{
    char q ;
    q=s->arr[s->top] ;
    s->top-- ;
}


