#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n=nums.size(),i, j=0;
        
    for(i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            j=i;
            break;
        }
    }
        
    if(i==-1){
      reverse(nums.begin(), nums.end());
      return;
    } 
        
    for(i=n-1;i>j;i--){
        if(nums[i]>nums[j]){
            swap(nums[i], nums[j]);
            break;
        }
    }
    
    reverse(nums.begin()+j+1, nums.end());
}

int main(){
	vector<int> nums;
	nums = {1,2,3};
	
	nextPermutation(nums);
	
	for(int i=0;i<nums.size();i++)
        cout << nums[i] << " ";

}
