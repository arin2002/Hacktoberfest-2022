#include <iostream>
using namespace std;

void effTraversal(int **arr, int m, int n)
{
    //we will keep 4 variables and keep updating them as we move forward...
    int top = 0, right = n - 1, bottom = m - 1, left = 0;
    // base condition...
    while (top <= bottom && left <= right)
    {
        //printing top row..
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        //printing right row..
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;

        int *arr[m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << endl;
        effTraversal(arr, m, n);
    }
}

//By Rajat Dhull
