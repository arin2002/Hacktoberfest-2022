
#include <bits/stdc++.h>
using namespace std;

string rever(string S1){
    string S2 ="";
    int r;
    int len = S1.length();
    for(int i=len-1;i>=0;i--){
        if(S1[i]=='.'){
            r=len-i;
            len=i-1;
            S2.append(S2.substr(i+1,r));
            S2.append(".");
        }

    }
    S2.append(S1.substr(0,len-1));
    return S2;

}

int main(){

string S1;
cin>>S1;

cout<<rever(S1);

return 0;
}