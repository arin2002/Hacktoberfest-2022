class Solution {
    
    class sortArray implements Comparator<Item> {
        public int compare(Item i1, Item i2) {
            double r1 = (double)(i1.value) / (double)(i1.weight);
            double r2 = (double)(i2.value) / (double)(i2.weight);
            
            if(r1>r2) return -1;
            else if(r1 < r2) return 1;
            return 0;
        }
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n) {
        Arrays.sort(arr, new sortArray());
        
        int curwt = 0;
        double curValue = 0.0;
        
        for(int i=0; i<n; i++) {
            if(curwt + arr[i].weight <= W) {
                curwt += arr[i].weight;
                curValue += (double)(arr[i].value);
            } else {
                int temp = W - curwt;
                curValue += (double)(arr[i].value) / (double)(arr[i].weight) * (double)temp;
                break;
            }
        }
        
        return curValue;
    }
}
