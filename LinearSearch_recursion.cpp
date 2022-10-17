#include<iostream>
using namespace std;

int Lsr(int a[],int n, int x,int c)
{
    if(c<n)
    {
        if(a[c]==x)
        return c;
        
        return Lsr(a,n,x,c++);
    }
    return -1;
}

int main()
{
    int a[]={13,17,23,29,37,43,47,59,71,91};
    int x;
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"Enter the number to search in list using Linear Search"<<endl;
    cin>>x;
    int c=0;
    int pos= Lsr(a,n,x,c);
    if(pos>=0)
    cout<<"Position of the element is "<<pos+1;
    else
    cout<<"Element doesn't exist in the list";

}