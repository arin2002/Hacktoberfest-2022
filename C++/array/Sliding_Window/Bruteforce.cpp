#include <iostream>
#include<vector>
using namespace std;

int maxSum_Bruteforce(vector<int> v, int n, int k)
{
 int j, maxi=0;
  for (int i = 0; i <= n - k; i++)
    {
        int sum=v[i];
        for (j = 1; j < k; j++)
        {
            sum+=v[j];
        }
        maxi=max(sum,maxi);
    }
    return maxi;
}
//////////////----------TimeCOMPLEXITY:O(N*k)-----------------/////////////////
int main()
{
    vector<int> v;
    int n;
    cout<<" enter size of the array : ";
    cin>>n;
    int a;
    cout<<" enter elements of the array : ";
    for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
    }
    cout<<" enter the range : "<<endl; 
    int k;
    cin>>k;
    cout<<maxSum_Bruteforce(v, n, k);
    return 0;

}
