#include <iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    int n;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}
