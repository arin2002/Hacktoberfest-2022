#include <iostream>
using namespace std;
#define MAX 20
int main()
{
    int a[MAX],n,i,min,j,c;
    cout<<"Enter the number of elements you want: ";
    cin>>n;
    cout<<"The entered elements are: ";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
       min=i;
       for(j=i+1;j<n;j++)
       {
       if(a[j]<a[min])
       {
           min=j;
       }
       }
       c=a[i];
       a[i]=a[min];
       a[min]=c;
    }
    cout<<"The sorted elements are: ";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
        }
    return 0;
}
