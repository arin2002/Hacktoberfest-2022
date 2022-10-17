#include<iostream>
using namespace std;

int linear_search(int a[], int n, int x)
{
    for(int i=0;i<n; i++)
    {
        if(a[i]==x)
        return i;
    }
    return -1;
}

int main()
{
    int x;
    int a[]={13,17,23,29,37,43,47,59,71,91};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"Enter the number to search in list"<<endl;
    cin>>x;
    int pos=linear_search(a,n,x);
    if(pos>=0)
    cout<<"position of element is "<<pos+1;
    else
    cout<<"Element is not in list";
}