//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
  string s;
  map<int ,int>mp;
  if(m>n){s="No";
      return s;
  }
   for(int i=0;i<n;i++){
       mp[a1[i]]++;
       
   } 
   for(int i=0;i<m;i++){
       if(mp.find(a2[i])==mp.end()){
           s="No";
           return s;
       }else {
           mp[a2[i]]--;
           if(mp[a2[i]]==0)
           mp.erase(a2[i]);}
   }
   s="Yes";
   return s;
   
}