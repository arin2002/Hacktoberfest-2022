#include <iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    int n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
