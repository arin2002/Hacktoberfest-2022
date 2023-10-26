//CS21B1019 Piyush Anand
#include <bits/stdc++.h>
#include <iomanip>
#include <chrono>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define prnt(v) for(auto i:v)cout<<i<<;
#define trnf(s,v) for(auto i:s) v.push_back(i);
using namespace std;
using namespace std::chrono;
#define all(v) v.begin(),v.end()
const int mod = 1000000007;
const int N = 100010+56;
const int inf = 1e11+1;

//cout<<fixed<<setprecision(n);<<num

//auto start = high_resolution_clock::now();
//auto stop = high_resolution_clock::now();
//auto duration = duration_cast<microseconds>(stop - start);
//cout << duration.count() << endl;

// One approach is direct heap_sort and directly return the [k+1] element


// 2nd approach 
/*

first k elements ke lie max heap bnao
uske baad har ek element ko check kro, agar elemnt <heap.top() to usko pop kro aur jo tha usko push kro
at last k smallest element bachenge heap me...aur rooot will be our answer

*/
// TC O(n)
int k_small(int arr[], int r,int k){
    priority_queue<int>pq;
    // 1st step
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // 2nd step
    for(int i=k;i<r;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // last step
    return pq.top();

}


signed main(void){
fastIO;

int arr[5]={8,4,9,2,5};
cout<<k_small(arr,5,5);

return 0;
}