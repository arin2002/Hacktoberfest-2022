//Problem: https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int totalGas= accumulate(gas.begin(),gas.end(),0);
        // int totalCost= accumulate(cost.begin(),cost.end(),0);
        int total=0,pos=0,sum=0;
        // if(totalCost>totalGas) return -1;
        // else {
            for (int i = 0; i < gas.size(); i++) {
                sum += gas[i] - cost[i];

                if (sum < 0) {
                    total += sum;
                    sum = 0;
                    pos = i+1;
                }
            }

            total += sum;
            return total>=0?pos:-1;
       // }
    }
};
