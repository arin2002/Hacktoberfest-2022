#include<bits/stdc++.h>
using namespace std;

// K closest numbers to x

priority_queue<pair<int, int>> heap; //max heap

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	int x;
	cin >> x;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++) {
		heap.push({abs(a[i] - x), a[i]});
		if (heap.size() > k) {
			heap.pop();
		}
	}

	while (heap.size() > 0) {
		cout << heap.top().second << " ";
		heap.pop();
	}
}
