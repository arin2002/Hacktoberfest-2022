//The question is solved by Bhavya Gupta

#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
using namespace std;

int solve(string A, string B, vector<string> &C) {
    queue<string>q;
    map<string,int>m;
    for(int i=0;i<C.size();i++){
        m[C[i]]=INT_MAX;
    }
    m[A]=0;
    q.push(A);
    while(!q.empty()){
        //int i=0;
        string a=q.front();
        q.pop();
        
        for(int i=0;i<C.size();i++){
            int no=0;
            for(int j=0;j<C[i].size();j++){
                if(C[i][j]!=a[j]){
                    no++;
                }
            }
            if(no==1 && m[C[i]]==INT_MAX){
                q.push(C[i]);
                m[C[i]]=m[a]+1;
            }
        }
    }
    if(m[B]==INT_MAX){
        return 0;
    }
    else{
        return m[B]+1;
    }
}


int main() {
 
    
    return 0;
}