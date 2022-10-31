Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Solution :

#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int target) {
  // Write your code here.
  sort(array.begin(),array.end());
  vector<vector<int>> triplet;
  for(int i=0;i<array.size()-1;i++){
    int left = i+1;
    int right = array.size()-1;
    while(left<right){
      int currentsum=array[i]+array[left]+array[right];
      if(currentsum==target){
        triplet.push_back({array[i],array[left],array[right]});
        left++;
        right--;
      }
      else if(currentsum>target){
        right--;
      }
      else
        left++;
    }
  }
  return triplet;
  
}
