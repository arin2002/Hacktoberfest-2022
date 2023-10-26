/***
 * 
   * Author : SUARABH UPADHAYAY
   * E-mail : usaurabh207@gmail.com

   Sometimes we’re tested not to show our weaknesses, but to discover our strengths.
   
***/

#include<bits/stdc++.h>
using namespace std;

int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // Declaring and taking length of array of string 

   int n;
   cin>>n;

   // Mapping all vowels to some integer value 

   map<char,long long> m;

   m['a']=0;
   m['e']=1;
   m['i']=2;
   m['o']=3;
   m['u']=4;
   
   string s;

   // Decalring vector which will contain aour answer
   vector<long long> ans(32,0);

   // Taking input of array of string one by one and store  there equivalent bitmask in ans vector

   for(int i=0;i<n;i++){
      cin>>s;

      long long x=0;
      vector<bool> z(5,1);

      for(int i=0;i<s.length();i++)
         if(m.find(s[i])!=m.end()){
            if(z[m[s[i]]]){
               x+=(1<<m[s[i]]);
               z[m[s[i]]]=0;
            }
         }
      
      ans[x]++;
   }

   long long  y=0;

   // calculating ans as y

   for(int i=0;i<32;i++){
      for(int j=i+1;j<32;j++){
         if((i|j)==31){
            y+=(ans[i]*ans[j]);
         }
      }
   }
      
   y+=(ans[31]*(ans[31]-1)/2);

   cout<<y<<"\n";

}

/* 

   Your limitation,
   It’s only your imagination. 

*/