// Best Time to Buy and Sell Stock III

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// Find the maximum profit you can achieve. You may complete at most two transactions.

// Example 1:
// Input: prices = [3,3,5,0,0,3,1,4]
// Output: 6

  int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>v(n,0);
        int max=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            int m=prices[i];
            if(max-m>v[i+1])
                v[i]=max-m;
            else
                v[i]=v[i+1];
            if(max<m)
                max=m;
        }
        max=INT_MAX;
        int max_value=0;
        int result=0;
        for(int i=0;i<prices.size();i++)
        {
            if(i==0)
            {
                result=v[i];
            }
            else
            {
                if(prices[i-1]-max>max_value)
                    max_value=prices[i-1]-max;
                if(max>prices[i-1])
                    max=prices[i-1];
                if(result<max_value+v[i])
                    result=max_value+v[i];
            }
        }
        return result;
    }
