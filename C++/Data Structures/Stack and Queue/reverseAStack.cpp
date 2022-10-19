#include <bits/stdc++.h>
using namespace std;


class Solution{
    stack<int>s;
public:
    stack<int> Reverse(stack<int> St){
        if(St.empty()){
            return s;
        }
        int top = St.top();
        s.push(top);
        St.pop();
        return Reverse(St);
    }
};


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans=ob.Reverse(St);
        vector<int>res;
        while(ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}

