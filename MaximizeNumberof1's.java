class Solve {
    int findZeroes(int arr[], int n, int k) {
        int czero = 0, j = -1, ans = 0;
        
        for(int i=0; i<arr.length; i++) {
            if(arr[i] == 0) czero++;
            
            while(czero > k) {
                j++;
                if(arr[j] == 0) czero--;
            }
            
            ans = Math.max(ans, i - j );
        }
        return ans;
    }
}
