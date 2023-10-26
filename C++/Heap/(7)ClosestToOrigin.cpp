#include<bits/stdc++.h>
using namespace std;

// K closest points to origin

priority_queue<pair<int, pair<int, int>>> heap; // max heap

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	pair<int, int> arr[n];

	int x, y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr[i].first = x;
		arr[i].second = y;
	}

	for (int i = 0; i < n; i++) {
		x = arr[i].first;
		y =	arr[i].second;
		heap.push({sqrt(x * x + y * y), arr[i]}); // make this sqrt as float else WA

		if (heap.size() > k) heap.pop();
	}

	while (heap.size() > 0) {
		cout << heap.top().second.first << "," << heap.top().second.second;
		heap.pop();
		cout << endl;
	}



}
