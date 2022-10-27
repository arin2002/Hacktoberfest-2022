#include<bits/stdc++.h>
using namespace std;

// Kth smallest element
priority_queue<int> heap; //max heap

int Solve(int a[], int n, int k) {

	for (int i = 0; i < n; i++) {

		heap.push(a[i]);
		if (heap.size() > k) heap.pop();

	}

	return heap.top();
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << Solve(a, n, k) << endl;
}
