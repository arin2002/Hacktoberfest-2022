#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <conio.h>
#include <queue>
#include <utility>
typedef long long ll;
using namespace std;
int main()
{
    getch();
}

bool sorter(vector<int> &a,vector<int> &b) 
  {
      if(a[0]==b[0])
      {
        if(a[2]==0&&a[2]==b[2])
            return a[1]>b[1];
        else if(a[2]==1&&a[2]==b[2])
            return a[1]<b[1];
        else if(a[2]==1)
            return false;
        else
            return true;
      }
      return a[0]<b[0];
}

class Solution
{
public:
    vector<vector<int>> getSkyline(vector<vector<int>> &buildings)
    {
        vector<vector<int>> ans;
        vector<vector<int>> points;
        map<int,int> m;
        for(auto b : buildings)
        {
            vector<int> ele(3);
            ele[0] = b[0];
            ele[1] = b[2];
            ele[2] = 0;
            points.push_back(ele);
            ele[0] = b[1];
            ele[2] = 1;
            points.push_back(ele);
        }
        sort(points.begin(),points.end(),sorter);
        int cur = 0;
        m[0]=1;
        for(auto p:points)
        {
            cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
            if(p[2]==0)
            {
                m[p[1]]++;
            }
            else
            {
                if(m[p[1]]==1)
                    m.erase(p[1]);
                else
                    m[p[1]]--;
            }
            if(cur!=prev(m.end())->first)
            {
                vector<int> a(2);
                a[0] = p[0];
                a[1] = prev(m.end())->first;
                ans.push_back(a);
                cur = prev(m.end())->first;
            }   
        }
        return ans;
    }
};