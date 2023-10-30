class Solution {
public:


    void Merge(vector<int>& v, int s, int m, int e) {

        vector<int> temp;

        int i, j;
        i = s;
        j = m + 1;

        while (i <= m && j <= e) {

            if (v[i] <= v[j]) {
                temp.push_back(v[i]);
                ++i;
            }
            else {
                temp.push_back(v[j]);
                ++j;
            }

        }

        while (i <= m) {
            temp.push_back(v[i]);
            ++i;
        }

        while (j <= e) {
            temp.push_back(v[j]);
            ++j;
        }

        for (int i = s; i <= e; ++i)
            v[i] = temp[i - s];

    }


    void MergeSort(vector<int>& v, int s, int e) {
        if (s < e) {
            int m = (s + e) / 2;
            MergeSort(v, s, m);
            MergeSort(v, m + 1, e);
            Merge(v, s, m, e);
        }
    } 
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int n = houses.size(), m = heaters.size();
    MergeSort(houses, 0, n-1);
    MergeSort(heaters, 0, m-1);
    vector <int> ans(n, INT_MAX);

    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (houses[i] <= heaters[j])
        {
            ans[i] = heaters[j] - houses[i];
            i++;
        }
        else
        j++;
    }
    for (int i = n - 1, j = m - 1; i >= 0 && j >= 0;){
    if (houses[i] >= heaters[j])
    {
        ans[i] = min(ans[i], houses[i] - heaters[j]);
        i--;

    }
    else j--;
    }
    return *max_element(ans.begin(),ans.end());
    }

    };
