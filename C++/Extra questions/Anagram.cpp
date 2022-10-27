#define PracticeMode
#include <bits/stdc++.h>
using namespace std;

int solve(string &arr, string &pat){
    int n = arr.length(), m=pat.length();
    #define CHAR 256
    vector<int> f1(CHAR), f2(CHAR);
    f(0, m) f1[arr[i]]++, f2[pat[i]]++;
    if(f1==f2)  return 0;
    f(m, n){
        f1[arr[i]]++;
        f1[arr[i-m]]--;
        if(f1==f2)  return i-m+1;
    }
    return -1;
}

int main(){
    int t = 0; cin >> t;
    while (t--){
        string arr; cin >> arr;
        string pat; cin >> pat;
        cout << solve(arr, pat) << ln;
    }
    return 0;
}