#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=i){
            cout<<"*";
            }
            else if((j>i) && (j<=(2*n-i))){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++){
            if(j<=i){
            cout<<"*";
            }
            else if((j>i) && (j<=(2*n-i))){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}