#include <bits/stdc++.h>
using namespacestd;

int count(int n){
    if(n==0){
        return 0;
    }
    else return (count(n-1)+n);
}


int main(){
int t;
cin>>t;
cout<<count(t);

return 0;
}