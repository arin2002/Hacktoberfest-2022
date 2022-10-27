#include <iostream>
#include<vector>
using namespace std;
///////////////////////////////////////////////////////////////////////
int maxSum_Slidingwindow(vector<int> v, int n, int k)
{
    if (n < k) {
        cout << "pls enter a valid range";
        return -1;
    }

    int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        max_sum += v[i];
    }
    
    int window_sum = max_sum;
    for (int i = k; i < n; i++) 
    {
        window_sum += v[i] - v[i - k];
        max_sum = max(max_sum, window_sum);
    }
    
    return max_sum;
}
//////////////////////////////////////////////////////////////////////////
/*TIME COMPLEXITY : O(N)*/
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
int main(){
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
    cout<<maxSum_Slidingwindow (v, n, k);
    return 0;

}
