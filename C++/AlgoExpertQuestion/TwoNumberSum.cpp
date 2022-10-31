Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order

Solution :

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  map<int,int> m;
  vector<int> ans;
  for(int i=0;i<array.size();i++){
    int diff = targetSum-array[i];
    if(m.find(diff)!=m.end()){
      ans.push_back(array[i]);
      ans.push_back(diff);
      return ans;
    }
    else{
      m[array[i]]++;
    }
  }
  return ans;
}
