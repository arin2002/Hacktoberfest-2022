/*  LC.56- Merge Intervals

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
Example:    Input: [[1,3],[2,6],[8,10],[15,18]]
            Output: [[1,6],[8,10],[15,18]]

Time Complexity: O(n*logn)
Space Complexity: O(logn)  //sort takes logn
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> res;
    res.push_back({intervals[0][0], intervals[0][1]});
    for (int i = 0; i < intervals.size(); i++) {
        if (res[res.size() - 1][1] >= intervals[i][0]) {
            int mn = min(res[res.size() - 1][0], intervals[i][0]);
            int mx = max(res[res.size() - 1][1], intervals[i][1]);
            res[res.size() - 1][0] = mn;
            res[res.size() - 1][1] = mx;
        }
        else
            res.push_back(intervals[i]);
    }
    return res;
}

int main() 
{
    int n;
    cin >> n;
    vector<vector<int>> intervals(n);
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < 2; j++){ 
            vector<int> v(2);
            int start, end;
            cin >> start >> end;
            v.push_back({start, end});
        }
        intervals.push_back(v);
    }
    vector<vector<int>> ans = merge(intervals);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
    }
    cout << endl;
    return 0;
}