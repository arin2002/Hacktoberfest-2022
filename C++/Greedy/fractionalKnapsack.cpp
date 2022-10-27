#include<bits/stdc++.h>
using namespace std;

bool myCmp(pair <int, int> a, pair <int, int> b)
{
	double r1 = (double)a.first / a.second;

	double r2 = (double)b.first / b.second;

	return r1 > r2;
}

double fKnapS(int W, pair <int, int> arr[], int n)
{
	sort(arr, arr + n, myCmp);

	double  res = 0.0;

	for(int i = 0; i < n; i++)
	{
		if(arr[i].second <= W)
		{
			res += arr[i].first;

			W = W - arr[i].second;
		}
		else
		{
			res += arr[i].first * ((double) W / arr[i].second);

			break;
		}
	}


	return res;
}
int main()
{
	pair <int, int> arr[] = {make_pair(120, 30), make_pair(100, 20), make_pair(60, 10)};

	int n = 3, W = 50;

	cout<<fKnapS(W, arr, n); 

	return 0;
}