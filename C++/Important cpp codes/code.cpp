#include <bits/stdc++.h> 

using namespace std;

string HexaRange = "ABCDEF";

string hexToBin(long long hexStr)
{
     string ans = "";
     while(hexStr)
     {
          if(hexStr%2)ans+='1';
          else ans+='0';
          hexStr/=2;
     }
    reverse(ans.begin() , ans.end());
    while(ans.size()!=4)
    {
         ans.insert(0 , "0");
    }
    return ans;
}

string normalize(string originalStr)
{
        string currentStr = "" , finalStr = "";
     
        for(auto it : originalStr)
        {
             if(it=='/')
             {
                  while(currentStr.size()<8)
                    {
                         currentStr.insert(0 , "0");
                    }
                 break;
             }
             if(it=='.')
             {
                  while(currentStr.size()<8)
                    {
                         currentStr.insert(0 , "0");
                    }
                 finalStr+=currentStr;
                 finalStr+=".";
                 currentStr.clear();
                 continue;
             }
             bool flag = false;

             for(auto itt: HexaRange)
             {
                 if(it == itt)
                 {
                     flag = true;
                     break;
                 }
             }
             if(flag)
             {
                  currentStr+=hexToBin(10 + it-'A');
             }
             else
             {
                 currentStr+=hexToBin(it-'0');
             }
        }
        finalStr+=currentStr;
        return finalStr; 
}

void solve(){
    string searchString, normalSearchStr; 
    int tableSize;
    cin>>searchString>>tableSize;

    vector<string>normalized_table;
    vector<string>ip_entries;
    vector<char>hops;

    normalSearchStr = normalize(searchString);
    for(int i=0 ; i<tableSize;i++)
    {
        string tableEntry;
        char nextHop;
        cin>>tableEntry>>nextHop;
        ip_entries.push_back(tableEntry);
        hops.push_back(nextHop); 
        normalized_table.push_back(normalize(tableEntry));     
    }
   
   vector<int>network_bits;
   for(auto it: ip_entries )
   {
       int len = it.size();
       string nbc = "";
       for(int i = len-1 ; i>=0 ; i--)
       {
            if(it[i]=='/') break;
            nbc+=it[i];
       }
       if(!nbc.empty()){
           reverse(nbc.begin() , nbc.end());
           network_bits.push_back(stoi(nbc));
       }else
       {
         network_bits.push_back(0);
       }
   }
  

   int maxMatch = INT_MIN;
   char resultHop ;

   for(int i=0 ; i<tableSize ;i++)
   {
        int netBitCount = network_bits[i];
        int ind = 0 ; 
        int matchBits = 0 ; 
        while(netBitCount)
        {
            if(normalSearchStr[ind]!=normalized_table[i][ind]) break;
            
            ind++;
            if(normalSearchStr[ind]!='.')
            {
                netBitCount--; 
                matchBits++; 
            }
        }
        if(max(maxMatch , matchBits)==matchBits)
        {
             resultHop =  hops[i];
             maxMatch = matchBits;
        }
   }
   cout<<resultHop<<endl;
}

int main(){
    
     
    #ifndef ONLINE_JUDGE 
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif 
    int testCases;
    cin>>testCases;
    for(int testCase=1;testCase<=testCases;testCase++){
        solve();
    }
   
}








