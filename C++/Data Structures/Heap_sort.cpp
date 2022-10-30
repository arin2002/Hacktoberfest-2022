#include <iostream>
using namespace std;

void heapify(int a[], int n, int k)
{
    int max = k;
    int left = (2*k) + 1;
    int right = (2*k) + 2;

    if (left < n && a[left] > a[max]){
        max = left;
    }
    if (right < n && a[right] > a[max]){
        max = right;
    }
    if (max != k){
        swap(a[k], a[max]);
        heapify(a, n, max);
    }
}

void heapSort(int a[], int n)
{
    for (int k = n / 2 - 1; k >= 0; k--){
        heapify(a, n, k);
    }
    for (int k = n - 1; k > 0; k--){
        swap(a[0], a[k]);
        heapify(a, k, 0);
    }
}

int main()
{
    int n = 0;
    cin >> n;
    int a[n];
    for (int k = 0; k < n; k++){
        cin >> a[k];
    }
    
    heapSort(a, n);

    cout << "Sorted Array: "<<endl;
    for (int k = 0; k < n; ++k)
    {
        cout << a[k] << " ";
        cout << endl;
    }
}