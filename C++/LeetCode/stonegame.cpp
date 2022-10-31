class Solution {
public:
    bool stoneGame(vector<int>& p) {
      int i=0,j=p.size()-1;  
        int mid=j/2;
        int asum=0,bsum=0;
          for(int k=0;k<p.size();k++)
        {
              if(j>i){
            asum=max(p[i],p[j]);
            if(p[i]>p[j])
            {
                i++;
            }
            else{
                j--;
            }
            bsum=max(p[i],p[j]);
             if(p[i]>p[j])
            {
                i++;
            }
            else{
                j--;
            }
              }
              else{
                  
                    if(asum>=bsum)
            return true;
                  else{
                      return false;
                  }
              }
        }
        
      
        
        return false;
    }
};