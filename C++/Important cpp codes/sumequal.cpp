#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0, j=0, st=-1, en= -1, sum=0;
   while(j<n && sum+a[j]<=s){
    sum+=a[j];
    j++;
   }
   if (sum==s){
    cout<<i+1<<" "<<j<<endl;
    return 0;
   }
   cout<<"sum before while "<<sum<<endl;
   while(j<n ){
    sum+=a[j];
    cout<<"sum is "<<sum<<endl;
    while(sum>s){
        sum-=a[i];
        cout<<"sum in inner while "<<sum<<endl;
        i++;
    }
    if (sum==s){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
   }
   cout<<st<<" "<<en<<endl;
    return 0;
}
