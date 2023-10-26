#include <bits/stdc++.h>
using namespace std;

// dfs is using recusrion

void dfs(int arr[], int g[][7], int i, int n)
{
    if (arr[i] == 0)
    {
        cout << i << " ";

        arr[i] = 1;

        for (int v = 1; v < n; v++)
        {
            if (g[i][v] == 1)
                dfs(arr, g, v, n);
        }
    }
}

int main()
{
    int g[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};

    int arr[8] = {0};

    dfs(arr, g, 4, 7);
    return 0;
}