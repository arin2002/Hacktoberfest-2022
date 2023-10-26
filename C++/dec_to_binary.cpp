#include <bits/stdc++.h>  
using namespace std;  
int main()  
{  
int arr[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
arr[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<arr[i];    
}    
}  