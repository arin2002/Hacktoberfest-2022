// k closest numbers
// closest to X(given)
// use max Heap as the difference as to be minimum to it to be close

#include <bits/stdc++.h>
using namespace std;
vector<int> closestK(vector<int> &nums, int k, int x)
{
    vector<int> ans;
    int size = nums.size();
    priority_queue<pair<int, int>> maxHeap;
    for (int i = 0; i < size; i++)
    {

        maxHeap.push({abs(nums[i] - x), nums[i]}); // pushed pair
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    while (!maxHeap.empty())
    {
        ans.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return ans;
}
int main()
{
    vector<int> nums = {5, 6, 7, 8, 9};
    int k = 3, x = 7;
    vector<int> ans = closestK(nums, k, x);
    for (auto &it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
