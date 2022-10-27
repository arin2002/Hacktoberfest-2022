/*
Question 1 Given array of size N and Q querries
Solve two type of quereies
Type1 : i x : replace ith index by value x
Type 2 : l r : find sum from l to r
Input :
N Q
N elemnts of array
Type i x / Type l r(Q lines)


Example :
5 4
3 4 5 6 3
2 2 4
1 2 6
2 2 4
2 1 5
Output : 
15
17
23


*/


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int bit[N];

void update(int i, int x){
	for(; i < N; i += (i&-i))
		bit[i] += x;
}

int sum(int i){
	int ans = 0;
	for(; i > 0; i -= (i&-i))
		ans += bit[i];
	return ans;
}

int main(){
	int n, q;
	cin >> n >> q;
	int a[n+10];
	for(int i = 1;i <= n; ++i){
		cin >> a[i];
		update(i, a[i]);
	}

	while(q--){
		int type;
		cin >> type;
		if(type == 1){
			int i, x;
			cin >> i >> x;
			update(i, x - a[i]);
			a[i] = x;
		}
		else{
			int l, r;
			cin >> l >> r;
			cout << sum(r) - sum(l-1) << endl;
		}
	}
}