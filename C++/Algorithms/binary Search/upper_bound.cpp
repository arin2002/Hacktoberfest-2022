#include<bits/stdc++.h>
using namespace std;
#define ll long long

int upper_bound(vector<int>v,int k){   //upper_bound
	int l=0,r=v.size()-1;
	while(l<r){
		int m=l+(r-l)/2;
		if(v[m]<=k)l=m+1;
		else r=m;
	}
	return v[r];
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cout<<"Enter size of array "<<endl;
	cin>>n;
	vector<int>v(n);
	cout<<"Enter integers in non-descending order "<<endl;
	for(int i=0;i<n;i++)cin>>v[i];
	int target;
	cout<<"Enter Target "<<endl;
	cin>>target;
	if(target>=v[n-1]){
		cout<<"Upper Bound of target is out of range of array "<<endl;
		return 0;
	}
	cout<<"Upper bound is: "<<upper_bound(v,target)<<endl;
	return 0;
} 

