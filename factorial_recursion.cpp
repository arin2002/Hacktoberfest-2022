#include<stdio.h>
#include<iostream>
using namespace std;

//factorial of any number 
//Tail recursion
int fact(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number to get its factorial"<<endl;
    cin>>n;
    int x=fact(n);
    cout<<"Factorial of the is :\n"<<x;
    return 0;
}