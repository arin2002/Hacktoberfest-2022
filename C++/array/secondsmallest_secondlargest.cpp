#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";

    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int first,second;
    first=second=INT_MIN;
    int third,fourth;
    third=fourth=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
        if(a[i]<third)
        {
            fourth=third;
            third=a[i];
        }
        else if(a[i]<fourth && a[i]!=third)
        {
            fourth=a[i];
        }
    }
    if(second==INT_MIN)
    cout<<"\n Second largest element not found";
    else
    cout<<"The second largest element is: "<<second;
     if(fourth==INT_MAX)
    cout<<"\n Second smallest element not found";
    else
    cout<<"\nThe second smaleest element is: "<<fourth;
return 0;
}
