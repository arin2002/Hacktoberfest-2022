#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
    if(n==1){
        return "1";
    }
    string s=countAndSay(n-1);
    string res="";
    int i=0;
    while(i<s.size()){
        int cnt=0;
        char dig=s[i];
        while(i<s.size() && s[i]==dig){
            i++;
            cnt++;
        }
        res+=('0'+cnt);
        res+=dig;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<countAndSay(n);
}
/*
Examples-
n=1
"1"
n=4
"1211"
n=6
"312211"
*/