#include <bits/stdc++.h>
using namespace std;
pair<int,int> search(int m, int n, vector<vector<int>> arr, int key)
{
    int s = 0,i=0,j=n-1;
    if(key<arr[0][0] || key>arr[m-1][n-1]){
        return {-1,-1};
    }
    while (i<n && j>=0 )
    {
        if(arr[i][j]==key){
            return{i,j};
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1,-1};
}
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {7, 8, 9, 24, 40}
        };
    pair<int,int>p=search(3,5,arr,25);
    cout<<"index: "<<p.first<<" "<<p.second<<endl;
}