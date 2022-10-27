#include<bits/stdc++.h>
using namespace std;

// Frequency Sort

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap; // min heap

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n;
	int a[n];
	unordered_map<int, int> m;

	for (int i = 0; i < n; i++) { cin >> a[i]; m[a[i]]++; }

	for (auto i : m) {
		heap.push({i.second, i.first});
	}

	while (heap.size() > 0) {
		cout << heap.top().second << " ";
		heap.pop();
	}
}
