#include<iostream>
#include<cmath>
using namespace std ;
int twinprime(int n);
int main()
{
    int n1,n2;
    cout<<"Enter the number1\n" ;
    cin>>n1 ;
    cout<<"Enter the number2\n" ;
    cin>>n2 ;
    int a =twinprime(n1);
    int b=twinprime(n2) ;
    if(n2-n1==2)
    {
        if(a&&b)
        {
            cout<<"Entered numbers are twin prime numbers\n" ;
        }
        else
        {
            cout<<"Numbers are not twin prime\n" ;
        }
    }
    else
    {
        cout<<"Numbers are not twin prime\n" ;
    }
}
int twinprime(int n)
{
    int i;
    int flag=0;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1 ;
            break ;
        }
    
    }
    if(flag==0)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}
