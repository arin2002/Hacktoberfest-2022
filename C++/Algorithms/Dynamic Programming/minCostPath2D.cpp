#include <iostream>
using namespace std;
int minimum(int a, int b)
{
    return a < b ? a : b;
}
/*
Example Input (row = 7, col = 7)
2 8 4 1 6 4 2
6 0 9 5 3 8 5
1 4 3 4 0 6 5 
6 4 7 2 4 6 1 
1 0 3 7 1 2 7
1 5 3 2 3 0 9
2 2 5 1 9 8 2
Answer for this input is 36
*/
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
    int mini = 0;
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if(i!= row-1 && j!= col-1){
               mini = minimum(dp[i][j+1],dp[i+1][j]);
            }
            else if(i == row-1 && j == col - 1){
                mini = 0;
            }
            else if(i == row - 1 && j!=col-1){
                mini = dp[i][j+1];
            }else if(j == col - 1 && i!=row-1){
                mini = dp[i+1][j];
            }
            dp[i][j] = arr[i][j] + mini;
        }
    }
    int ans = dp[0][0];
    cout<<"Minimum cost to reach bottom right from top left corner is: "<<ans<<"\n";
    return 0;
}