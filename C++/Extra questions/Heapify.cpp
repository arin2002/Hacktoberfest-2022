//CS21B1019 Piyush Anand
#include <bits/stdc++.h>
#include <iomanip>
#include <chrono>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define prnt(v) for(auto index:v)cout<<index<<;
#define trnf(s,v) for(auto index:s) v.push_back(index);
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

void heapify(int arr[] , int n , int index){
    // TC O(logn)
    int largest = index;
    int left_child=2*index;
    int right_child=2*index+1;
    if(left_child<n && arr[largest]<arr[left_child]){
        largest=left_child;
    }
    if(right_child<n && arr[largest]<arr[right_child]){
        largest=right_child;
    }
    if(largest != index){
        swap(arr[largest],arr[index]);
        heapify(arr,n,largest);
    }
}

signed main(void){
fastIO;

int arr[6]={-1,4,3,5,2,0};
int n=5;
for(int index=n/2;index>0;index--){
    heapify(arr,n,index); // TC O(n)
}
for(int index=1;index<n;index++){
    cout<<arr[index]<<" ";

}



return 0;
}