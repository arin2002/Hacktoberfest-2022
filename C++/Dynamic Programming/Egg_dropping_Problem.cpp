
class Solution{

public:

int eggDrop(int n, int k){
int egg[n+1][k+1];
        for(int i=1;i<=n;i++)
        {
            egg[i][1] = 1;
            egg[i][0] = 0;
        }
        for(int i=1;i<=k;i++)
        {
            egg[1][i] = i;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=k;j++)
            {
                egg[i][j] = INT_MAX;
                for(int x=1;x<=j;x++)
                {
                    int r = 1+max(egg[i-1][x-1], egg[i][j-x]);
                    if(r<egg[i][j])
                    egg[i][j] = r;
                }
            }
        }
        return egg[n][k];
    }
};
