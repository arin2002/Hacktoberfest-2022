#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
class stacks
{
    int top;
    int size;
    char *S;
public:
    stacks(int size);
    bool isFull();
    bool isEmpty();
    char pop();
    void push(char x);
    void Display();
    bool isBalanced(string s);
    int pre(char x);
    int isoperand(char x);
    string intopos(string a);
    bool isOperator(char c);
    int evalPostfix(string postfix);
};
stacks:: stacks(int size)
{
    this->size=size;
    top=-1;
    S=new char[size];
}
bool stacks::isEmpty()
{
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
bool stacks:: isFull()
{
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
char stacks::pop()
{
    char x;
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        x=S[top];
        top--;
    }
    return x;
}
void stacks::push(char x)
{
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        S[top]=x;
    }
}
void stacks::Display()
{
    int i;
    for(i=top;i>=0;i--){
        cout<<S[i]<<endl;
    }
}
int stacks::pre(char x)
{
    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    else{
        return 0;
    }
}
bool stacks::isOperator(char c)
{
 if(c=='+'||c=='-'||c=='*'||c=='/')
 {
 return true;
 }
 else
 {
 return false;
 }
}
int stacks::isoperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}

string stacks::intopos(string infix)
{
 string postfix;
 for(int i=0;i<infix.length();i++)
 {
 if(isoperand(infix[i]))
 {
 postfix+=infix[i];
 }
 else if(infix[i] == '(')
 {
 push(infix[i]);
 }
 else if(infix[i] == ')')
 {
 while((S[top]!='(') && (!isEmpty()))
 {
 char temp=S[top];
 postfix+=temp;
 pop();
 }
 if(S[top]=='(')
 {
 pop();
 }
 }
 else if(isOperator(infix[i]))
 {
 if(isEmpty())
 {
 push(infix[i]);
 }
 else
 {
 if(pre(infix[i])>pre(S[top]))
 {
 push(infix[i]);
 }
 else if((pre(infix[i])==pre(S[top])))
 {
 push(infix[i]);
 }
 else
 {
 while((!isEmpty())&&( pre(infix[i])<=pre(S[top])))
 {
 postfix+=S[top];
 pop();
 }
 push(infix[i]);
 }
 }
 }
 }
 while(!isEmpty())
 {
 postfix+=S[top];
 pop();
 }

 return postfix;
}


int main()
{

  	string infix_exp, postfix_exp;
  	cout<<"Enter the Expression :"<<endl;
  	cin>>infix_exp;
  	int l=infix_exp.length();
  	stacks st(l);

 cout<<"ENTERED INFIX EXPRESSION IS:- "<<infix_exp<<endl;
  	postfix_exp =st.intopos(infix_exp);
  	cout<<endl<<"ENTERED POSTFIX EXPRESSION IS:- "<<postfix_exp;
  	cout<<endl;

 return 0;
}
