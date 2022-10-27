#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void OP_BubbleSort(vector<int> &a, int n)
{
    int count = 0;
    while (count != n - 1)
    {
        int swapped = 0; // optimized//
        for (int i = 0; i < (n - count - 1); i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swapped = 1; // optimized//
            }
        }
        if (swapped == 0) // optimized//
            break;

        count++;
    }
}

int main()
{
    int N;
    cout << "Enter The Size : ";
    cin >> N;
    vector<int> arr(N, 0);
    cout << "Enter The Element's : " << endl;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    OP_BubbleSort(arr, N);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;
}