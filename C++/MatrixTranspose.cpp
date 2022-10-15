//Transpose code:
#include <iostream>
using namespace std;


//This is effective code for transposing as it does not uses extra space and just swapping one of the triangle 
// with another half rectangle and keeping the diagonal elements same
void effTranspose(int **arr, int m, int n)
{
    int temp;
    for(int i=1;i<m;i++){
        for(int j=0;j<i;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


//Naive uses extra space while transposing, it copies the elements into a temp matrix in transpose fashion
void naiveTranspose(int **arr, int m, int n)
{
    int temp[m][n];
    for (int i = 0; i < m; i++)
    {
        //copying rows into columns of temp
        for (int j = 0; j < n; j++)
            temp[i][j] = arr[j][i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //printing the temp matrix
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
        //array of pointers
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
        if(n!=m) cout<<"m and n should be equal, hence Transpose is not possible.\n";
        else
        {
            cout<<"Matrix After Transpose:\n";
            //Comment one of them while running code..
            // naiveTranspose(arr, m, n);
            effTranspose(arr,m,n);
        }
    }
}
