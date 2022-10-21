class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int n = prices.size();
    if(n==0) return 0;
    int min=prices[0]; //int max=prices[0]; 
    
    int diff=0;
    //heap overflow error -> solved by removing the vector and using single literal 
    for(int i=0; i<n; i++){
        if(prices[i]<min) min = prices[i]; //updating min
        int difference = prices[i] - min; // always finding difference of current and min_till_now
        if(difference>diff) diff = difference;
    }
    return diff;
    }
};
