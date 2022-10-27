#include <iostream>
using namespace std;

void inputArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(int *arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {

                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
int arr[100];
cout<<"enter elements in array:";
inputArray(arr,n);
cout<<"array before reverse:";
printArray(arr,n);
insertionSort(arr,n);
cout<<"Array after reverse:";
printArray(arr,n);

    return 0;
}