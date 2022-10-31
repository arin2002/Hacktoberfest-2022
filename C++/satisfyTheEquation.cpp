//  Satisfy the equation

// Given an array A[ ] of N of  integers, find the index of values that satisfy A + B = C + D where A,B,C & D are integers values in the array.
// Note: As there may be multiple pairs satisfying the equation return lexicographically smallest order of  A, B, C and D and return all as -1 if there are no pairs 
//  satisfying the equation.

class Solution {
  public:
    vector<int> satisfyEqn(int A[], int N) {
        // code here
        vector<int> ans;
        unordered_map<int, pair<int, int>> mpp;
        for(int i=0; i<N-1; i++){
            for(int j=i+1; j<N; j++){
                int sum = A[i]+A[j];
                if(mpp.find(sum) == mpp.end()){
                    pair<int, int> p;
                    p.first = i;
                    p.second = j;
                    mpp[sum] = p;
                }
                else{
                    auto it = mpp[sum];
                    if(i == it.first || j == it.first || i == it.second || j == it.second){
                        continue;
                    }
                    else{
                        vector<int> v = {it.first, it.second, i, j};
                        if(ans.size()==0 || ans>v)
                        ans=v;
                    }
                }
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
