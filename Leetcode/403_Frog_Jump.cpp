class Solution {
private:
int dp[2001][2001];
int getans(vector<int> &stones, int i, int jump,unordered_map<int,int> &mp)
{
    // https://leetcode.com/problems/frog-jump/description/
    if (i == stones.size())
        return 0;
    if (i == stones.size() - 1)
        return 1;
    if (dp[i][jump] != -1)
        return dp[i][jump];
    bool x = 0, y = 0, z = 0;
    if(mp.find(stones[i]+jump)!=mp.end() && mp[stones[i]+jump]>i){
        x |= getans(stones, mp[stones[i]+jump], jump,mp);
        if(x==1) return dp[i][jump]=1;
    }
    if(mp.find(stones[i]+jump-1)!=mp.end() && mp[stones[i]+jump-1]>i){
        y |= getans(stones, mp[stones[i]+jump-1], jump-1,mp);
        if(y==1) return dp[i][jump]=1;
    }
    if(mp.find(stones[i]+jump+1)!=mp.end()){
        z |= getans(stones, mp[stones[i]+jump+1], jump+1,mp);
        if(z==1) return dp[i][jump]=1;
    }
    return dp[i][jump] = 0;
}
public:
    bool canCross(vector<int>& stones) {
        memset(dp, -1, sizeof(dp));
        unordered_map<int,int>mp;
        for(int i=0;i<stones.size();i++) mp[stones[i]]=i;
    return getans(stones, 0, 0,mp);
    }
};
