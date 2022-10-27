class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
      vector<int> output(num_people);
      for(int i=0;candies>0;i++,candies-=i){
          output[i%num_people]+=min(i+1,candies);
      }
     return output;   
    }
};