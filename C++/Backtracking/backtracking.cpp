//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

find combination is [2,3,6,7] these number that 
gives sum of 7;

if combination is told then its recursion

T.C. -> 2^t*k

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void solution(int idx,int target,vector<int>&arr,  vector<vector<int>> &outer, vector<int> &inner)
{
   if(idx==arr.size()){
      if( target==0){
          outer.push_back(inner);
      }
      return;
   }
    if(arr[idx]<=target){
       inner.push_back(arr[idx]);//---------------------picking
       solution(idx,target-arr[idx],arr,outer,inner);
       inner.pop_back(); //backtracking-----------non picking 
    }
    solution(idx+1,target,arr,outer,inner);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void iterative_solution(int idx,int target,vector<int>&arr,  vector<vector<int>> &outer, vector<int> &inner){

   if(idx==arr.size())
   {
      if( target==0){
          outer.push_back(inner);
      }
      return;
   }

    while(arr[idx]<=target&&target-arr[idx]>=0){
        inner.push_back(arr[idx]);//---------------------picking
       solution(idx,target-arr[idx],arr,outer,inner);
       idx++;
       inner.pop_back();//backtracking-----------non picking 
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(2);
   
    int target=9;
    vector<vector<int>> outer;
    vector<int> inner;
    iterative_solution(0,target,arr,outer,inner);
    for(auto i:outer){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
