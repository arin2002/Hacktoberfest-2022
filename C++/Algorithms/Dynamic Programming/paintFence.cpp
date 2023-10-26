#include<iostream>
using namespace std;
void solve(int n, int k){
    long same = k*1;
    long different = k*(k-1);
    long total = same + different;

    for(int i = 3; i <= n; i++){
        same = different*1;
        different = total * (k - 1);
        total = same + different;
    }

    cout<<"No.of ways to paint "<< n <<" fences using "<<k<<" colors such that not more than two fences have the same colours is: "<<total<<"\n";
}
int main(){
    int n,k;
    cout<<"Enter the no.of fences and no.of colors:\n";
    cin>>n>>k;
    solve(n,k);
    return 0;
}