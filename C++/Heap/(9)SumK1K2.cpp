#include<bits/stdc++.h>
using namespace std;

// Sum of numbers between k1th smallest and k2th smallest

int kthSmallest(int a[], int n, int k) {

	priority_queue<int> heap; // max heap

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

	int n;
	cin >> n;
	int k1, k2;
	cin >> k1 >> k2;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int num1 = kthSmallest(a, n, k1);
	int num2 = kthSmallest(a, n, k2);

	if (num1 > num2) swap(num1, num2);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > num1 && a[i] < num2) sum += a[i];
	}

	cout << sum << endl;

}
