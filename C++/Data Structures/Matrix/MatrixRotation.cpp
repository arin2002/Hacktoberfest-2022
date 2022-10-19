//Anticlockwise Rotate

#include <iostream>
using namespace std;


//This is an efficient code for Rotation of matrix by 90 degree as we are not taking any extra space here
void effRotate(int **arr, int m, int n)
{
    int temp;
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < m / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(arr[i][j], arr[m - i - 1][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//This is Naive code for rotation of matrix by 90 degree as it uses m*n extra space

void naiveRotate(int **arr, int m, int n)
{
    int temp[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[n - j - 1][i] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{

    //No of test Cases
    cout<<"Enter the no. of test cases:\t";
    int t;
    cin >> t;
    while (t--)
    {
        // Rows and columns
        cout<<"Enter the rows and columns:\t";
        int n, m;
        cin >> m >> n;


        cout<<"Enter the array:\n";
        //it is array of pointers
        int *arr[m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout<<"Initial Matrix:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout << endl;

        cout<<"Rotated Matrix:\n";
        //comment one of them to run 
        // naiveRotate(arr, m, n);
        effRotate(arr,m,n);
    }
}
