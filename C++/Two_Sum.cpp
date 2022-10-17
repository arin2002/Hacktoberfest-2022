#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
vector<int> twoSum(const vector<int> &A, int B) {
    vector<int>ans;
    ans.push_back(NULL);
    ans.push_back(NULL);
    map<int,int>m;
    for(int i=0;i<A.size();i++){
        
        if(m.find(B-A[i])==m.end()){
            if(m.find(A[i])==m.end()){
            m[A[i]]=i+1;
            }
            
        }
        else{
            ans[0]=m[B-A[i]];
            ans[1]=i+1;
            return ans;
        }
        
    }
    return {};
    
}


int main() {
 
    
    return 0;
}