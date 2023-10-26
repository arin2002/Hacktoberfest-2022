#include <bits/stdc++.h>
using namespace std;

#define N 1000000

void primeSieve(vector<int>&prime){
	prime[0]=prime[1]=0;
	for(long long i=2;i<=N;i++){
         if(prime[i]==1){
         	for(long long j=i*i;j<=N;j=j+i){
         		prime[j]=0;
         	}
         }
	}

}
int main(){
   int n;
   cin>>n;
   vector<int> prime(N,1);
   primeSieve(prime);
   for(int i=0;i<=n;i++){
   	if(prime[i]==1){
   		cout<<i<<" ";
   	}
   }




return 0;    
}