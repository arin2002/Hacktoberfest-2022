#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    for(j=2;j<n;j++){
        if (pd==a[j]-a[j-1]){
            curr++;
        }else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
       }
    cout<<ans;
    return 0;
}
