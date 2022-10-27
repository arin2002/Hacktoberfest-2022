#include <bits/stdc++.h>
using namespace std;

bool safe(int a[][25], int row, int col)
{

    // row check
    for (int i = 0; i < row; i++)
    {
        if (a[i][col] == 1)
            return false;
    }

    // dig check
    int i = row, j = col;
    while (i >= 0 and j >= 0)
    {
        if (a[i][j] == 1)
            return false;
        i--;
        j--;
    }

    while (i >= 0 and j < col)
    {
        if (a[i][j] == 1)
            return false;
        i--;
        j++;
    }
    return true;
}

void printboard(int board[][25], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << "|"<<board[i][j] << "|";
        cout << endl;
    }
}

bool NQ(int a[][25], int n, int i = 0)
{

    // base
    if (i == n)
    {
        printboard(a, n);
        return 1;
    }
    // recur
    for (int j = 0; j < n; j++)
    {
        if (safe(a, i, j))
        {
            a[i][j] = 1; //place if safe
            if (NQ(a, n, i + 1))
            {
                return 1; //recur if safe
            }
            a[i][j] = 0; //remove if un safe
        }
    }
    return 0; // baktrack if row overflow
}

int main()
{
    int arr[25][25] = {0};
    int n;
    cin >> n;
    NQ(arr, n);
    return 0;
}
