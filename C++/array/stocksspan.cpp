//stock buy and sell problem 
/* if the array is in decreasing order --- max profit =0;
   if the array is in increaing order --- buy at first day and sell at last day
   concept of bottom point and peak point
->at every bottom point buy the stock
-> at every peak point sell the stock*/
 

 #include<bits/stdc++.h>
 using namespace std;

 int max_profit(int a[] , int n){
     int profit =0;
     for(int i =1 ; i<n ; i++){
         if(a[i] > a[i-1]){
             profit = profit + (a[i] - a[i-1]);
         }
     }
     return profit;
 }

 int main(){
     int n ;
     cout<<"Enter the size of the array : ";
     cin>>n;
     int a[n+1];
     cout<<"Enter the< elements of the array : "<<endl;
     for(int i =0 ; i<n ; i++){
         cin>>a[i];
     }
     cout<<"max profit : "<<max_profit( a, n)<<endl;
     return 0;
 }