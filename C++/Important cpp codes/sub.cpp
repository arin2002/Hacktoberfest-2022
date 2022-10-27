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
    for(i=0;i<n;i++){
        int curr=0;
        for(j=i;j<n;j++){
            curr+=a[j];
            cout<<curr<<" ";
       }
    }
    return 0;
}
