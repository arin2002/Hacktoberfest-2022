// Hashing help us to count the frequency of an element in the array in time complexity of O(N). so this is 
// an efficient method for calculating the frequency of an element in array


#include<bits/stdc++.h>
using namespace std;
const long long int M=1e5+5;
int main(){
int n; //size of the array
cin>>n;
int a[n];
int hash_arr[M];
for(int i=0;i<M;i++)hash_arr[i]=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    hash_arr[a[i]]++;
}
int x; // Number whose frequency we want
cin>>x;
cout<<hash_arr[x];
}