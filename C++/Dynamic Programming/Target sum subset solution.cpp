// CPP program for the above approach
#include <bits/stdc++.h>

using namespace std;
 
// Taking the matrix as globally

int tab[2000][2000];
 
// Check if possible subset with 
// given sum is possible or not

int subsetSum(int a[], int n, int sum)
{

     

    // If the sum is zero it means 

    // we got our expected sum

    if (sum == 0)

        return 1;

         

    if (n <= 0)

        return 0;

   

    // If the value is not -1 it means it 

    // already call the function 

    // with the same value.

    // it will save our from the repetition.

    if (tab[n - 1][sum] != -1)

        return tab[n - 1][sum];

   

    // if the value of a[n-1] is

    // greater than the sum.

    // we call for the next value

    if (a[n - 1] > sum)

        return tab[n - 1][sum] = subsetSum(a, n - 1, sum);

    else

    {

         

        // Here we do two calls because we 

        // don't know which value is 

        // full-fill our criteria

        // that's why we doing two calls

        return tab[n - 1][sum] = subsetSum(a, n - 1, sum) || 

                       subsetSum(a, n - 1, sum - a[n - 1]);

    }
}
 
// Driver Code

int main()
{

    // Storing the value -1 to the matrix

    memset(tab, -1, sizeof(tab));

    int n = 5;

    int a[] = {1, 5, 3, 7, 4};

    int sum = 12;
 

    if (subsetSum(a, n, sum))

    {

        cout << "YES" << endl;

    }

    else

        cout << "NO" << endl;

   


}
