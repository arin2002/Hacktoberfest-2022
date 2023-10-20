#include<bits/stdc++.h>
using namespace std;


void bfs(int g[][7],int i,int n)
{
    queue<int>q;
    int arr[7]={0};
    // start ka index 1 
    arr[i]=1;
    cout<<i<<" ";
    q.push(i);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v=1;v<n;v++)
        {
            if(g[u][v]==1 && arr[v]==0)
            {
                cout<<v<<" ";
                arr[v]=1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int g[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}
                 };

    // 1 aapna start wala h aur size 7 hai iska
    bfs(g,4,7);
    return 0;
}