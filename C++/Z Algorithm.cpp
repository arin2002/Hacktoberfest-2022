void prefix_table(vector<int> &table,string s,int n){
    int left=0,right=0;
    
    for(int k=1;k<n;k++){
        if(k>right){
            left=right=k;
            while(right<n && s[right]==s[right-left])
                right++;
            table[k]=right-left;
            right--;
        }
        else{
            int k1=k-left;
            if(table[k1]<right-k+1)
                table[k]=table[k1];
            else{
                left=k;
                while(right<n && s[right]==s[right-left])
                    right++;
                table[k]=right-left;
                right--;
            }
        }
    }
}

int zAlgorithm(string p, string s, int m, int n)
{
    string temp=s+"$"+p;
    vector<int> table(n+m+1);
    prefix_table(table,temp,n+m+1);
    
    int count=0;
    for(int i=0;i<n+m+1;i++){
        //cout<<table[i]<<" ";
        if(table[i]==n)
            count++;
    }
    //cout<<endl;
    return count;
}
