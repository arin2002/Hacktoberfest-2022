#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define sp ' '
typedef long long ll;
#define fi first
#define se second
#define dbg(x) cout << #x << ":" << x << ln
#define f(a, b) for (int i = a; i < b; i++)
#define forItill(n) for (int i = 0; i < n; i++)
#define frev(n) for (int i = n; i--;)
#define all(arr) arr.begin(), arr.end()
#define forEachXin(arr) for(auto &x: arr)
typedef vector<int> vint;

bool isAmstrong(size_t N){
    size_t sumOfCubes=0, n=N;
    int digits=log10(n)+1;
    while(n){
        int lastDigit = n%10;
        sumOfCubes+=pow(lastDigit, digits);
        n=n/10;
    }
    return sumOfCubes == N;
}

void solve(int a, int b){
    f(a, b+1)   if(isAmstrong(i))   cout<<i<<sp;
}

int main(){
    int a, b;   cin>>a>>b;
    solve(a, b);
    return 0;
}