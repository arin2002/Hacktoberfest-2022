//  Problem Statement
// A has an array of N non-negative integers. A wants to calculate maximum length of contiguous arithmetic subarray.
// Arithmetic Subarray is an array that contains at least two integers and the difference between consecutive integers are equal. For example [9,10] , [3,3,3] and [9,7,5,3] arithmetic arrays.

// Input: No. of test cases T
// integer no N
// array A[]


// LONGEST ARITHMETIC SUBARRAY:-- 

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int arr[number];
    for(int i=0;i<number;i++){
        cin >> arr[i];
    }
    int ans=2;
    int difference=arr[1]-arr[0];
    int j=2,currArithmeticSubLen=2;
    
    while(j<number){
        if(arr[j]-arr[j-1]==difference){
            currArithmeticSubLen++;
        }
        else{
            difference=arr[j]-arr[j-1];
            currArithmeticSubLen=2;
        }
        ans=max(ans,currArithmeticSubLen);
        j++;
    }
    cout << ans << endl;
    return 0;
}

// Time Complexity : O(N) for the first for loop to take input and another O(N) for the while loop so total O(2N) or we can simply say it O(N)

// Space Complexity : There is no such extra space is need to calculate the answer so space complexity will be O(1) [constant]
