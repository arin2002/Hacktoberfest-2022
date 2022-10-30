#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int ladders,snakes;
    cout<<"Enter no of ladders : ";
    cin>>ladders;
    map<int,int> lad; //Storing ladders in map to access ladders easily without linear search iteration
    map<int,int> snak;
    cout<<"Enter ladders : "<< endl;//Entering ladders starts from u to v i.e for eg from 3 to 66 where if someone comes to 3 will move to 66
    for (int i=0;i<ladders;i++){
        int u,v;
        cin>>u>>v;
        lad[u]=v;
    }
    cout<<"Enter no of snakes : ";
    cin>>snakes;
    cout<<"Enter snakes : "<< endl;//Entering snakes starts from u to v i.e for eg from 55 to 9 where if someone comes to 55 will move to 9
    for(int i=0;i<snakes;i++){
        int u,v;
        cin>>u>>v;
        snak[u]=v;
    }
    int moves=0;
    queue<int> q;
    q.push(1);
    bool found = false;
    vector<int> vis(101,0);
    vis[1]=true;
    while(!q.empty()&& !found){
        int sz=q.size();
        while(sz--){
            int t=q.front();
            q.pop();
            for(int die=1;die<=6;die++)
            {
                if(t+die==100)
                {   found=true;  }
                if(t+die<=100 and lad[t+die] and !vis[lad[t+die]])
                {   vis[lad[t+die]]= true;
                    if(lad[t+die]==100)
                    {
                        found=true;
                    }
                    q.push(lad[t+die]);
                }
                else if(t+die<=100 and snak[t+die] and !vis[snak[t+die]])
                {
                    vis[snak[t+die]]=true;
                    if(snak[t+die]==100)
                    {    found=true;  }
                    q.push(snak[t+die]);
                }
                else if(t+die <=100 and !vis[t+die] and !snak[t+die] and !lad[t+die])
                {
                    vis[t+die]=true;
                    q.push(t+die);
                }
            }
        }
        moves++;
    }
    if(found)
    {   
        cout<<"Minimum moves required : "<<moves;
    }
    else 
    {
        cout<<"Won't able to reach 100";
    }
}
