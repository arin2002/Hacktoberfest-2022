#include<bits/stdc++.h>
using namespace std;

// Connect ropes to minimize the cost
// Connect each rope and minimize the cost
// Cost = sum of lengths of two ropes connected

priority_queue<int, vector<int>, greater<int>> heap; // min heap

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i]; // length of ropes
		heap.push(a[i]);
	}

	int cost = 0 ;
	while (heap.size() >= 2) {

		int first = heap.top();
		heap.pop();
		int second = heap.top();
		heap.pop();
		cost += first + second;
		heap.push(first + second);
	}

	cout << cost << endl;


}
