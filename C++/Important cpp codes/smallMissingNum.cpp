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
    const int N=1000;
    bool check[N];
    for (int i=0;i<N;i++)
    {
        check[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if (a[i]>=0)
        {
            check[a[i]]=true;
        }
    }
    int ans=-1;
    for (int i=1;i<N;i++)
    {
        if (check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
