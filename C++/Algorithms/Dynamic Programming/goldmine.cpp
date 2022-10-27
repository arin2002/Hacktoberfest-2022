#include <iostream>
using namespace std;
int maximum(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int row, col;
    cout << "Enter no.of rows and columns: ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter the matrix:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int dp[row][col];
    int maxi = 0;
    for (int j = col - 1; j >= 0; j--)
    {
        for (int i = 0; i < row; i++)
        {
            if (j == col - 1)
            {
                maxi = 0;
            }
            else
            {
                if (i == 0 )
                {
                    maxi = maximum(dp[i][j + 1], dp[i + 1][j + 1]);
                }
                else if (i == row - 1)
                {
                    maxi = maximum(dp[i][j + 1], dp[i - 1][j + 1]);
                }
                else
                {
                    maxi = maximum(dp[i - 1][j + 1], maximum(dp[i][j + 1], dp[i + 1][j + 1]));
                }
            }

            dp[i][j] = arr[i][j] + maxi;
        }
    }
    maxi = dp[0][0];
    for (int i = 1; i < row; i++)
    {
        maxi = maximum(maxi, dp[i][0]);
    }
    cout << "Maximum gold that can be digged is: " << maxi << "\n";
    return 0;
}
/*
Example input: row = 6, col = 6;
matrix:
0 1 4 2 8 2
4 3 6 5 0 4
1 2 4 1 4 6
2 0 7 3 2 2
3 1 5 9 2 4
2 7 0 8 5 1
Answer: 33
*/