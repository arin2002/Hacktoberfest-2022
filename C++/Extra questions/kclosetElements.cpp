#include <bits/stdc++.h>
using namespace std;

// I have solved this using the heap data structure

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {

        priority_queue<pair<int, int>> maxheap;
        pair<int, int> p;
        for (int i = 0; i < arr.size(); i++)
        {

            maxheap.push({abs(arr[i] - x), arr[i]});
            if (maxheap.size() > k)
            {
                maxheap.pop();
            }
        }

        vector<int> ans;
        while (maxheap.size() > 0)
        {
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};