#include<bits/stdc++.h>
using namespace std;

#define IOS  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
const int mod=1000000007;
#define pb push_back
#define bs binary_search
#define up upper_bound
#define  lb lower_bound
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif 


bool myCmp(pair <int, int> a, pair <int, int> b)
{
	return (a.second < b.second);
}

int maxActivities(pair <int, int> arr[], int n)
{
	sort(arr, arr + n, myCmp);

	int prev = 0;
	int res = 1;

	for(int curr = 1; curr < n; curr++)
	{
	 
		if(arr[curr].first >= arr[prev].second)
		{
			res++;

			prev = curr;
		}
	}

	return res;
}
int main()
{
	pair <int, int> arr[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};

	int n = 3;

	cout<<maxActivities(arr, n); 

	return 0;
}
