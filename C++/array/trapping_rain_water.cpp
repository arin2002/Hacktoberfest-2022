/* value represented in this array represents the height of the bar
 if array is inincreasing order or decreasing order we can collect 0 amount of rain water
 approach--- corner two bars wont be stroing any water above of it...
 concept of lmax and rmax
 lmax= max height on the left of the array
 rmax = max height on the right of that array
 water tht can be trapped due to that bar = res[i] = min(lmax - rmax)-a[i](height of tht bar) */

 #include<bits/stdc++.h>
 using namespace std;

 int getwater (int a[] , int n){
     int res =0;
     for(int i =1 ; i<n-1 ; i++){
         int lmax = a[i];
         for(int j = 0 ; j<i ; j++){
             lmax = max(lmax , a[j]);
         }
         int rmax = a[i];
         for(int j = i+1 ; j<n ; j++){
             rmax = max(rmax , a[j]);
         }
         res = res + (min(lmax , rmax)-a[i]);
     }
     return res;
 }

 //precomputation of lmax and rmax for every index and code optimization

 int getwater2(int a[] , int n){
     int res =0;
     int lmax[n];
     int rmax[n];
     lmax[0] = a[0];
     for(int i =1 ; i<n ; i++){
         lmax[i] = max (a[i] , lmax[i-1]);
     }
     rmax[n-1] = a[n-1];
     for(int i = n-2 ; i>=0 ; i--){
         rmax[i] = max(a[i] , rmax[i+1]);
     }
     for(int i =1 ; i<n-1 ; i++){
         res = res+ (min(lmax[i] , rmax[i])-a[i]);
     }
     return res;
 }

 int main(){
      int n ;
      cout<<"enter the size of the array: "<<endl;
      cin>>n ; 
      int a[n+1];
      cout<<"enter the elements of the array: "<<endl;
      for(int i =0 ; i< n ; i++){
          cin>>a[i];
      }
      //cout<<"max amt of rain water trapped : "<<getwater(a , n)<<endl;
      cout<<"max amt of rain water trapped : "<< getwater2(a , n)<<endl;
      return 0;


 }
