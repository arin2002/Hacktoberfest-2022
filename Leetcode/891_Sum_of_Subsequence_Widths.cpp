const int mod = 1e9 + 7;
int binpow(int a, int b){
    int ans = 1;
    while(b){
        if(b & 1){
            ans = ans * 1ll * a % mod;
        }
        a = a * 1ll * a % mod;
        b >>= 1;
    }
    return ans;
}
class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int mx = nums[i] * 1ll * binpow(2, i) % mod;
            int mn = nums[i] * 1ll * binpow(2, n-1-i) % mod;
            ans += mx - mn;
            ans %= mod;
            ans += mod;
            ans %= mod;
        }
        return ans;
    }
};
