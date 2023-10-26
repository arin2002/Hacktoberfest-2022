#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    int i,j;
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    int mx=-1;
    for(i=0;i<n;i++){
        if (a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
       }

    cout<<ans;
    return 0;
}
