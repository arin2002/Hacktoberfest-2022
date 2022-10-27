/*to find the longest consicutive length of subarray that has odd and even number alternating in that sequence
 solution using kadanes algorithm 
->curr = 1->starting new subarray 
->curr++ extending previous subarray
*/

#include<bits/stdc++.h>
using namespace std;


//kadanes approach
void maxEvenOdd(int a[] , int n){
    int curr =1;
    int res = 1;
    for(int i=1 ; i<n ; i++){
        if(a[i-1]%2==0 && a[i]%2!=0 || a[i-1]%2!=0 && a[i]%2==0){
            curr++;
            res = max(res , curr);
        }
        else{
            curr=1;
        }
    }
    cout<<res<<endl;
}

//naive 
void maxEvenOdd2(int a[] , int n ){
    int res =1;
    for(int i =0 ; i<n ; i++){
        int cur =1;
        for(int j =i+1 ; j<n ; j++){
            if(a[j]%2==0 && a[j-1]%2!=0 || a[j]%2!=0 && a[j-1]%2==0){
                cur++;
            }
            else{
                break;
            }
        }
        res = max(res , cur);
    }
    cout<<res<<endl;
}
int main(){
    int n ;
    cout<<"enter the number of elements in the array :"<<endl;
    cin>>n;
    int a[n+1];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    maxEvenOdd(a , n);
    return 0;
}