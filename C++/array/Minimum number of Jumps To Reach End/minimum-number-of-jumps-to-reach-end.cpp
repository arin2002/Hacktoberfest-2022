/* Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.

Example: Input: [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
         Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

//TC: O(n)
int minJumps(int arr[], int n){
    //maxReachable: The max index to which we can reach till now.
    //currPosition: currPosition is the index we have jumped to already. That is the index we are at now.
    //jump: Total jumps taken to reach the end.

    int maxReachable=arr[0],jumps=1,currPosition=arr[0];
    
    //if there is only 1 element then we are already at the end, as the first and last index are same. So no jump required to move to end. So return 0. 
    if(n==1) return 0;
    //if at the first index itself there is a 0, then we can never move further. So return -1
    if(arr[0]==0) return -1;
    
    for(int i=1;i<n-1;i++){
        //if e.g. arr[i]=3, then from that ith index we can go to i+1st i+2nd i+3rd indices. But the max that we can go from here is i+3 that means i+arr[i].
        maxReachable=max(maxReachable,i+arr[i]);
        
        if(i==currPosition){
            currPosition=maxReachable; //When we are done with all the possible places that we can go to till the place we are at ryt now that is halt and we have found the longest jump we can make from this halt position. Then we will jump there.
            jumps++;
        }
        
        //If after any jump we are now at the end index or beyond it, then just break out of the loop and now we dont have to make further jumps. And the jumps variable will be containing the minimum jumps we made to reach the end.
        if(currPosition>=n-1){
            return jumps;
        }
        
    }
    
    //If after we are done with the whole iteration and jumping but even then we are not at the end of the array, then that means we can never reach the end, so return -1. Or in the other case return the jumps.
    return currPosition<n-1 ? -1 : jumps;
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minJumps(arr, n)<<"\n";
    return 0;
}