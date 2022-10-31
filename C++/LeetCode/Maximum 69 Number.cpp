class Solution {
public:
    int maximum69Number (int num) {
       vector<int> a;
        while(num>0)
        {
            a.push_back(num%10);
            num=num/10;
        }
        for(int i=a.size()-1;i>=0;i--)     
        {
            if(a[i]==6)
            {
                a[i]=9;
                break;
            }
            
        }
          int x=0;
     for(int i=0;i<a.size();i++)
     {
         x=x*10+a[i];
     }
      int y=0;
        while(x>0)
        {
            y=y*10+x%10;
            x=x/10;
        }
        return y;
    }
};