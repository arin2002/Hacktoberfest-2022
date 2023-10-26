/*
  ->kadanes approach
  take the maximum of following two ->maximum sum of normal subarray(kadane)
                                    ->maximum sum of circular subarray
   maximum sum of circular subarray has got two approaches
   ->using minimum sum subarry by kadanes and substracting this sum from overall array sum
   ->inverting the array -- max sum of inverted array == -(min sum of normal subarray)
                         = sum array -(min sum of normal subarray)
                          = sum array -(-max sum of inverted  array)
                          = sum array + max sum of inverted array (i.e adding max sum of inverted array to max sum of tht array )                                  
  */

 #include<bits/stdc++.h>
 using namespace std;


 int normalmaxsum(int a[] , int n){
     int res = a[0];
     int maxEnding = a[0];
     for(int i=1 ; i<n ; i++){
         maxEnding = max(a[i]+maxEnding , a[i]);
         res = max(res , maxEnding);
     }
     return res;
 }

 int overallMaxSum(int a[] , int n){
     int max_normal = normalmaxsum(a,n);
     //if max_sum<0 ...that implies all the elements of tht array is negative
     if(max_normal<0){
         return max_normal;
     }
     int a_sum =0;
     for(int i =0 ; i<n ; i++){
         a_sum += a[i];
         a[i]=-a[i];//inverting the array
     }
     int max_circular = a_sum + normalmaxsum(a, n);//at this normalmaxsum inverted array is passesd
     return max(max_normal , max_circular);
 }




 int main(){
     int n ; 
     cout<<"Enter the size of array :"<<endl;
     cin>>n;
     int a[n+1];
     cout<<"Enter the elements of subarray"<<endl;
     for(int i =0 ; i<n ; i++){
         cin>>a[i];
     }

     cout<<"maximum sum of circular subarray : "<<overallMaxSum(a,n)<<endl;
     return 0 ;
 }