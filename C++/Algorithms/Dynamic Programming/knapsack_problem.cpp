#include <iostream>
using namespace std;

const int N = 100;

int dp[N][N]; // Initialising our 2D dp array

int value[N], wt[N]; // Arrays to store weight and values

int knapSack(int item, int weight)
{
    if (weight <= 0) //If weight = 0, we will return 0 
        return 0;  
    if (item <= 0) //If no items are left, we will return 0;
        return 0;
    if (dp[item][weight] != -1)
        return dp[item][weight]; //If we have already calculated the result, we will return that result
    if (wt[item - 1] > weight)
        dp[item][weight] = knapSack(item - 1, weight); //Weight exceeds the knapsack weight, we will leave the item
    else
        dp[item][weight] = max(knapSack(item - 1, weight), knapSack(item - 1, weight - wt[item - 1]) + value[item - 1]);
    return dp[item][weight]; //It will take 2 cases; wheather we take item or leave it, and takes the maximum and store in the dp array
}

int main()
{
    //Initialisng the 2D dp array to -1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j] = -1;
        }
    }

    //No of items
    int item;
    cin >> item;
     
    //Taking input of weights
    for (int i = 0; i < item; i++)
    {
        cin >> wt[i];
    }

    //Taking input of Prices/Values
    for (int i = 0; i < item; i++)
    {
        cin >> value[i];
    }
    //Knapsack Weight
    int weight;
    cin >> weight;
    cout << knapSack(item, weight);
    return 0;
}