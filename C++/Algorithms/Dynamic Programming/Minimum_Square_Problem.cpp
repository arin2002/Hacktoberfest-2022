#include <iostream>
using namespace std;

const int N = 1e3;
int dp[N]; //Declaring the dp array

int minSq(int n)
{
    if (n == 1 || n == 2 || n == 3 || n == 0)
        return n; 
        //Base Cases
    if (dp[n] != INT_MAX)
        return dp[n];
        //We will return the result if we have the result stored before         
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], minSq(n - i * i) + 1);
    }
    return dp[n];
}

int main()
{

    for (int i = 0; i < N; i++)
    {
        dp[i] = INT_MAX;
    }
    //Initialising the dp array to INT_MAX, as we have to calculate the minimum

    int number;
    cin >> number;
    //Taking input and function call
    cout << minSq(number);

    return 0;
}