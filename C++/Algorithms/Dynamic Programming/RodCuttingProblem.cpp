#include <bits/stdc++.h>
using namespace std;

template <typename LL>
std::ostream& operator<<(std::ostream& out, std::vector<LL> &arr){
    for(auto &x : arr)  out<<x<<' ';
    return out;
}

template <typename LL>
std::istream& operator>>(std::istream& in, std::vector<LL> &arr){
    for(auto &x : arr)  in>>x;
    return in;
}

int rodCut(vector<int> &P){
    int n = P.size();
    vector<int> F(n+1);
    for(int i=1; i<n+1; i++)
        for(int j=0; j<i; j++)
            F[i] = max(F[i], P[i-j-1] + F[j]);
    return F[n];
}

int main(){
    int t = 0; cin >> t;
    while (t--){
        int n = 0; cin >> n;    // length of the rod
        vector<int> prices(n); cin >> prices;
        cout << rodCut(prices) << '\n';
    }
    return 0;
}